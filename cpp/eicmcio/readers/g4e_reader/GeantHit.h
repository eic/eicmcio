//
// Created by romanov on 3/2/19.
//

#ifndef EJANA_JLEICGEANTHIT_H
#define EJANA_JLEICGEANTHIT_H

namespace jleic {

    class GeantHit: public JObject {
    public:
        uint64_t hits_count;    // hits N total in the event (TTree name hit_count)
        uint64_t id;            // This hit ID from Geant    (TTree name hit_id)
        uint64_t track_id;      // Reference to track      (TTree name "hit_trk_id")
        uint64_t parent_track_id; // Id of a parent of the track (TTree name "hit_parent_trk_id")
        uint64_t plane_id;      // Reference to plane      (TTree name "planeID")
        std::string vol_name;   // Detector name           (TTree name "hit_vol_name")
        double   x_pos;         //                         (TTree name "hit_x")
        double   y_pos;         //                         (TTree name "hit_y")
        double   z_pos;         //                         (TTree name "hit_z")
        int64_t  i_pos;         // Volume repetition idxX  (TTree name "hit_i_rep")
        int64_t  j_pos;         // Volume repetition idxY  (TTree name "hit_j_rep")
        double   dedx;          // Energy deposition dE/dx (TTree name "hit_e_loss")

    };
}

// Readers to access the data (delete the ones you do not need).
 // event_id 
 // hit_count
 // hit_id 
 // hit_vol_name 
 // hit_x
 // hit_y
 // hit_z
 // hit_i_rep
 // hit_j_rep
 // hit_e_loss
 // trk_count
 // trk_id 
 // trk_pdg 
 // trk_part_id 
 // trk_vtx_x
 // trk_vtx_y
 // trk_vtx_z
 // trk_vtx_dir_x 
 // trk_vtx_dir_y 
 // trk_vtx_dir_z 
 // trk_mom 
 // o_part_count 
 // o_part_id 
 // o_part_vtx_id 
 // o_part_pdg 
 // o_part_trk_id 
 // o_part_charge 
 // o_part_dir_x 
 // o_part_dir_y 
 // o_part_dir_z 
 // o_part_tot_mom 
 // o_part_tot_e 
 // o_part_time 
 // o_part_polariz_x 
 // o_part_polariz_y 
 // o_part_polariz_z 
 // o_vtx_count 
 // o_vtx_id 
 // o_vtx_part_count 
 // o_vtx_x 
 // o_vtx_y 
 // o_vtx_z 
 // o_vtx_time 
 // o_vtx_weight 

//
#include <JANA/JEvent.h>

#endif //EJANA_JLEICGEANTHIT_H
