// $Id$
//
//    File: JFactoryGenerator_jleic_root.h
// Created: Wed Mar 28 00:22:48 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef _JFactoryGenerator_jleic_root_
#define _JFactoryGenerator_jleic_root_


#include <JANA/JFactoryGenerator.h>
#include <JANA/JFactoryT.h>


#include <MinimalistModel/McTrack.h>
#include "GemcFluxHit.h"
#include "GemcGenerated.h"

class JFactoryGenerator_jleic_root: public JFactoryGenerator{
	public:

		void GenerateFactories(JFactorySet *loop) override {
			loop->Add(new JFactoryT<GemcFluxHit>());
			loop->Add(new JFactoryT<GemcGenerated>());
			loop->Add(new JFactoryT<MCVertexTrackerHit>());
		}

};

#endif // _JFactoryGenerator_jleic_root_

