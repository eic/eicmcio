#ifndef EJANA_HepMC3WriterProcessor_H
#define EJANA_HepMC3WriterProcessor_H


#include <thread>
#include <mutex>
#include <memory>

#include <JANA/JEventProcessor.h>
#include <HepMC3/GenRunInfo.h>
#include <HepMC3/Writer.h>
#include <HepMC3/WriterAscii.h>


class JApplication;

class HepMC3WriterProcessor : public JEventProcessor
{
public:

    // Constructor just applies
    explicit HepMC3WriterProcessor(JApplication *app=nullptr):
            JEventProcessor(app)
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
    int verbose;                // verbose output level
    std::shared_ptr<HepMC3::GenRunInfo> m_run_info;

    std::string out_file_name;
    std::unique_ptr<HepMC3::WriterAscii> m_writer;
};


#endif //EJANA_HepMC3WriterProcessor_H
