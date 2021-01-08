#include <JANA/JEventProcessor.h>
#include "EventlessProcessor.h"

extern "C"
{
    void InitPlugin(JApplication *app)
    {
        InitJANAPlugin(app);

        app->Add(new EventlessProcessor(app));
    }
}
