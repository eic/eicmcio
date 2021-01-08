// $Id$
//
//    File: GemcGenerated.h
// Created: Wed Mar 28 00:05:21 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef _MCGenerated_
#define _MCGenerated_

#include <JANA/JObject.h>
#include <JANA/JFactory.h>
#include <MinimalistModel/EParticleDefinitions.h>


class GemcGenerated:public JObject{
	public:
		JOBJECT_PUBLIC(MCGenerated);

		int pid;
		double px;
		double py;
		double pz;
		double vx;
		double vy;
		double vz;
		double time;
		int multiplicity;
		
		// This method is used primarily for pretty printing
		// the second argument to AddString is printf style format
		void toStrings(std::vector<std::pair<std::string,std::string> > &items) const
		{
			double pr = sqrt( px*px + py*py );
			double p  = sqrt( pr*pr + pz*pz);
			double theta = atan2(pr, pz);
			double phi = atan2(py, px);
			if(phi<0.0) phi += 6.283185;
			
			auto pname = EParticleDefinitions::ParticleName( EParticleDefinitions::PDGtoPType(pid) );

			AddString(items, "pid", "%s", pname);
			AddString(items, "p(GeV)", "%8.3f", p);
			AddString(items, "theta(rad)", "%8.3f", theta);
			AddString(items, "phi(rad)", "%8.3f", phi);
			AddString(items, "px", "%8.3f", px);
			AddString(items, "py", "%8.3f", py);
			AddString(items, "pz", "%8.3f", pz);
			AddString(items, "vx", "%6.1f", vx);
			AddString(items, "vy", "%6.1f", vy);
			AddString(items, "vz", "%6.1f", vz);
			AddString(items, "time", "%7.3f", time);
			AddString(items, "multiplicity", "%d", multiplicity);
		}
		
};

#endif // _MCGenerated_

