//
// Created by romanov on 3/19/19.
//

#ifndef EJANA_GEANT_PRIMARY_VERTEX_HH
#define EJANA_GEANT_PRIMARY_VERTEX_HH

namespace jleic {
    class GeantPrimaryVertex: public JObject {
    public:

        uint64_t count      ;   // TTree name o_vtx_count
        uint64_t id         ;   // TTree name o_vtx_id
        uint64_t part_count ;   // TTree name o_vtx_part_count
        double   x          ;   // TTree name o_vtx_x
        double   y          ;   // TTree name o_vtx_y
        double   z          ;   // TTree name o_vtx_z
        double   time       ;   // TTree name o_vtx_time
        double   weight     ;   // TTree name o_vtx_weight
    };
}
#endif //EJANA_GEANTPRIMARYVERTEX_HH
