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

#include <MinimalistModel/McFluxHit.h>
#include <ejana/EServicePool.h>
#include <ejana/EventSourceControl.h>

#include "RootEventSelector_1_0.h"



class Geant4EicEventSource: public JEventSource {
public:

	explicit Geant4EicEventSource(std::string& source_name, JApplication *app = nullptr);
	virtual ~Geant4EicEventSource();

	/** Get description of this event source */
	std::string GetVDescription() const override {return GetDescription();}

	// A description of this source type must be provided as a static member
	static std::string GetDescription() { return "Reads GEANT4EIC generated ROOT file"; }

	/** Reads next event and returns it as JEvent from */
	void GetEvent(std::shared_ptr<JEvent>) override;

	protected:
		TFile *file;
        TTree *event_tree;
        JLEICGeantSelector_1_0* event_selector;
		int64_t entry_index;			 // int64 but not uint64 because of the root GetEntries
		ej::EServicePool services;
		ej::EventSourceControl* eventSourceControl;
};

#endif // _JEventSourceGenerator_jleic_root_

