//
// Created by Alexander on 16.07.2019.
//

//Todo: the meaning of all the 'varN' fields is unknown to me

#ifndef EJANA_LUNDEVENTDATA_H
#define EJANA_LUNDEVENTDATA_H

#include <vector>
#include <utility>

#include <JANA/JObject.h>
#include <ejana/TextEventFileReader.h>

#include "LundParticle.h"

class JApplication;

namespace eicmcio {
    class LundEventData : public JObject {
    public:
        // FIELDS

        /// Values for the lund header
        std::vector<double> column_values;

        /// Collection of primary vertexes (that came from a generator)
        std::vector<LundParticle *> particles; // Primary particles (that comes from a generator)

        /// Not parsed event (in forms of tokens)
        std::unique_ptr<eicmcio::TextFileEvent> text_event;

        /// Parse() function was called
        bool is_parsed = false;

        /// File line number at which this event starts
        uint64_t started_at_line;


    public:
        LundEventData() {}

        void Parse() {

            this->started_at_line = text_event->started_at_line;
            auto event_tokens = text_event->event_values[0];

            // Parse columns
            size_t column_index = 0;     // initialize it here in case it is needed for the exception message
            this->column_values.clear();

            try {
                // Parse other values
                for(column_index=0; column_index < event_tokens.size(); column_index++) {
                    double value = std::stod(event_tokens[column_index]);
                    this->column_values.push_back(value);
                }
                this->is_parsed = true;
            }
            catch(std::exception &ex) {
                auto err_msg = fmt::format("Error parsing event value at line: '{}', column: '{}', text: '{}'. Original error message: '{}'",
                                           this->started_at_line, column_index, event_tokens[column_index], ex.what());
                fmt::print("[ERROR] {}\n", err_msg);
                throw std::runtime_error(err_msg);
            }

            // Backward compatibility
            this->nrTracks = (int)std::lround(column_values[0]); // I i event - event num
            this->var1 = column_values[1];
            this->var2 = column_values[2];
            this->var3 = column_values[3];
            this->var4 = column_values[4];
            this->var5 = column_values[5];
            this->var6 = column_values[6];
            this->var7 = column_values[7];
            this->var8 = column_values[8];
            this->var9 = column_values[9];
        }

        ~LundEventData() override = default;

        // Obsolete(!!!)
        int nrTracks;        //1   I  number of particles
        double var1;         //2   D  some variable
        double var2;         //3   D  some variable
        double var3;         //4   D  some variable
        double var4;         //5   D  some variable
        double var5;         //6   D  some variable
        double var6;         //7   D  some variable
        double var7;         //8   D  some variable
        double var8;         //9   D  some variable
        double var9;         //10  D  some variable
    };


}


#endif //EJANA_LUNDEVENTDATA_H
