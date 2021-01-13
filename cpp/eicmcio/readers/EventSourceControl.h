#ifndef EICMCIO_EVENTSOURCECONTROL_H
#define EICMCIO_EVENTSOURCECONTROL_H


namespace eicmcio{

    enum class EventControlDecisions{
        Skip,
        Process,
        Stop
    };

    class EventSourceControl {
    public:
        EventSourceControl(uint64_t skip_count, uint64_t process_count) {
            m_nevents_to_process = process_count;
            nevents_to_skip = skip_count;
        }

        EventControlDecisions Decide(uint64_t event_number) {
            if (event_number < m_nevents_to_skip) {
                return EventControlDecisions::Skip;
            }
            //if nevents_to_process == 0 then process all events until the end
            if (m_nevents_to_process && event_number >= nevents_to_skip + nevents_to_process) {
                return EventControlDecisions::Stop;
            }
            else return EventControlDecisions::Process;
        }

        uint64_t m_nevents_to_process;
        uint64_t m_nevents_to_skip;
    };
}

#endif //EJANA_EVENTSOURCECONTROL_H
