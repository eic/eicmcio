#include "EventWriterProcessor.h"

#include <TRandom.h>

#include <fmt/core.h>

#include <JANA/JEventProcessor.h>
#include <JANA/JEvent.h>

#include <MinimalistModel/McFluxHit.h>
#include <MinimalistModel/McGeneratedParticle.h>
#include <io/beagle_reader/BeagleEventData.h>
#include <io/lund_reader/LundEventData.h>

using namespace fmt;
using namespace minimodel;

// initialize static atomic
std::atomic<size_t> EventWriterProcessor::m_event_counter=0;

struct EventWriterRecord {
    static const int MaxParicles = 500;
    uint64_t ntracks;
    uint64_t event_number;
    double   has_dis_info;
    double   true_q2;
    double   true_x ;
    double   true_y ;
    double   true_w2;
    double   true_nu;
    double   true_that;

    uint64_t prt_count;
    double   weight;

    uint64_t id[MaxParicles];                    /// Unique ID inside event
    int64_t  pdg[MaxParicles];                   /// PDG value
    uint64_t trk_id[MaxParicles];                /// ID of the related track
    double   charge[MaxParicles];                /// no comments
    double   dir_x[MaxParicles];                 /// Direction unit vector component at vertex
    double   dir_y[MaxParicles];
    double   dir_z[MaxParicles];
    double   p[MaxParicles];                     /// total momentum
    double   px[MaxParicles];                    /// dir_x * p
    double   py[MaxParicles];                    /// dir_y * p
    double   pz[MaxParicles];                    /// dir_z * p
    double   tot_e[MaxParicles];                 /// total energy
    double   m[MaxParicles];                     /// m for mass or murder... or mass mu...
    double   time[MaxParicles];
    bool     is_beam[MaxParicles];               /// Is beam particle
    bool     is_stable[MaxParicles];             /// If=true means final state particle
    bool     gen_code[MaxParicles];              /// Code from generator like kfv
    uint64_t mother_id[MaxParicles];             /// mother (first mother) pid
    uint64_t mother_second_id[MaxParicles];      /// mother pid

    // polarization info
    double   has_pol_info[MaxParicles];          /// Has information about the polarization
    double   pol_x[MaxParicles];                 /// polarization
    double   pol_y[MaxParicles];
    double   pol_z[MaxParicles];

    // vertex info
    bool     has_vtx_info[MaxParicles];    /// Has vertex info
    uint64_t vtx_id[MaxParicles];                /// Generated vertex ID
    double   vtx_x[MaxParicles];                 /// vertex x
    double   vtx_y[MaxParicles];                 /// vertex y
    double   vtx_z[MaxParicles];                 /// vertex z
    double   vtx_t[MaxParicles];                 /// vertex t

    // smearing info
    bool     has_smear_info[MaxParicles];
    bool     smear_has_e[MaxParicles];           /// Energy was smeared
    bool     smear_has_p[MaxParicles];           /// Momentum was smeared
    bool     smear_has_pid[MaxParicles];         /// PID is smeared
    bool     smear_has_vtx[MaxParicles];         /// Vertex is smeared
    bool     smear_has_any_eppid[MaxParicles];   /// Has smeared e, p, or pid
    double   smear_orig_tot_e[MaxParicles];      /// original Energy
    double   smear_orig_p[MaxParicles];          /// original total momentum
    double   smear_orig_px[MaxParicles];         /// original px
    double   smear_orig_py[MaxParicles];         /// original py
    double   smear_orig_pz[MaxParicles];         /// original pz
    double   smear_orig_vtx_x[MaxParicles];      /// original px
    double   smear_orig_vtx_y[MaxParicles];      /// original py
    double   smear_orig_vtx_z[MaxParicles];      /// original pz
};

static EventWriterRecord gEwRecord;

