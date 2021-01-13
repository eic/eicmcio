#include <utility>

/**
 * Universal parser for text files from generators. It aims for cases:
 * 1. Files have are space/tab separated data values
 * 2. Each event start with one or several lines of data
 * 3. Then there are several lines with data for each particle in event
 *
 * 2-3. Means that if we see an event record after particle records
 *      it means, that the new event has started
 *
 * This class works for files like from pythia6, beagle, etc...
 *
 * D A T A   E X A M P L E:
 * Lets look at beagle event record:
 *      BEAGLE EVENT FILE
 *      ============================================
 *      I, ievent, ...
 *      ============================================
 *      I  ISTHKK(I)  ...
 *      ============================================
 *      0          1    1   11    2    1    ... <50+ tokens>
 *      ============================================
 *       1     21         11        0       -0.000000       -0.000000       -5.000000  ... <15 tokens>
 *       2     21       2212        0        0.000000        0.000000       50.107677  ...
 *      ...
 *      20      1       2212        0        0.018354        0.019732       45.588296  ...
 *      =============== Event finished ===============
 *      0          2    1   11    2    1 ... <next event >
 *      ============================================
 *      1     21         11        0        0.000000        0.000000       -5.000000 ...
 * What we see here is:
 *     1. First 5 lines are to be skipped
 *     2. Lines with '====================' are to be skipped
 *     3. Lines like "0 1 1 11 2 1 ..." are the beginning of event data with whole vent info
 *     4. All the next lines like "1 21 22122 ..." are particle data lines (called record in this class)
 *     5. All lines in 3 and 4 need to be tokenized
 *     6. In other file formats comments like '#...' should be ignored
 *
 * As a result of parsing we will have and event in terms of :
 *  TextFileEvent:
 *      started_at_line;    // Line number at which the event has started
 *      event_tokens;       // All tokens like {"0", "1", "1", "11", "2", "1", ...} from 'event' related line/s
 *      record_tokens       // All tokens like {"1", "21", "22122", ...} from each particle or 'record' lines
 *
 *
 * To parse such files user should provide istream (like from opening a file) and 2 functions:
 *      LineRecognisionFunc - Make a decision based on the whole next line if the line should be skipped
 *                            or tokenized for the further analysis
 *      TextEventLineTypes -  Make a decision based on tokenized line, if this line relates to whole event data or
 *                            particle (record as we call it) data
 */

#ifndef EJANA_ETEXTEVENTFILEREADER_H
#define EJANA_ETEXTEVENTFILEREADER_H

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
#include <memory>
#include <functional>
#include "ejana/EStringHelpers.h"

namespace ej
{
    struct TextFileEvent
    {
        uint64_t started_at_line = 0;
        std::vector<std::vector<std::string>> event_values;
        std::vector<std::vector<std::string>> particle_values;
    };

    enum class TextEventLineDecisions
    {
        Skip,       /// Skip this line
        Event,      /// This line relates to the event record
        Particle,   /// This line relates to a particle
        Tokenize    /// We need to tokenize this line to make a decision
    };


    class TextEventFileReader
    {
    public:
        /**
         * This function is provided by user to decide what to do:
         * while line is not yet tokenized
         */
        using LineRecognisionFunc = std::function<TextEventLineDecisions(uint64_t line_num, const std::string& line)>;

        /**
         * This function is provided by user to decide what to do:
         * when the line is tokenized
         */
        using TokensRecognisionFunc = std::function<TextEventLineDecisions(uint64_t line_num, const std::vector<std::string>& tokens)>;


