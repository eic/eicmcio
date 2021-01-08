#include "TRandom.h"

#include <fmt/core.h>

#include <JANA/JEventProcessor.h>
#include <JANA/JEvent.h>

#include <MinimalistModel/McFluxHit.h>
#include <MinimalistModel/McGeneratedParticle.h>

#include "EventlessProcessor.h"

uint64_t count;
uint64_t id;
uint64_t vtx_id;    /// Generated vertex ID
int64_t  pdg;       /// PDG value
uint64_t trk_id;    /// ID of the related track
double   charge;    /// no comments
double   dir_x;     /// Direction unit vector component at vertex
double   dir_y;
double   dir_z;
double   p;         /// total momentum
double   px;        /// dir_x * p
double   py;        /// dir_y * p
double   pz;        /// dir_z * p
double   tot_e;     /// total energy
double   t;         /// time
double   pol_x;     /// polarization
double   pol_y;
double   pol_z;


void EventlessProcessor::Init()
{
    ///  Called once at program start.
    fmt::print("EventlessProcessor: Init()\n");

    // initialize class that holds histograms and other root objects
    // 'services' is a service locator, we ask it for TFile
    root_out.init(services.Get<TFile>());
    root_out.tree->Branch("count_b", &count, "count/l");
    root_out.tree->Branch("id_b", &id, "id/l");
    root_out.tree->Branch("vtx_id_b", &vtx_id, "vtx_id/l");
    root_out.tree->Branch("pdg_b", &pdg, "pdg/L");
    root_out.tree->Branch("trk_id_b", &trk_id, "trk_id/l");
    root_out.tree->Branch("charge_b", &charge, "charge/D");
    root_out.tree->Branch("dir_x_b", &dir_x, "dir_x/D");
    root_out.tree->Branch("dir_y_b", &dir_y, "dir_y/D");
    root_out.tree->Branch("dir_z_b", &dir_z, "dir_z/D");
    root_out.tree->Branch("p_b", &p, "p/D");
    root_out.tree->Branch("px_b", &px, "px/D");
    root_out.tree->Branch("py_b", &py, "py/D");
    root_out.tree->Branch("pz_b", &pz, "pz/D");
    root_out.tree->Branch("tot_e_b", &tot_e, "tot_e/D");
    root_out.tree->Branch("t_b", &t, "t/D");
    root_out.tree->Branch("pol_x_b", &pol_x, "pol_x/D");
    root_out.tree->Branch("pol_y_b", &pol_y, "pol_y/D");
    root_out.tree->Branch("pol_z_b", &pol_z, "pol_z/D");


    // Ask service locator for parameter manager. We want to get this plugin parameters.
    auto pm = services.Get<JParameterManager>();

    // Verbosity level. 0 = show nothing. 1 - show some. 2 - mad printer
    // SetDefaultParameter actually sets the parameter value from arguments if it is specified
    verbose = 0;
    pm->SetDefaultParameter("eventless_writer:verbose", verbose, "Plugin output level. 0-almost nothing, 1-some, 2-everything");

}


void EventlessProcessor::Process(const std::shared_ptr<const JEvent>& event)
{
    ///< Called every event.

    using namespace fmt;
    using namespace minimodel;

    // debug printing
    if(verbose>1) {
        print("--------- New EVENT {} --------- ", event->GetEventNumber());
    }

    // Get the inputs needed for this factory.
    auto gen_particles = event->GetFactory<McGeneratedParticle>("smear")?   // If there is a smearing factory
                         event->Get<McGeneratedParticle>("smear"):
                         event->Get<McGeneratedParticle>();

    //*************************Loop over Generated particles *********************************
    for( auto particle: gen_particles) {

        std::lock_guard<std::recursive_mutex> locker(root_out.lock);

        count = particle->count;
        id = particle->id;
        vtx_id = particle->vtx_id;
        pdg = particle->pdg;
        trk_id = particle->trk_id;
        charge = particle->charge;
        dir_x = particle->dir_x;
        dir_y = particle->dir_y;
        dir_z = particle->dir_z;
        p = particle->p;
        px = particle->px;
        py = particle->py;
        pz = particle->pz;
        tot_e = particle->tot_e;
        t = particle->time;
        pol_x = particle->pol_x;
        pol_y = particle->pol_y;
        pol_z = particle->pol_z;

        root_out.tree->Fill();

        // >oO debug printing
        if(verbose>1) {
            printf("id=%u, pdg=%i\n", id, pdg);
            printf("px=%f, py=%f, pz=%f \n", px, py, pz);
        }

    }
}


void EventlessProcessor::Finish()
{
    ///< Called after last event of last event source has been processed.

    fmt::print("EventlessProcessor: Finish()\n");
}