void EventWriterProcessor::Init()
{
    ///  Called once at program start.
    fmt::print("EventWriterProcessor: Init()\n");

    // initialize class that holds histograms and other root objects
    // 'services' is a service locator, we ask it for TFile
    auto file = services.Get<TFile>();
    root_out.init(file);
    root_out.tree->Branch("evt_id",           &gEwRecord.event_number, "evt_id/l");
    root_out.tree->Branch("evt_true_q2",      &gEwRecord.true_q2,      "evt_true_q2/D");
    root_out.tree->Branch("evt_true_x",       &gEwRecord.true_x ,      "evt_true_x/D");
    root_out.tree->Branch("evt_true_y",       &gEwRecord.true_y ,      "evt_true_y/D");
    root_out.tree->Branch("evt_true_w2",      &gEwRecord.true_w2,      "evt_true_w2/D");
    root_out.tree->Branch("evt_true_nu",      &gEwRecord.true_nu,      "evt_true_nu/D");
    root_out.tree->Branch("evt_has_dis_info", &gEwRecord.has_dis_info, "evt_has_dis_info/B");
    root_out.tree->Branch("evt_prt_count",    &gEwRecord.prt_count,    "evt_prt_count/l");
    root_out.tree->Branch("evt_weight",       &gEwRecord.weight,       "evt_weight/D");

    root_out.tree->Branch("id",                   gEwRecord.id,                   "id[evt_prt_count]/l");                    /// uint64_t  Unique ID inside event
    root_out.tree->Branch("pdg",                  gEwRecord.pdg,                  "pdg[evt_prt_count]/L");                   /// int64_t   PDG value
    root_out.tree->Branch("trk_id",               gEwRecord.trk_id,               "trk_id[evt_prt_count]/D");                /// uint64_t  ID of the related track
    root_out.tree->Branch("charge",               gEwRecord.charge,               "charge[evt_prt_count]/D");                /// double    no comments
    root_out.tree->Branch("dir_x",                gEwRecord.dir_x,                "dir_x[evt_prt_count]/D");                 /// double    Direction unit vector component at vertex
    root_out.tree->Branch("dir_y",                gEwRecord.dir_y,                "dir_y[evt_prt_count]/D");                 /// double
    root_out.tree->Branch("dir_z",                gEwRecord.dir_z,                "dir_z[evt_prt_count]/D");                 /// double
    root_out.tree->Branch("p",                    gEwRecord.p,                    "p[evt_prt_count]/D");                     /// double    total momentum
    root_out.tree->Branch("px",                   gEwRecord.px,                   "px[evt_prt_count]/D");                    /// double    dir_x * p
    root_out.tree->Branch("py",                   gEwRecord.py,                   "py[evt_prt_count]/D");                    /// double    dir_y * p
    root_out.tree->Branch("pz",                   gEwRecord.pz,                   "pz[evt_prt_count]/D");                    /// double    dir_z * p
    root_out.tree->Branch("tot_e",                gEwRecord.tot_e,                "tot_e[evt_prt_count]/D");                 /// double    total energy
    root_out.tree->Branch("m",                    gEwRecord.m,                    "m[evt_prt_count]/D");                     /// double    m for mass or murder... or mass mu...
    root_out.tree->Branch("time",                 gEwRecord.time,                 "time[evt_prt_count]/D");                  /// double
    root_out.tree->Branch("is_beam",              gEwRecord.is_beam,              "is_beam[evt_prt_count]/O");               /// bool      Is beam particle
    root_out.tree->Branch("is_stable",            gEwRecord.is_stable,            "is_stable[evt_prt_count]/O");             /// bool      If=true means final state particle
    root_out.tree->Branch("gen_code",             gEwRecord.gen_code,             "gen_code[evt_prt_count]/O");              /// bool      Code from generator like kfv
    root_out.tree->Branch("mother_id",            gEwRecord.mother_id,            "mother_id[evt_prt_count]/l");             /// uint64_t  mother (first mother) pid
    root_out.tree->Branch("mother_second_id",     gEwRecord.mother_second_id,     "mother_second_id[evt_prt_count]/l");      /// uint64_t  mother pid
    root_out.tree->Branch("has_pol_info",         gEwRecord.has_pol_info,         "has_pol_info[evt_prt_count]/D");          /// double    Has information about the polarization
    root_out.tree->Branch("pol_x",                gEwRecord.pol_x,                "pol_x[evt_prt_count]/D");                 /// double    polarization
    root_out.tree->Branch("pol_y",                gEwRecord.pol_y,                "pol_y[evt_prt_count]/D");                 /// double
    root_out.tree->Branch("pol_z",                gEwRecord.pol_z,                "pol_z[evt_prt_count]/D");                 /// double
    root_out.tree->Branch("has_vtx_info",         gEwRecord.has_vtx_info,         "has_vtx_info[evt_prt_count]/O");          /// bool      Has vertex info
    root_out.tree->Branch("vtx_id",               gEwRecord.vtx_id,               "vtx_id[evt_prt_count]/l");                /// uint64_t  Generated vertex ID
    root_out.tree->Branch("vtx_x",                gEwRecord.vtx_x,                "vtx_x[evt_prt_count]/D");                 /// double    vertex x
    root_out.tree->Branch("vtx_y",                gEwRecord.vtx_y,                "vtx_y[evt_prt_count]/D");                 /// double    vertex y
    root_out.tree->Branch("vtx_z",                gEwRecord.vtx_z,                "vtx_z[evt_prt_count]/D");                 /// double    vertex z
    root_out.tree->Branch("vtx_t",                gEwRecord.vtx_t,                "vtx_t[evt_prt_count]/D");                 /// double    vertex t
    root_out.tree->Branch("has_smear_info",       gEwRecord.has_smear_info,       "has_smear_info[evt_prt_count]/O");        /// bool
    root_out.tree->Branch("smear_has_e",          gEwRecord.smear_has_e,          "smear_has_e[evt_prt_count]/O");           /// bool      Energy was smeared
    root_out.tree->Branch("smear_has_p",          gEwRecord.smear_has_p,          "smear_has_p[evt_prt_count]/O");           /// bool      Momentum was smeared
    root_out.tree->Branch("smear_has_pid",        gEwRecord.smear_has_pid,        "smear_has_pid[evt_prt_count]/O");         /// bool      PID is smeared
    root_out.tree->Branch("smear_has_vtx",        gEwRecord.smear_has_vtx,        "smear_has_vtx[evt_prt_count]/O");         /// bool      Vertex is smeared
    root_out.tree->Branch("smear_has_any_eppid",  gEwRecord.smear_has_any_eppid,  "smear_has_any_eppid[evt_prt_count]/O");   /// bool      Has smeared e, p, or pid
    root_out.tree->Branch("smear_orig_tot_e",     gEwRecord.smear_orig_tot_e,     "smear_orig_tot_e[evt_prt_count]/D");      /// double    original Energy
    root_out.tree->Branch("smear_orig_p",         gEwRecord.smear_orig_p,         "smear_orig_p[evt_prt_count]/D");          /// double    original total momentum
    root_out.tree->Branch("smear_orig_px",        gEwRecord.smear_orig_px,        "smear_orig_px[evt_prt_count]/D");         /// double    original px
    root_out.tree->Branch("smear_orig_py",        gEwRecord.smear_orig_py,        "smear_orig_py[evt_prt_count]/D");         /// double    original py
    root_out.tree->Branch("smear_orig_pz",        gEwRecord.smear_orig_pz,        "smear_orig_pz[evt_prt_count]/D");         /// double    original pz
    root_out.tree->Branch("smear_orig_vtx_x",     gEwRecord.smear_orig_vtx_x,     "smear_orig_vtx_x[evt_prt_count]/D");      /// double    original px
    root_out.tree->Branch("smear_orig_vtx_y",     gEwRecord.smear_orig_vtx_y,     "smear_orig_vtx_y[evt_prt_count]/D");      /// double    original py
    root_out.tree->Branch("smear_orig_vtx_z",     gEwRecord.smear_orig_vtx_z,     "smear_orig_vtx_z[evt_prt_count]/D");      /// double    original pz

    // Smearing
    // Ask service locator for parameter manager. We want to get this plugin parameters.
    auto pm = services.Get<JParameterManager>();

    // Verbosity level. 0 = show nothing. 1 - show some. 2 - mad printer
    // SetDefaultParameter actually sets the parameter value from arguments if it is specified
    verbose = 0;
    pm->SetDefaultParameter("event_writer:verbose", verbose, "Plugin output level. 0-almost nothing, 1-some");

}


