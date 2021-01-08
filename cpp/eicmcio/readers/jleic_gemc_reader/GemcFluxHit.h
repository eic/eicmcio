// $Id$
//
//    File: GemcFluxHit.h
// Created: Wed Mar 28 00:05:21 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//

#ifndef GEMC_FLUX_HIT_HEADER
#define GEMC_FLUX_HIT_HEADER

#include <JANA/JObject.h>
#include <JANA/JFactory.h>

class GemcFluxHit: public JObject{
	public:
		JOBJECT_PUBLIC(MCFluxHit);

		double hitn;
		double id;
		double pid;
		double mpid;
		double tid;
		double mtid;
		double otid;
		double trackE;
		double totEdep;
		double avg_x;
		double avg_y;
		double avg_z;
		double avg_lx;
		double avg_ly;
		double avg_lz;
		double px;
		double py;
		double pz;
		double vx;
		double vy;
		double vz;
		double mvx;
		double mvy;
		double mvz;
		double avg_t;
		double nsteps;
		double procID;
		
		// This method is used primarily for pretty printing
		// the second argument to AddString is printf style format
		void toStrings(std::vector<std::pair<std::string, std::string> > &items)const{
		
			AddString(items, "pid", "%3.0f", pid);
			AddString(items, "trackE", "%8.3f", trackE);
			AddString(items, "totEdep", "%8.3f", totEdep);
			AddString(items, "px", "%8.3f", px);
			AddString(items, "py", "%8.3f", py);
			AddString(items, "pz", "%8.3f", pz);
			AddString(items, "avg_x", "%6.1f", avg_x);
			AddString(items, "avg_y", "%6.1f", avg_y);
			AddString(items, "avg_z", "%6.1f", avg_z);
			AddString(items, "vx", "%6.1f", vx);
			AddString(items, "vy", "%6.1f", vy);
			AddString(items, "vz", "%6.1f", vz);
			AddString(items, "avg_t", "%7.3f", avg_t);
			AddString(items, "nsteps", "%4.0f", nsteps);
			AddString(items, "procID", "%4.0f", procID);
		}
		
};

#endif // GEMC_FLUX_HIT_HEADER

