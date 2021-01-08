









































|        Branch name               |  type         | description
|-----------------------|-----------|---------------------------------------------
| id                    | uint64_t  | Unique ID inside event                      |                           
| pdg                   | int64_t   | PDG value                                   |               
| trk_id                | uint64_t  | ID of the related track                     |                               
| charge                | double    | no comments                                 |                   
| dir_x                 | double    | Direction unit vector component at vertex   |                                               
| dir_y                 | double    |                                             |       
| dir_z                 | double    |                                             |       
| p                     | double    | total momentum                              |                   
| px                    | double    | dir_x * p                                   |               
| py                    | double    | dir_y * p                                   |               
| pz                    | double    | dir_z * p                                   |               
| tot_e                 | double    | total energy                                |                   
| m                     | double    | m for mass or murder... or mass mu...       |                                           
| time                  | double    |                                             |       
| is_beam               | bool      | Is beam particle                            |                       
| is_stable             | bool      | If=true means final state particle          |                                       
| gen_code              | bool      | Code from generator like kfv                |                                   
| mother_id             | uint64_t  | mother (first mother) pid                   |                               
| mother_second_id      | uint64_t  | mother pid                                  |               
| has_pol_info          | double    | Has information about the polarization      |                                           
| pol_x                 | double    | polarization                                |                   
| pol_y                 | double    |                                             |       
| pol_z                 | double    |                                             |       
| has_vtx_info          | bool      | Has vertex info                             |                       
| vtx_id                | uint64_t  | Generated vertex ID                         |                           
| vtx_x                 | double    | vertex x                                    |               
| vtx_y                 | double    | vertex y                                    |               
| vtx_z                 | double    | vertex z                                    |               
| vtx_t                 | double    | vertex t                                    |               
| has_smear_info        | bool      |                                             |       
| smear_has_e           | bool      | Energy was smeared                          |                       
| smear_has_p           | bool      | Momentum was smeared                        |                           
| smear_has_pid         | bool      | PID is smeared                              |                   
| smear_has_vtx         | bool      | Vertex is smeared                           |                       
| smear_has_any_eppid   | bool      | Has smeared e, p, or pid                    |                               
| smear_orig_tot_e      | double    | original Energy                             |                       
| smear_orig_p          | double    | original total momentum                     |                               
| smear_orig_px         | double    | original px                                 |                   
| smear_orig_py         | double    | original py                                 |                   
| smear_orig_pz         | double    | original pz                                 |                   
| smear_orig_vtx_x      | double    | original px                                 |                   
| smear_orig_vtx_y      | double    | original py                                 |                   
| smear_orig_vtx_z      | double    | original pz                                 |                   