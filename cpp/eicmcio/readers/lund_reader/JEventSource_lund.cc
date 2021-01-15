#include <iostream>
#include <string>

#include <fmt/format.h>     // For format and print functions

#include <JANA/JEventSourceGeneratorT.h>
#include <JANA/JSourceFactoryGenerator.h>

#include <MinimalistModel/McGeneratedParticle.h>

#include "LundEventData.h"
#include "LundParticle.h"
#include "JEventSource_lund.h"

#include <ejana/TextEventFileReader.h>
#include <ejana/EStringHelpers.h>
#include <TDatabasePDG.h>


using namespace eicmcio;
using namespace minimodel;

//----------------
// Constructor
//----------------
JEventSource_lund::JEventSource_lund(const std::string& source_name, JApplication *app):
    JEventSource(source_name, app),
    services(app)
{
    using namespace fmt;


    // Open file
    print("JEventSource_lund: Opening TXT file {}\n", source_name);

    text_reader = std::unique_ptr<eicmcio::TextEventFileReader>(new TextEventFileReader(
            source_name,
            [this](uint64_t line_num, const std::string& line){
                if(line_num == 0 && eicmcio::TrimCopy(line) == "PYTHIA EVENT FILE") {
                    this->m_is_eic_pythia = true;
                }

                if(this->m_is_eic_pythia) {
                    if(line_num<6 || line.empty()) {
                        // The first lines are crap
                        return TextEventLineDecisions::Skip;
                    }

                    // skip those ===== in the beginning and end of events
                    if(line[2] == '=')  {
                        return TextEventLineDecisions::Skip;
                    }
                } else {
                    // skip comments #
                    if(eicmcio::StartsWith(eicmcio::TrimCopy(line), "#"))  {
                        return TextEventLineDecisions::Skip;
                    }
                }

                return TextEventLineDecisions::Tokenize;
            },

            [this](uint64_t, const std::vector<std::string>& tokens){

                if(this->m_is_eic_pythia) {
                    // Eic Pythia has extended number of columns in event and  (fortunately)
                    // the same number of columns in particle record

                    if(tokens.size() > 15)  return TextEventLineDecisions::Event;
                    return TextEventLineDecisions::Particle;

                } else {
                    if(tokens.size() < 12)  return TextEventLineDecisions::Event;
                    return TextEventLineDecisions::Particle;
                }
            }));

    //Make factory generator that will make factories for all types provided by the event source
    //This is necessary because the JFactorySet needs all factories ahead of time
    //Make sure that all types are listed as template arguments here!!
    SetFactoryGenerator(new JSourceFactoryGenerator<>());

    // Event index = number of event read
    entry_index = 0;

    eventSourceControl = new EventSourceControl(app->GetJParameterManager());
}


//----------------
// GetEvent
//----------------
void JEventSource_lund::GetEvent(std::shared_ptr<JEvent> event)
{
    // Read an event from the source and copy the vital info into the Geant4EicEventData structure.

    LundEventData* event_data;

    // Skip as many events as necessary
    auto decision = eventSourceControl->Decide(entry_index);
    while(decision == EventControlDecisions::Skip) {
        if (!this->ReadNextEvent()){
            throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
        }
        text_reader->GetEvent();
        entry_index++;
        decision = eventSourceControl->Decide(entry_index);
    }

    if (decision == EventControlDecisions::Stop){
        throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
    }
    else {
        // Parsing this event
        if (!this->ReadNextEvent()) {
            throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
        }
        event_data = new LundEventData();
        event_data->text_event = text_reader->GetEvent();
        event_data->Parse();
        event->Insert(event_data);
        entry_index++;
    }
}

bool JEventSource_lund::ReadNextEvent(){
    uint line_count = 0;
    // Read file lines until full event is read
    while(!text_reader->IsNewEventReady())
    {
        // Read next line. false = EOF
        if(!text_reader->ParseNextLine()) {

            // We hit the end of the file, but...
            // In the end of file we may have the last event compiled
            // We will process the last event and the next time hit the throw below
            if(text_reader->IsNewEventReady()) break;
            return false;
        }

        // Check if there is no new event for too long
        if (line_count++ > 1000) {

            auto message = fmt::format("ERROR. {} lines where read from file and no new/end of event found. "
                                       "This error often means, that this is not BeAGLE file");
            throw std::runtime_error(message);
        }
    }
    return true;
}

