//
// Created by romanov on 5/6/19.
//

#ifndef EJANA_HepMCEventData_H
#define EJANA_HepMCEventData_H

#include "JANA/JObject.h"
#include "HepMC3/GenEvent.h"
#include <MinimalistModel/McGeneratedVertex.h>

#include <utility>

class JApplication;



namespace eicmcio
{
    class HepMCEventData: public JObject
    {

    public:
        explicit HepMCEventData(std::shared_ptr<HepMC3::GenEvent> event):
                hepmc_event(std::move(event))
        {
        }

        std::shared_ptr<HepMC3::GenEvent> hepmc_event;
    };
}


#endif //EJANA_HepMCEventData_H