void EventWriterProcessor::Process(const std::shared_ptr<const JEvent>& event)
{
    ///< Called every during the day. event.


    // Get the inputs needed for this factory.
    auto gen_particles = event->GetFactory<McGeneratedParticle>("smear")?   // If there is a smearing factory
                         event->Get<McGeneratedParticle>("smear"):
                         event->Get<McGeneratedParticle>();

    double true_q2;
    double true_x;
    double true_y;
    double true_w2;
    double true_nu;
    double true_that;
    bool has_true_dis;

    if(event->GetFactory<ej::BeagleEventData>())
    {
        auto beagle_event = event->GetSingle<ej::BeagleEventData>();
        true_q2      = beagle_event->trueQ2;
        true_x       = beagle_event->truex;
        true_y       = beagle_event->truey;
        true_w2      = beagle_event->trueW2;
        true_nu      = beagle_event->trueNu;
        true_that    = beagle_event->t_hat;
        has_true_dis = true;
    } else {
        true_q2 = 0;
        true_x  = 0;
        true_y  = 0;
        true_w2 = 0;
        true_nu = 0;
        true_that = 0;
        has_true_dis = false;
    }

    // TODO this is a dirty hack to have weight "quick", it needs to be done in formal way
    if(event->GetFactory<ej::LundEventData>("", false)) {
        auto lundData = event->GetSingle<ej::LundEventData>();
        gEwRecord.weight = lundData->var9;
    } else {
        gEwRecord.weight = 0;
    }

    std::lock_guard<std::recursive_mutex> locker(root_out.lock);

    uint64_t ntracks = (uint64_t) fmin(gen_particles.size(), EventWriterRecord::MaxParicles);
    uint64_t event_number = event->GetEventNumber();

    gEwRecord.event_number   =  event_number;
    gEwRecord.true_q2        =  true_q2;
    gEwRecord.true_x         =  true_x;
    gEwRecord.true_y         =  true_y;
    gEwRecord.true_w2        =  true_w2;
    gEwRecord.true_nu        =  true_nu;
    gEwRecord.true_that      =  true_that;
    gEwRecord.has_dis_info   =  has_true_dis;
    gEwRecord.prt_count      =  ntracks;


    //*************************Loop over Generated particles *********************************
    for(size_t i=0; i<gen_particles.size(); i++) {
        auto particle = gen_particles[i];

       gEwRecord.id[i] =                   particle->id                  ;   /// uint64_t  Unique ID inside event
       gEwRecord.pdg[i] =                  particle->pdg                 ;   /// int64_t   PDG value
       gEwRecord.trk_id[i] =               particle->trk_id              ;   /// uint64_t  ID of the related track
       gEwRecord.charge[i] =               particle->charge              ;   /// double    no comments
       gEwRecord.dir_x[i] =                particle->dir_x               ;   /// double    Direction unit vector component at vertex
       gEwRecord.dir_y[i] =                particle->dir_y               ;   /// double
       gEwRecord.dir_z[i] =                particle->dir_z               ;   /// double
       gEwRecord.p[i] =                    particle->p                   ;   /// double    total momentum
       gEwRecord.px[i] =                   particle->px                  ;   /// double    dir_x * p
       gEwRecord.py[i] =                   particle->py                  ;   /// double    dir_y * p
       gEwRecord.pz[i] =                   particle->pz                  ;   /// double    dir_z * p
       gEwRecord.tot_e[i] =                particle->tot_e               ;   /// double    total energy
       gEwRecord.m[i] =                    particle->m                   ;   /// double    m for mass or murder... or mass mu...
       gEwRecord.time[i] =                 particle->time                ;   /// double
       gEwRecord.is_beam[i] =              particle->is_beam             ;   /// bool      Is beam particle
       gEwRecord.is_stable[i] =            particle->is_stable           ;   /// bool      If=true means final state particle
       gEwRecord.gen_code[i] =             particle->gen_code            ;   /// bool      Code from generator like kfv
       gEwRecord.mother_id[i] =            particle->mother_id           ;   /// uint64_t  mother (first mother) pid
       gEwRecord.mother_second_id[i] =     particle->mother_second_id    ;   /// uint64_t  mother pid
       gEwRecord.has_pol_info[i] =         particle->has_pol_info        ;   /// double    Has information about the polarization
       gEwRecord.pol_x[i] =                particle->pol_x               ;   /// double    polarization
       gEwRecord.pol_y[i] =                particle->pol_y               ;   /// double
       gEwRecord.pol_z[i] =                particle->pol_z               ;   /// double
       gEwRecord.has_vtx_info[i] =         particle->has_vtx_info        ;   /// bool      Has vertex info
       gEwRecord.vtx_id[i] =               particle->vtx_id              ;   /// uint64_t  Generated vertex ID
       gEwRecord.vtx_x[i] =                particle->vtx_x               ;   /// double    vertex x
       gEwRecord.vtx_y[i] =                particle->vtx_y               ;   /// double    vertex y
       gEwRecord.vtx_z[i] =                particle->vtx_z               ;   /// double    vertex z
       gEwRecord.vtx_t[i] =                particle->vtx_t               ;   /// double    vertex t
       gEwRecord.has_smear_info[i] =       particle->has_smear_info      ;   /// bool
       gEwRecord.smear_has_e[i] =          particle->smear.has_e         ;   /// bool      Energy was smeared
       gEwRecord.smear_has_p[i] =          particle->smear.has_p         ;   /// bool      Momentum was smeared
       gEwRecord.smear_has_pid[i] =        particle->smear.has_pid       ;   /// bool      PID is smeared
       gEwRecord.smear_has_vtx[i] =        particle->smear.has_vtx       ;   /// bool      Vertex is smeared
       gEwRecord.smear_has_any_eppid[i] =  particle->smear.has_any_eppid ;   /// bool      Has smeared e, p, or pid
       gEwRecord.smear_orig_tot_e[i] =     particle->smear.orig_tot_e    ;   /// double    original Energy
       gEwRecord.smear_orig_p[i] =         particle->smear.orig_p        ;   /// double    original total momentum
       gEwRecord.smear_orig_px[i] =        particle->smear.orig_px       ;   /// double    original px
       gEwRecord.smear_orig_py[i] =        particle->smear.orig_py       ;   /// double    original py
       gEwRecord.smear_orig_pz[i] =        particle->smear.orig_pz       ;   /// double    original pz
       gEwRecord.smear_orig_vtx_x[i] =     particle->smear.orig_vtx_x    ;   /// double    original px
       gEwRecord.smear_orig_vtx_y[i] =     particle->smear.orig_vtx_y    ;   /// double    original py
       gEwRecord.smear_orig_vtx_z[i] =     particle->smear.orig_vtx_z    ;   /// double    original pz
    }

    m_event_counter++;
    root_out.tree->Fill();
}


void EventWriterProcessor::Finish()
{
    ///< Called after last event of last event source has been processed.
    fmt::print("EventWriterProcessor::events written: {}\n", m_event_counter);
    fmt::print("EventWriterProcessor::Finish()\n");
}
