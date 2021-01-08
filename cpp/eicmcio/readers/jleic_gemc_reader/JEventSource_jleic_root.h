// $Id$
//
//    File: JEventSource_jleic_root.h
// Created: Tue Mar 27 23:15:54 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef _JEventSource_jleic_root_
#define _JEventSource_jleic_root_


#include <JANA/JEventSource.h>
#include <JANA/JEvent.h>

#include <flux.h>
#include <generated.h>
#include <GemcFluxHit.h>
#include <GemcGenerated.h>
#include <vtx_fit/VertexTrackerHit.h>


class JEventSource_jleic_root: public JEventSource {
public:

	explicit JEventSource_jleic_root(std::string& source_name, JApplication *app = nullptr);
	virtual ~JEventSource_jleic_root();

	/** Returns a type name */
	std::string GetType() const override {return GetDemangledName<JEventSource_jleic_root>();}

	/** Get description of this event source */
	std::string GetVDescription() const override {return "GEMC generated ROOT file";}

	// A description of this source type must be provided as a static member
	static std::string GetDescription() { return "GEMC generated ROOT file"; }

	/** Reads next event and returns it as JEvent from */
    void GetEvent(std::shared_ptr<JEvent>) override;

	/** Provides a factory with objects */
	bool GetObjects(const std::shared_ptr<const JEvent>& aEvent, JFactory* aFactory) override;

	protected:
		TFile *rootfile;
		TTree *tree_flux;
		TTree *tree_generated;
		flux* flux_selector;
		generated* generated_selector;
		int64_t _event_index;			 // int64 but not uint64 because of the root GetEntries
};

#endif // _JEventSourceGenerator_jleic_root_

