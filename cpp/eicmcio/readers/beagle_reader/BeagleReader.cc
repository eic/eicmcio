#include <iostream>
#include <string>

#include <MinimalistModel/McGeneratedParticle.h>
#include <memory>

#include "BeagleEventData.h"
#include "BeagleParticle.h"
#include "BeagleReader.h"


//----------------
// Constructor
//----------------
BeagleReader::BeagleReader(const std::string& source_name):
{

    text_reader = std::unique_ptr<ej::TextEventFileReader>(new TextEventFileReader(
            source_name,
            [](uint64_t line_num, const std::string& line) {
                // skip first 6 lines of beagle event
                if(line_num<6) return TextEventLineDecisions::Skip;

                // Remove white spaces in the beginning
                auto trimmed_line = ej::TrimCopy(line);

                // skip those ===== in the beginning and end of events
                if(ej::StartsWith(trimmed_line, "="))  {
                    return TextEventLineDecisions::Skip;
                }

                // Looks like it is a data line so we need it to be tokenized
                return TextEventLineDecisions::Tokenize;
            },

            [](uint64_t, const std::vector<std::string>& tokens){

                // The decision on event is easy.
                // Particle record has 18 columns, event header more than 50. So:
                if(tokens.size() > 18)  return TextEventLineDecisions::Event;

                // Looks like it is a data-line so we need it to be tokenized
                return TextEventLineDecisions::Particle;
            }));

    // Event index = number of event read
    entry_index = 0;

    eventSourceControl = new EventSourceControl(app->GetJParameterManager());
    print("EventSourceControl: created \n");
}


//----------------
// GetEvent
//----------------
void BeagleReader::GetEvent(std::shared_ptr<JEvent> event)
{
    // Read an event from the source and copy the vital info into the Geant4EicEventData structure.

    BeagleEventData* event_data;

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
        event_data = new BeagleEventData();
        event_data->text_event = text_reader->GetEvent();
        event_data->Parse();
        event->SetEventNumber(entry_index);
        event->Insert(event_data);
        entry_index++;
    }
}

bool BeagleReader::ReadNextEvent(){
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
void JFactoryT<ej::BeagleParticle>::Process(const std::shared_ptr<const JEvent>& event) {

    auto text_event_record = event->GetSingle<ej::BeagleEventData>();

    // text_event_record has just tokenized text from

    // Fill Original particles information
    std::vector<BeagleParticle *> particles;
    for(auto particle_tokens :text_event_record->text_event->particle_values)
    {
        auto particle = new BeagleParticle();
        particle->index          = std::stoi(particle_tokens[0]);   // I line index, runs from 1 to nrTracks
        particle->ks_code        = std::stoi(particle_tokens[1]);   // I status code KS: KS=1 is the only stable final state particle code, Use NoBAM variable (below) to specify origin of particle
        particle->kf_code        = std::stoi(particle_tokens[2]);   // I particle KF code (211: pion, 2112:n, ....). Code 80000 refers to a nucleus, specified in more detail by A=IDRES(I), Z=IDXRES(I)
        particle->mother_second  = std::stoi(particle_tokens[3]);   // I line number of second mother particle
        particle->mother_first   = std::stoi(particle_tokens[4]);   // I line number of first mother particle
        particle->daughter_first = std::stoi(particle_tokens[5]);   // I normally the line number of the first daughter.
        particle->daughter_last  = std::stoi(particle_tokens[6]);   // I normally the line number of the last daughter.
        particle->px             = std::stod(particle_tokens[7]);   // D px of particle (GeV/c)
        particle->py             = std::stod(particle_tokens[8]);   // D py of particle (GeV/c)
        particle->pz             = std::stod(particle_tokens[9]);   // D pz of particle (GeV/c)
        particle->e              = std::stod(particle_tokens[10]);  // D Energy of particle (GeV)
        particle->m              = std::stod(particle_tokens[11]);  // D mass of particle (GeV/c^2)
        particle->vx             = std::stod(particle_tokens[12]);  // D x vertex information (mm)
        particle->vy             = std::stod(particle_tokens[13]);  // D y vertex information (mm)
        particle->vz             = std::stod(particle_tokens[14]);  // D z vertex information (mm)
        particle->baryon_number  = std::stoi(particle_tokens[15]);  // I Baryon number, or A for a nucleus (IDHKK(I)=80000), fractional B set to 0.
        particle->charge         = std::stoi(particle_tokens[16]);  // I Particle charge, (Z for a nucleus), 0 for fractional charge.
        particle->origin         = std::stoi(particle_tokens[17]);  // I Flag describing the particle origin, particularly for final state particles.
        particles.push_back(particle);
    }

    Set(std::move(particles));
}


/// Produces McGeneratedParticle
template<>
void JFactoryT<minimodel::TrueDisInfo>::Process(const std::shared_ptr<const JEvent>& event) {

    auto beable_event = event->GetSingle<BeagleEventData>();

    auto result = new TrueDisInfo();

    result->x = beable_event->truex;
    result->q2 = beable_event->trueQ2;
    result->y = beable_event->truey;
    result->w2 = beable_event->trueW2;
    result->nu = beable_event->trueNu;
    result->t_hat = beable_event->t_hat;

    event->Insert(result);
}



/// Produces McGeneratedParticle
template<>
void JFactoryT<minimodel::McGeneratedParticle>::Process(const std::shared_ptr<const JEvent>& event) {

    auto beagle_particles = event->Get<ej::BeagleParticle>();

    std::vector<McGeneratedParticle *> particles;
    for(auto b_part: beagle_particles) {
        auto mc_part = new McGeneratedParticle();
        mc_part->count  = beagle_particles.size();
        mc_part->id     = b_part->index;
        mc_part->vtx_id = 0;                /// Generated vertex ID
        mc_part->pdg    = b_part->kf_code;  /// PDG value
        mc_part->trk_id = 0;                /// ID of the related track
        mc_part->charge = b_part->charge;   /// no comments
        mc_part->px     = b_part->px;       /// dir_x * p
        mc_part->py     = b_part->py;       /// dir_y * p
        mc_part->pz     = b_part->pz;       /// dir_z * p
        mc_part->tot_e  = b_part->e;        /// total energy
        mc_part->m      = b_part->m;        /// mass
        mc_part->time   = 0;                /// No time info here
        mc_part->pol_x  = 0;                /// polarization
        mc_part->pol_y  = 0;
        mc_part->pol_z  = 0;
        mc_part->is_stable = b_part->ks_code == 1;
        mc_part->gen_code = b_part->ks_code;
        mc_part->mother_id = b_part->mother_first;
        mc_part->mother_second_id = b_part->mother_second;

        mc_part->has_vtx_info = true;
        mc_part->vtx_id = 0;
        mc_part->vtx_x  = b_part->vx;       /// vertex position
        mc_part->vtx_y  = b_part->vy;
        mc_part->vtx_z  = b_part->vz;
        mc_part->vtx_t  =0;


        /// total momentum
        mc_part->p = sqrt(b_part->px*b_part->px+b_part->py*b_part->py + b_part->pz *b_part->pz);
        if(FP_ZERO != std::fpclassify(mc_part->p))   // Check p is not zero for the next division
        {
            /// Direction unit vector component at vertex
            mc_part->dir_x  = mc_part->px/mc_part->p;
            mc_part->dir_y  = mc_part->py/mc_part->p;
            mc_part->dir_z  = mc_part->pz/mc_part->p;
        } else {
            mc_part->dir_x = 0;
            mc_part->dir_y = 0;
            mc_part->dir_z = 0;
        }

        particles.push_back(mc_part);
    }

    Set(std::move(particles));
}

