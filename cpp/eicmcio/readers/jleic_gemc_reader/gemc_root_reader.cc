
#include "JEventSource_jleic_root.h"
#include "JFactoryGenerator_jleic_root.h"


// Routine used to create our JEventProcessor
#include <JANA/JApplication.h>
#include <JANA/JEventSourceGeneratorT.h>


extern "C"{
void InitPlugin(JApplication *app){
    InitJANAPlugin(app);

    app->Add(new JEventSourceGeneratorT<JEventSource_jleic_root>());
    app->Add(new JFactoryGenerator_jleic_root());
}
}