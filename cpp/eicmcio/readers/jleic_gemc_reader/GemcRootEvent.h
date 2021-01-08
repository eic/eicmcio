//
// This class stores event data for GEMC root
//

#include <vector>

#ifndef EJANA_GEMCROOTEVENT_H
#define EJANA_GEMCROOTEVENT_H

#include <JANA/JEvent.h>
#include "GemcFluxHit.h"
#include "GemcGenerated.h"

class JApplication;

class GemcRootEvent: public JEvent{
public:

    GemcRootEvent(std::vector<GemcFluxHit*> hits, std::vector<GemcGenerated*> gen, JApplication* app=nullptr);

    ~GemcRootEvent() override = default;


    std::vector<GemcFluxHit *>  flux_hits;
    std::vector<GemcGenerated*> generated;    // TODO better name, getters?

private:
};

GemcRootEvent::GemcRootEvent(std::vector<GemcFluxHit *> hits,
                             std::vector<GemcGenerated*> gen,
                             JApplication *app):
    JEvent(app)
{
    flux_hits = std::move(hits);
    generated = std::move(gen);
}


#endif //EJANA_GEMCROOTEVENT_H
