#include <iostream>
#include <string>

#include <fmt/format.h>     // For format and print functions
#include <fmt/ostream.h>    // For print(std::cerr, ...)

#include <JANA/JEventSourceGeneratorT.h>
#include <JANA/JSourceFactoryGenerator.h>
#include <JANA/Services/JParameterManager.h>

#include <MinimalistModel/McFluxHit.h>
#include <MinimalistModel/McGeneratedParticle.h>
#include <MinimalistModel/McGeneratedVertex.h>
#include <MinimalistModel/McTrack.h>

#include "HepMCEventData.h"
#include "JEventSource_hepmc.h"

#include <ejana/TextEventFileReader.h>
#include <ejana/EStringHelpers.h>
#include <ejana/EventSourceControl.h>
#include <TDatabasePDG.h>

#include <HepMC3/ReaderAsciiHepMC2.h>
#include <HepMC3/ReaderAscii.h>
#include <HepMC3/GenVertex.h>
#include <HepMC3/GenParticle.h>
#include <HepMC3/FourVector.h>

using namespace eicmcio;
using namespace minimodel;

//----------------
// Constructor
//----------------
JEventSource_hepmc::JEventSource_hepmc(const std::string& source_name, JApplication *app):
    JEventSource(source_name, app),
    services(app)
{
    using namespace fmt;
    print("JEventSource_hepmc: Opening TXT file {}\n", source_name);

    // Test that file exists. The {braces} to auto close infile
    {
        std::ifstream infile(source_name);
        if(!infile.good()) {
            auto message = fmt::format("JEventSource_hepmc:: Can't open input file '{}'. "
                                       "It doesn't exists or this proc have no rights/access", source_name);
            throw std::runtime_error(message);
        }
    }

    /// Pull parameter manager to get events to process
    auto pm = services.Get<JParameterManager>();
    eventSourceControl = new EventSourceControl(pm);

    int hepmc_version = 2;
    pm->SetDefaultParameter("hepmc_reader:hepmc_version", hepmc_version, "HepMC version. 2 - default. 3 for HepMC3");

    // Open file eventually
    if(hepmc_version == 2) {
        hepmc_input.reset(new HepMC3::ReaderAsciiHepMC2(source_name));
    } else {
        hepmc_input.reset(new HepMC3::ReaderAscii(source_name));
    }
}


//----------------
// Destructor
//----------------
JEventSource_hepmc::~JEventSource_hepmc()
{

}

//----------------
// GetEvent
//----------------
void JEventSource_hepmc::GetEvent(std::shared_ptr<JEvent> event)
{
    // Read an event from the source and copy the vital info into JANA2 EventSource system

    auto hepmc_event = std::make_shared<HepMC3::GenEvent>();

    //skip as many events as necessary
    auto decision = eventSourceControl->Decide(read_entries_count);
    while(decision == EventControlDecisions::Skip){
        bool result = hepmc_input->read_event(*hepmc_event);
        // we are out of events
        if(!result) {
            throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
        }
        read_entries_count++;
        decision = eventSourceControl->Decide(read_entries_count);
    }

    if (decision == EventControlDecisions::Stop){
        throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
    }
    else{
        hepmc_input->read_event(*hepmc_event);

        if(hepmc_input->failed()) {
            throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
        }
        else{
            // Put the event into Jana EventSource
            auto data = new HepMCEventData(hepmc_event);
            event->SetEventNumber(read_entries_count);
            event->Insert(data);
            read_entries_count++;
        }
    }
}

