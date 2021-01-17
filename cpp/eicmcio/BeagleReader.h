// $Id$
//
//    File: JEventSource_jleic_root.h
// Created: Tue Mar 27 23:15:54 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef _BeagleEventSource_HEADER_
#define _BeagleEventSource_HEADER_

#include <fstream>

#include "EventRangeController.h"

namespace eicmcio {

class BeagleEventData;
class  TextEventFileReader;

class BeagleReader {
public:
	explicit BeagleReader(const std::string& source_name);


	/** Reads next event and returns it as JEvent from */
    bool GetEvent(BeagleEventData& event);


	private:
        BeagleReader() = delete;
        int64_t entry_index;			        // int64 but not uint64 because of the root GetEntries
        std::unique_ptr<eicmcio::TextEventFileReader> text_reader;    // Parser for pythia/beagle whatever files
        eicmcio::EventRangeController eventSourceControl;
        bool ReadNextEvent(); //Reads lines until an event is ready. Returns false if there are no more events
};

} //namespace eicmcio
#endif // _BeagleEventSource_HEADER_

