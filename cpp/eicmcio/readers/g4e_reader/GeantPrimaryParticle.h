//
// Created by romanov on 3/19/19.
//

#ifndef EJANA_GEANT_PRIMARY_PARTICLE_HH
#define EJANA_GEANT_PRIMARY_PARTICLE_HH

#include <cstdint>

namespace jleic {
    class GeantPrimaryParticle: public JObject  {
    public:
        uint64_t      count     ;   // (TTree name o_part_count    )
        uint64_t      id        ;   // (TTree name o_part_id       )
        uint64_t      vtx_id    ;   // (TTree name o_part_vtx_id   )
        uint64_t      pdg       ;   // (TTree name o_part_pdg      )
        uint64_t      trk_id    ;   // (TTree name o_part_trk_id   )
        double        charge    ;   // (TTree name o_part_charge   )
        double        dir_x     ;   // (TTree name o_part_dir_x    )
        double        dir_y     ;   // (TTree name o_part_dir_y    )
        double        dir_z     ;   // (TTree name o_part_dir_z    )
        double        tot_mom   ;   // (TTree name o_part_tot_mom  )
        double        tot_e     ;   // (TTree name o_part_tot_e    )
        double        time      ;   // (TTree name o_part_time     )
        double        pol_x     ;   // (TTree name o_part_polariz_x)
        double        pol_y     ;   // (TTree name o_part_polariz_y)
        double        pol_z     ;   // (TTree name o_part_polariz_z)
    };
}

#endif // EJANA_GEANT_PRIMARY_PARTICLE_HH
