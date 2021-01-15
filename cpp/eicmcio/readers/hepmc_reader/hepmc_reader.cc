#include "JEventSource_hepmc.h"


// Routine used to create our JEventProcessor
#include <JANA/JApplication.h>
#include <JANA/JEventSourceGeneratorT.h>
#include <JANA/JFactoryGenerator.h>

#include <MinimalistModel/McGeneratedParticle.h>
#include <MinimalistModel/McGeneratedVertex.h>

/// This class is temprorary here while JANA2 API is getting to perfection.
/// Here we just list JFactories defined in this plugin
struct JFactoryGenerator_hepmc_reader:public JFactoryGenerator {
    void GenerateFactories(JFactorySet *factory_set) override {

//factory_set->Add( new JFactoryT<eicmcio::BeagleParticle>());
        factory_set->Add( new JFactoryT<minimodel::McGeneratedParticle>());
        factory_set->Add( new JFactoryT<minimodel::McGeneratedVertex>());
    }
};


extern "C"{
    void InitPlugin(JApplication *app)
    {
        InitJANAPlugin(app);

        app->Add(new JEventSourceGeneratorT<JEventSource_hepmc>(app));
        app->Add(new JFactoryGenerator_hepmc_reader());
    }
}