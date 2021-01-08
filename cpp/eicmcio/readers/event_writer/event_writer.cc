//
// Created by Alexander on 17.07.2019.
//

#include <JANA/JEventProcessor.h>
#include "EventWriterProcessor.h"

extern "C"
{
    void InitPlugin(JApplication *app)
    {
        InitJANAPlugin(app);

        app->Add(new EventWriterProcessor(app));
    }
}