        /** Constructor
         *
         * When a new line is read from file @see line_reco_func_ is called first with this line given as a parameter
         * the function should decide if to skip the line or process it further - tokenize
         *
         * After string is tokenized TokensRecognisionFunc token_reco_func_ is called to make a decision:
         * if this line relates to event, particle or should be skipped
         *
         * Depending on token_reco_func_ (and possibly line_reco_func_) decisions, TextFileEvent is filled with data
         *
         * @param stream_ input file (or other) stream
         * @param line_reco_func_ function to decide on the whole line
         * @param token_reco_func_ function to decide on tokenized line
         */
        TextEventFileReader(std::string input_file_name_arg,
                            TextEventFileReader::LineRecognisionFunc line_reco_func_,
                            TextEventFileReader::TokensRecognisionFunc token_reco_func_):
                file_name(std::move(input_file_name_arg)),
                line_reco_func(line_reco_func_),
                token_reco_func(token_reco_func_)
        {
            input_file.open (file_name, std::ifstream::in);
            if(input_file.fail()) {

                std::cerr << "Error: " << strerror(errno) << std::endl;
                throw std::runtime_error("File open did fail;");
            }

            if(!input_file.is_open()) {
                throw std::runtime_error("File is not open;");
            }

        }
        /**
         *  Reads next line in file. Check IsNewEventReady after that line
         *
         * @return true if line was read, false if EOF is reached
         */
        bool ParseNextLine() {
            std::string line;

            if (!std::getline(input_file, line)) {

                // In the end of file we have the last event compiled
                if(current_event) {
                    compiled_event = std::move(current_event);      // move event to 'ready' state
                }
                return false;
            }

            if (input_file.bad()) {
                std::cerr << "Error: " << strerror(errno) << std::endl;
                throw std::runtime_error("error while reading file;");
            }

            ProcessLine(line);
            line_num++;
            return true;
        }

        bool IsNewEventReady() { return compiled_event != nullptr; }

        std::unique_ptr<TextFileEvent> GetEvent() { return std::move(compiled_event); }

    private:

        void AddEventRecord(std::vector<std::string> record) {
            if(!current_event || last_record_was_particle) {
                // No current event => we don't have event in the beginning.
                // If last time we added particle data, then now is a new event
                if(current_event) {
                    compiled_event = std::move(current_event);      // move event to 'ready' state
                }

                current_event = std::unique_ptr<TextFileEvent>(new TextFileEvent());
                current_event->started_at_line = this->line_num;
            }

            current_event->event_values.push_back(std::move(record));
            last_record_was_particle = false;
        }
        void AddEventRecord(std::string record){
            std::vector<std::string> v(1);
            v[0]=std::move(record);
            AddEventRecord(v);
        }
        void AddParticleRecord(std::vector<std::string> record){
            if(!current_event) {
                // No current event => we don't have event in the beginning.
                current_event = std::unique_ptr<TextFileEvent>(new TextFileEvent());
            }

            current_event->particle_values.push_back(std::move(record));
            last_record_was_particle = true;
        }
        void AddParticleRecord(std::string record){
            std::vector<std::string> v(1);
            v[0]=std::move(record);
            AddParticleRecord(v);
        }
        void ProcessLine(const std::string &line) {

            auto decision = line_reco_func(line_num, line);

            switch(decision) {

                case TextEventLineDecisions::Skip:
                    return;

                case TextEventLineDecisions::Event:
                    AddEventRecord(line);
                    return;

                case TextEventLineDecisions::Particle:
                    AddParticleRecord(line);
                    return;

                default:
                    ; // the rest of the function deal with this case
            }

            // If we are here, it means that line_reco_func didn't conclude what to do with the string
            auto tokens = ej::LexicalSplit(line);

            decision = token_reco_func(line_num, tokens);
            switch(decision) {

                case TextEventLineDecisions::Skip:
                    return;

                case TextEventLineDecisions::Event:
                    AddEventRecord(tokens);
                    return;

                case TextEventLineDecisions::Particle:
                    AddParticleRecord(tokens);
                    return;

                default:
                    // The last value is Tokenize, but you can't tokenize tokenized string
                    throw std::runtime_error("can't tokenize tokenized string");
            }
        }  // Processes a line of file

        bool last_record_was_particle=false;

        uint64_t line_num = 0;
        std::ifstream input_file;
        std::string file_name;
        std::unique_ptr<TextFileEvent> current_event;
        std::unique_ptr<TextFileEvent> compiled_event;
        LineRecognisionFunc line_reco_func;
        TokensRecognisionFunc token_reco_func;
    };


/// ---------------------- I M P L E M E N T A T I O N -----------------------------
} // namespace ejana
#endif //EJANA_ETEXTEVENTFILEREADER_H