/// Produces McGeneratedVertex out of HepMCEventData
template<>
void JFactoryT<minimodel::McGeneratedVertex>::Process(const std::shared_ptr<const JEvent>& jana_event) {

    auto event_data = const_cast<eicmcio::HepMCEventData*>(jana_event->GetSingle<eicmcio::HepMCEventData>());
    auto hepmc_event = event_data->hepmc_event;
    std::vector<minimodel::McGeneratedVertex*> mm_vertexes;

    // loop through vertexes ...
    for (const auto & hepmc_vertex : hepmc_event->vertices()) {

        // is it a real vertex?
        bool is_real_vtx = false;
        for (const auto &particle: hepmc_vertex->particles_out()) {
            if (!particle->end_vertex() && particle->status() == 1) {
                is_real_vtx = true;
                break;
            }
        }

        // process only real vertexes
        if (!is_real_vtx) continue;

        // copy the data from HepMC vertex to MinimalistModel vertex
        auto mm_vertex = new minimodel::McGeneratedVertex();
        mm_vertex->id = hepmc_vertex->id();

        HepMC3::FourVector pos = hepmc_vertex->position();
        mm_vertex->x = pos.x();
        mm_vertex->y = pos.y();
        mm_vertex->z = pos.z();
        mm_vertex->time = pos.t();
        mm_vertex->part_count = hepmc_vertex->particles_out().size();
        mm_vertexes.push_back(mm_vertex);
    }

    // Save vertexes in JANA factory
    jana_event->Insert(mm_vertexes);
}



/// Produces McGeneratedParticle
template<>
void JFactoryT<minimodel::McGeneratedParticle>::Process(const std::shared_ptr<const JEvent>& jana_event)
{
    static std::recursive_mutex pdg_db_lock;

    auto hepmc_event = jana_event->GetSingle<eicmcio::HepMCEventData>()->hepmc_event;

    std::vector<minimodel::McGeneratedParticle*> result_particles;

    // >oO debug fmt::print("=============================\n");


    for (auto hepmc_part : hepmc_event->particles()) {

        // >oO debug fmt::print("{:<10} {:<10} {:<10} {}\n", hepmc_part->barcode(), hepmc_part->status(), hepmc_part->is_beam(), hepmc_part->pdg_id());
        auto result_part = new McGeneratedParticle();
        result_part->pdg = hepmc_part->pdg_id();
        result_part->id = hepmc_part->id();
        result_part->is_beam = hepmc_part->status() == 4;

        // braces for recursive_mutex locking scope
        {
            // Getting charge out of PDG code. Mutex is for TDatabasePDG multithread usage
            std::lock_guard<std::recursive_mutex> locker(pdg_db_lock);
            auto pdg_db = TDatabasePDG::Instance();
            if(pdg_db == nullptr) {
                fmt::print("(!) Warning (!). HepMC EventSource >> TDatabasePDG::Instance() == null\n");
            }
            else {
                int pdg = hepmc_part->pdg_id();
                auto pdgParticle = pdg_db->GetParticle(pdg);
                if(pdgParticle) {
                    double charge = pdgParticle->Charge()/3;
                    result_part->charge=charge;
                }
                else {
                    // TODO warn or not?
                    //fmt::print("(!) Warning (!). Unknown particle {}\n", pdg);
                }
            }
        }

        // Momentum
        auto& p = hepmc_part->momentum();

        result_part->is_stable = hepmc_part->status() == 1;
        result_part->gen_code = hepmc_part->status();

        result_part->p = p.p3mod();
        result_part->px = p.x();
        result_part->py = p.y();
        result_part->pz = p.z();
        result_part->dir_x = result_part->px/result_part->p;
        result_part->dir_y = result_part->py/result_part->p;
        result_part->dir_z = result_part->pz/result_part->p;
        result_part->tot_e = p.e();
        result_part->m = p.m();

        uint32_t parent_count = 0;

        if (hepmc_part->production_vertex()) {
            for (const auto & parent_particle: hepmc_part->parents()) {

                if(parent_count==0) {
                    result_part->mother_id = parent_particle->id();
                }
                if(parent_count==1) {
                    result_part->mother_second_id = parent_particle->id();
                }
                parent_count ++;
            }
        }


        // Vertex is
        if(hepmc_part->production_vertex()) {
            result_part->vtx_id = hepmc_part->production_vertex()->id();
        }

        auto hepmc_vertex = hepmc_part->production_vertex();
        if(hepmc_vertex) {
            result_part->has_vtx_info = true;
            result_part->vtx_id = hepmc_vertex->id();
            result_part->vtx_x = hepmc_vertex->position().x();
            result_part->vtx_y = hepmc_vertex->position().y();
            result_part->vtx_z = hepmc_vertex->position().z();
            result_part->vtx_t = hepmc_vertex->position().t();
        }

        result_particles.push_back(result_part);
    }

    jana_event->Insert(result_particles);
}

