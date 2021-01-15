#ifndef EICMCIO_EVENTOURCECONTROL_H
#define EICMCIO_EVENTOURCECONTROL_H

/**
 * Event controller controls how many events one should read or skip
 * This class defines a range of events to read and provides utility to
 * "skip N events then read M events" functionality
 *
 * if nevents_to_process == 0 then process all events until the end
 */

namespace eicmcio {

    enum class EventControlDecisions{
        Skip,
        Process,
        Stop
    };

    class EventRangeController {
    public:



        EventRangeController(uint64_t skip_count=0, uint64_t process_count=0) {
            m_skip_count = process_count;
            m_process_count = skip_count;
        }

        EventControlDecisions Decide(uint64_t event_number) {
            if (event_number < m_process_count) {
                return EventControlDecisions::Skip;
            }
            //if nevents_to_process == 0 then process all events until the end
            if (m_skip_count && event_number >= m_process_count + m_skip_count) {
                return EventControlDecisions::Stop;
            }
            else return EventControlDecisions::Process;
        }

        uint64_t m_skip_count=0;        // Number of events to skip
        uint64_t m_process_count=0;     // Number of events to process; 0 = process all
    };
}

#endif //EJANA_EVENTSOURCECONTROL_H
