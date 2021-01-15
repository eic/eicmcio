// $Id$
//
//    File: JEventSource_jleic_root.h
// Created: Tue Mar 27 23:15:54 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef _JEventSource_jleic_root_
#define _JEventSource_jleic_root_

#include <fstream>

#include <JANA/JEventSource.h>
#include <JANA/JEvent.h>

#include <MinimalistModel/McFluxHit.h>
#include <ejana/EServicePool.h>
#include <ejana/TextEventFileReader.h>

#include <ejana/EventSourceControl.h>
#include <TDatabasePDG.h>


class JEventSource_lund: public JEventSource {
public:

	explicit JEventSource_lund(const std::string& source_name, JApplication *app = nullptr);
	~JEventSource_lund() override = default;

	/** Get description of this event source */
	std::string GetVDescription() const override {return GetDescription(); }

    // A description of this source type must be provided as a static member
    static std::string GetDescription() { return "Text file in the LUND format"; }

	/** Reads next event and returns it as JEvent from */
    void GetEvent(std::shared_ptr<JEvent>) override;

	/** Provides a factory with objects */
	bool GetObjects(const std::shared_ptr<const JEvent>&, JFactory* ) override {return false;}

protected:
    int64_t entry_index;			        // int64 but not uint64 because of the root GetEntries
    eicmcio::EServicePool services;              // Service locator

private:
    bool m_is_eic_pythia = false;
    std::ifstream input_file;
    std::unique_ptr<eicmcio::TextEventFileReader> text_reader;    // Parser for pythia/beagle whatever files
    eicmcio::EventSourceControl* eventSourceControl;
    bool ReadNextEvent(); //Reads lines until an event is ready. Returns false if there are no more events

};

#endif // _JEventSourceGenerator_jleic_root_

