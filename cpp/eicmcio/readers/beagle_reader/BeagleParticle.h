//
// Created by romanov on 3/19/19.
//

#ifndef EJANA_GEANT_PRIMARY_PARTICLE_HH
#define EJANA_GEANT_PRIMARY_PARTICLE_HH

#include <cstdint>

namespace ej {
    class BeagleParticle: public JObject  {
    public:
       int index;          // I:           I  line index, runs from 1 to nrTracks
       int ks_code;        // ISTHKK(I):   I  status code KS: KS=1 is the only stable final state particle code, Use NoBAM variable (below) to specify origin of particle
       int kf_code;        // IDHKK(I):    I  particle KF code (211: pion, 2112:n, ....). Code 80000 refers to a nucleus, specified in more detail by A=IDRES(I), Z=IDXRES(I)
       int mother_first;   // JMOHKK(1,I): I  line number of first mother particle
       int mother_second;  // JMOHKK(2,I): I  line number of second mother particle
       int daughter_first; // JDAHKK(1,I): I  normally the line number of the first daughter.
       int daughter_last;  // JDAHKK(2,I): I  normally the line number of the last daughter.
       double px;          // PHKK(1,I):   D  px of particle (GeV/c)
       double py;          // PHKK(2,I):   D  py of particle (GeV/c)
       double pz;          // PHKK(3,I):   D  pz of particle (GeV/c)
       double e;           // PHKK(4,I):   D  Energy of particle (GeV)
       double m;           // PHKK(5,I):   D  mass of particle (GeV/c^2)
       double vx;          // VHKK(1,I):   D  x vertex information (mm)
       double vy;          // VHKK(2,I):   D  y vertex information (mm)
       double vz;          // VHKK(3,I):   D  z vertex information (mm)
       int baryon_number;  // IDRES(I):    I  Baryon number, or A for a nucleus (IDHKK(I)=80000), fractional B set to 0.
       int charge;         // IDXRES(I):   I  Particle charge, (Z for a nucleus), 0 for fractional charge.
       int origin;         // NOBAM(I):    I  Flag describing the particle origin, particularly for final state particles.
    };
}

#endif // EJANA_GEANT_PRIMARY_PARTICLE_HH
