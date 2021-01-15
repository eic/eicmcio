#ifndef _JEventSource_jleic_root_
#define _JEventSource_jleic_root_

#include <memory>

#include <JANA/JEventSource.h>
#include <JANA/JEvent.h>

#include <MinimalistModel/McFluxHit.h>
#include <ejana/EServicePool.h>
#include <ejana/EventSourceControl.h>
#include <HepMC3/ReaderAsciiHepMC2.h>

#include "HepMC3/GenEvent.h"


class JEventSource_hepmc: public JEventSource {
public:

	explicit JEventSource_hepmc(const std::string& source_name, JApplication *app = nullptr);
	~JEventSource_hepmc() override;

	/** Get description of this event source */
	std::string GetVDescription() const override {return GetDescription(); }

    // A description of this source type must be provided as a static member
    static std::string GetDescription() { return "BeAGLE generated Text file"; }

	/** Reads next event and returns it as JEvent from */
    void GetEvent(std::shared_ptr<JEvent>) override;

	/** Provides a factory with objects */
	bool GetObjects(const std::shared_ptr<const JEvent>&, JFactory* ) override {return false;}

	protected:
		eicmcio::EServicePool services;                 /// Service locator
        std::unique_ptr<HepMC3::Reader> hepmc_input;

	private:
        uint64_t read_entries_count = 0;           /// int64 but not uint64 because of the root GetEntries
        eicmcio::EventSourceControl* eventSourceControl;

};

#endif // _JEventSourceGenerator_jleic_root_