// This method gets called to actually produce the MyCluster objects for the event.
// We use "partial template specialization" to define this here in place of the default
// one defined in the templated JFactoryT class.
template<>
void JFactoryT<eicmcio::LundParticle>::Process(const std::shared_ptr<const JEvent>& event) {
    auto text_event_record = event->GetSingle<eicmcio::LundEventData>();

    // text_event_record has just tokenized text from

    // Fill Original particles information
    std::vector<LundParticle *> particles;
    for(size_t i=0; i < text_event_record->text_event->particle_values.size(); i++)
    {
        auto& particle_tokens = text_event_record->text_event->particle_values[i];
        if(particle_tokens.empty()) continue;

        try {
            auto particle = new LundParticle();
            particle->index             = std::stoi(particle_tokens[0]);   // I line index, runs from 1 to nrTracks
            particle->ks_code           = std::stoi(particle_tokens[1]);   // I status code KS (1: stable particles 11: particles which decay 55; radiative photon)
            particle->kf_code           = std::stoi(particle_tokens[2]);   // I particle KF code (211: pion, 2112:n, ....)
            particle->parent_index      = std::stoi(particle_tokens[3]);   // I line number of parent particle
            particle->first_child_index = std::stoi(particle_tokens[4]);   // I normally the line number of the first daughter; it is 0 for an undecayed particle or unfragmented parton
            particle->last_child_index  = std::stoi(particle_tokens[5]);   // I normally the line number of the last daughter; it is 0 for an undecayed particle or unfragmented parton.
            particle->px                = std::stod(particle_tokens[6]);   // D px of particle
            particle->py                = std::stod(particle_tokens[7]);   // D py of particle
            particle->pz                = std::stod(particle_tokens[8]);   // D pz of particle
            particle->e                 = std::stod(particle_tokens[9]);   // D Energy of particle
            particle->m                 = std::stod(particle_tokens[10]);  // D mass of particle
            particle->vx                = std::stod(particle_tokens[11]);  // D x vertex information
            particle->vy                = std::stod(particle_tokens[12]);  // D y vertex information
            particle->vz                = std::stod(particle_tokens[13]);  // D z vertex information
            particles.push_back(particle);
        }

        catch(std::exception &ex) {
            auto err_msg = fmt::format("Error parsing particle '{}' of event which started at line: '{}', Original error message: '{}'",
                                       i, text_event_record->text_event->started_at_line, ex.what());
            fmt::print("[ERROR] {}\n", err_msg);
            throw std::runtime_error(err_msg);
        }
    }

    Set(std::move(particles));
}

/// Produces McGeneratedParticle
template<>
void JFactoryT<minimodel::McGeneratedParticle>::Process(const std::shared_ptr<const JEvent>& event) {
    static TDatabasePDG *m_pdg_db = nullptr;

    if(!m_pdg_db) {
        m_pdg_db = TDatabasePDG::Instance();
    }

    auto lund_particles = event->Get<eicmcio::LundParticle>();

    std::vector<McGeneratedParticle *> particles;
    for(auto b_part: lund_particles) {
        auto mc_part = new McGeneratedParticle();

        mc_part->count  = 0 ;
        mc_part->id     = b_part->index;

        mc_part->vtx_id = 0;                /// Generated vertex ID
        mc_part->pdg    = b_part->kf_code;  /// PDG value
        mc_part->trk_id = 0;                /// ID of the related track
        mc_part->px     = b_part->px;       /// dir_x * p
        mc_part->py     = b_part->py;       /// dir_y * p
        mc_part->pz     = b_part->pz;       /// dir_z * p
        mc_part->tot_e  = b_part->e;        /// total energy
        mc_part->has_pol_info = false;      /// Has polarization info
        mc_part->pol_x  = 0;                /// polarization
        mc_part->pol_y  = 0;
        mc_part->pol_z  = 0;
        mc_part->is_stable = b_part->ks_code == 1;
        mc_part->gen_code = b_part->ks_code;
        mc_part->m = b_part->m;

        auto pdg_particle = m_pdg_db->GetParticle(b_part->kf_code);
        if(pdg_particle) {
            mc_part->charge = pdg_particle->Charge()/3;
        }

        // Vertex info
        mc_part->has_vtx_info = true;       /// Has vertex information
        mc_part->vtx_x = b_part->vx;        /// vertex info
        mc_part->vtx_y = b_part->vy;
        mc_part->vtx_z = b_part->vz;
        mc_part->vtx_t = 0;

        // Mother particle index
        mc_part->mother_id = b_part->parent_index;

        /// total momentum
        mc_part->p = sqrt(b_part->px*b_part->px+b_part->py*b_part->py + b_part->pz *b_part->pz);
        if(FP_ZERO != std::fpclassify(mc_part->p))   // Check p is not zero for the next division
        {
            /// Direction unit vector component at vertex
            mc_part->dir_x = mc_part->px/mc_part->p;
            mc_part->dir_y = mc_part->py/mc_part->p;
            mc_part->dir_z = mc_part->pz/mc_part->p;
        } else {
            mc_part->dir_x = 0;
            mc_part->dir_y = 0;
            mc_part->dir_z = 0;
        }

        particles.push_back(mc_part);
    }

    Set(std::move(particles));
}

