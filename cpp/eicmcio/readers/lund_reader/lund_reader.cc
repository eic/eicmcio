#include "JEventSource_lund.h"
#include "LundEventData.h"

// Routine used to create our JEventProcessor
#include <JANA/JApplication.h>
#include <JANA/JEventSourceGeneratorT.h>
#include <JANA/JFactoryGenerator.h>
#include <MinimalistModel/McGeneratedParticle.h>


extern "C"{
    void InitPlugin(JApplication *app)
    {
        InitJANAPlugin(app);

        app->Add(new JEventSourceGeneratorT<JEventSource_lund>(app));
        app->Add(new JFactoryGeneratorT<JFactoryT<eicmcio::LundEventData>>());
        app->Add(new JFactoryGeneratorT<JFactoryT<eicmcio::LundParticle>>());
        app->Add(new JFactoryGeneratorT<JFactoryT<minimodel::McGeneratedParticle>>());
    }
}