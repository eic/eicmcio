// $Id$
//
//    File: JEventSource_jleic_root.h
// Created: Tue Mar 27 23:15:54 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef _BeagleEventSource_HEADER_
#define _BeagleEventSource_HEADER_

#include <fstream>

#include "BeagleEventData.h"
#include "BeagleParticle.h"


class BeagleReader {
public:

	explicit BeagleReader();
	~BeagleReader();


	/** Reads next event and returns it as JEvent from */
    void GetEvent(std::shared_ptr<JEvent>) override;

	/** Provides a factory with objects */
	bool GetObjects(const std::shared_ptr<const JEvent>&, JFactory* ) override {return false;}

	protected:
		int64_t entry_index;			        // int64 but not uint64 because of the root GetEntries
		ej::EServicePool services;              // Service locator

	private:
        std::ifstream input_file;
        std::unique_ptr<ej::TextEventFileReader> text_reader;    // Parser for pythia/beagle whatever files
        ej::EventSourceControl* eventSourceControl;
        bool ReadNextEvent(); //Reads lines until an event is ready. Returns false if there are no more events
};

#endif // _BeagleEventSource_HEADER_

