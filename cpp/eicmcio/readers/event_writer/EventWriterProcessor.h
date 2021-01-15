//
// Created by Alexander on 17.07.2019.
//

#ifndef EJANA_EVENTWRITERPROCESSOR_H
#define EJANA_EVENTWRITERPROCESSOR_H


#include <thread>
#include <mutex>

#include <JANA/JEventProcessor.h>
#include <ejana/EServicePool.h>

#include "EventWriterRootOutput.h"

class JApplication;

class EventWriterProcessor : public JEventProcessor
{
public:

    // Constructor just applies
    explicit EventWriterProcessor(JApplication *app=nullptr):
            JEventProcessor(app),
            services(app)
    {};

    // This is called once before the first call to the Process method
    // below. You may, for example, want to open an output file here.
    // Only one thread will call this.
    void Init() override;

    //----------------------------
    // Process
    //
    // This is called for every event. Multiple threads may call this
    // simultaneously. If you write something to an output file here
    // then make sure to protect it with a mutex or similar mechanism.
    // Minimize what is done while locked since that directly affects
    // the multi-threaded performance.
    void Process(const std::shared_ptr<const JEvent>& event) override;


    //----------------------------
    // Finish
    //
    // This is called once after all events have been processed. You may,
    // for example, want to close an output file here.
    // Only one thread will call this.
    void Finish() override;

private:
    static std::atomic<size_t> m_event_counter;
    EventWriterRootOutput root_out;
    eicmcio::EServicePool services;
    int verbose;                // verbose output level
};


#endif //EJANA_EVENTWRITERPROCESSOR_H
