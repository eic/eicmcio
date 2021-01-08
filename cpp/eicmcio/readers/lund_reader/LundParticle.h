#ifndef EJANA_LUNDPARTICLE_H
#define EJANA_LUNDPARTICLE_H

#include <cstdint>
#include <JANA/JObject.h>

namespace ej {
    class LundParticle: public JObject  {
    public:
        int index;             // I  index
        int ks_code;           // I  status code KS: KS=1 is the only stable final state particle code
        int kf_code;           // I  particle id (211: pion, 2112:n, ....). Code 80000 refers to a nucleus, specified in more detail by A=IDRES(I), Z=IDXRES(I)
        int parent_index;      // I  index of the parent
        int first_child_index; // I  index of the first daughter
        int last_child_index;  // I  index of the first daughter
        double px;             // D  px of particle (GeV/c)
        double py;             // D  py of particle (GeV/c)
        double pz;             // D  pz of particle (GeV/c)
        double e;              // D  Energy of particle (GeV)
        double m;              // D  mass of particle (GeV/c^2)
        double vx;             // D  x vertex information (cm)
        double vy;             // D  y vertex information (cm)
        double vz;             // D  z vertex information (cm)
    };
}

#endif //EJANA_LUNDPARTICLE_H
