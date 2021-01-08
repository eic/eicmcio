//
// Created by romanov on 3/2/19.
//

#ifndef EJANA_JLEICGEANTTRACK_H
#define EJANA_JLEICGEANTTRACK_H

namespace jleic
{
    class GeantTrack:public JObject {
    public:
        uint64_t count;           //  TTree name trk_count
        uint64_t id;              //  TTree name trk_id
        int64_t  pdg;             //  TTree name trk_pdg
        uint64_t parent_id;       //  TTree name trk_parent_id
        uint64_t decay_level;     //  Decay level (0 - generated particles, 1 - their daughters, ...)
        double   vtx_x;           //  TTree name trk_vtx_x
        double   vtx_y;           //  TTree name trk_vtx_y
        double   vtx_z;           //  TTree name trk_vtx_z
        double   dir_x;           //  TTree name trk_vtx_dir_x
        double   dir_y;           //  TTree name trk_vtx_dir_y
        double   dir_z;           //  TTree name trk_vtx_dir_z
        double   p;               //  TTree name trk_mom
    };
}

#include <JANA/JEvent.h>

#endif //EJANA_JLEICGEANTTRACK_H
