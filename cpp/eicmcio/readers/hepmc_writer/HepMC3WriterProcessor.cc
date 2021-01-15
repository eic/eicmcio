#include "HepMC3WriterProcessor.h"

#include <TRandom.h>

#include <fmt/core.h>

#include <JANA/JEventProcessor.h>
#include <JANA/JEvent.h>

#include <MinimalistModel/McFluxHit.h>
#include <MinimalistModel/McGeneratedParticle.h>
#include <io/beagle_reader/BeagleEventData.h>
#include <io/lund_reader/LundEventData.h>
#include <HepMC3/HEPEVT_Wrapper.h>
#include <HepMC3/GenRunInfo.h>
#include <HepMC3/GenEvent.h>
#include <HepMC3/GenParticle.h>
#include <HepMC3/WriterAscii.h>

using namespace fmt;
using namespace minimodel;

// initialize static atomic
std::atomic<size_t> HepMC3WriterProcessor::m_event_counter=0;


void HepMC3WriterProcessor::Init()
{
    ///  Called once at program start.
    fmt::print("HepMC3WriterProcessor: Init()\n");

    // Ask service locator for parameter manager. We want to get this plugin parameters.
    auto pm = this->GetApplication()->GetJParameterManager();

    // Verbosity level. 0 = show nothing. 1 - show some. 2 - mad printer
    // SetDefaultParameter actually sets the parameter value from arguments if it is specified
    verbose = 0;
    pm->SetDefaultParameter("hepmc_writer:verbose", verbose, "Plugin output level. 0-almost nothing, 1-some");

    out_file_name = "output.hepmc";
    pm->SetDefaultParameter("hepmc_writer:output", out_file_name, "Output file name");

    m_run_info = std::make_shared<HepMC3::GenRunInfo>();

    std::vector<std::string> weightnames;
    weightnames.push_back("0");
    m_run_info->set_weight_names(weightnames);

    m_writer.reset(new HepMC3::WriterAscii(out_file_name));

    // We will use HEPEVT_Wrapper to convert HEP events to HepMC3
    static char* hepevtbuffer = (char*)(new struct HEPEVT());
    HepMC3::HEPEVT_Wrapper::set_hepevt_address(hepevtbuffer);
}


void HepMC3WriterProcessor::Process(const std::shared_ptr<const JEvent>& event)
{
    using namespace HepMC3;
    ///< Called every during the day. event.

    HEPEVT_Wrapper::zero_everything();

    m_event_counter++;
    double true_q2;
    double true_x;
    double true_y;
    double true_w2;
    double true_nu;
    bool has_true_dis;
    if(event->GetFactory<eicmcio::BeagleEventData>())
    {
        auto beagle_event = event->GetSingle<eicmcio::BeagleEventData>();
        true_q2      = beagle_event->trueQ2;
        true_x       = beagle_event->truex;
        true_y       = beagle_event->truey;
        true_w2      = beagle_event->trueW2;
        true_nu      = beagle_event->trueNu;
        has_true_dis = true;
    } else {
        true_q2 = 0;
        true_x  = 0;
        true_y  = 0;
        true_w2 = 0;
        true_nu = 0;
        has_true_dis = false;
    }

    auto particles = event->Get<minimodel::McGeneratedParticle>();

    HEPEVT_Wrapper::set_event_number(event->GetEventNumber());
    HEPEVT_Wrapper::set_number_entries(particles.size());

    for(const auto& particle: particles) {

        HEPEVT_Wrapper::set_status(particle->id, particle->gen_code);
        HEPEVT_Wrapper::set_id(particle->id, particle->id);
        HEPEVT_Wrapper::set_parents(particle->id, particle->mother_id,std::max(particle->mother_id, particle->mother_second_id));/* Pythia writes second mother 0*/
        HEPEVT_Wrapper::set_children(particle->id, 0, 0);
        HEPEVT_Wrapper::set_momentum(particle->id, particle->px,  particle->py,  particle->pz,  particle->tot_e);
        HEPEVT_Wrapper::set_mass(particle->id,  particle->m);
        HEPEVT_Wrapper::set_position(particle->id,  particle->vtx_x,  particle->vtx_y,  particle->vtx_z,  particle->time);
    }

    GenEvent evt;
    evt.clear();

    bool result = HEPEVT_Wrapper::HEPEVT_to_GenEvent(&evt);


    std::vector<double> wts;
    wts.push_back(1.0);

            evt.set_run_info(m_run_info);
            evt.weights()=wts;

}


void HepMC3WriterProcessor::Finish()
{
    ///< Called after last event of last event source has been processed.
    fmt::print("hepmc_writer::events written: {}\n", m_event_counter);
    fmt::print("hepmc_writer::Finish()\n");
}
