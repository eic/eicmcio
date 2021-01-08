#include "Geant4EicEventSource.h"


// Routine used to create our JEventProcessor
#include <JANA/JApplication.h>
#include <JANA/JEventSourceGeneratorT.h>
#include <JANA/JFactoryGenerator.h>
#include <MinimalistModel/McTrack.h>
#include <MinimalistModel/McGeneratedParticle.h>
#include <MinimalistModel/McGeneratedVertex.h>
#include <MinimalistModel/DisInfo.h>


extern "C"{
    void InitPlugin(JApplication *app)
    {
        InitJANAPlugin(app);
        app->Add(new JEventSourceGeneratorT<Geant4EicEventSource>(app));
        app->Add(new JFactoryGeneratorT<JFactoryT<minimodel::McGeneratedVertex>>());
        app->Add(new JFactoryGeneratorT<JFactoryT<minimodel::McGeneratedParticle>>());
        app->Add(new JFactoryGeneratorT<JFactoryT<minimodel::McTrack>>());
        app->Add(new JFactoryGeneratorT<JFactoryT<minimodel::McFluxHit>>());
    }
}