#include <utility>

#include <vector>
#include <utility>

#ifndef EJANA_BeagleEventData_H
#define EJANA_BeagleEventData_H


#include "TextEventFileReader.h"

#include "BeagleParticle.h"



namespace eicmcio
{
    class BeagleEventData
    {
    public:

        BeagleEventData()
        {}


        void Parse(){

            this->started_at_line = text_event->started_at_line;
            auto event_tokens = text_event->event_values[0];

            // event_tokens[0] I  line num (always zero in file)
            this->event_index = std::stoi(event_tokens[1]);         // I ievent - event num
            this->genevent = std::stoi(event_tokens[2]);            // I trials to generate this event
            this->ltype    = std::stoi(event_tokens[3]);            // I particle code for incoming lepton
            this->a_targ   = std::stoi(event_tokens[4]);            // I A of the target nucleus
            this->z_targ   = std::stoi(event_tokens[5]);            // I Z of the target nucleus
            this->pzlep    = std::stod(event_tokens[6]);            // D lab pz of the lepton beam (sign(pz)*p for non-zero crossing angle)
            this->pztarg   = std::stod(event_tokens[7]);            // D lab pz/A of the ion beam (sign(pz)*p/A for non-zero crossing angle)
            this->pznucl   = std::stod(event_tokens[8]);            // D lab pz of the struck nucleon (sign(pz)*p for non-zero crossing angle)
            this->crang    = std::stod(event_tokens[9]);            // D crossing-angle (mr). crang = (1000*) atan(px/pz) for the beam momentum with nonzero px. Note: we assume one of the beams has px=py=0 and the other py=0.
            this->crori      =      std::stoi(event_tokens[10]);    // 10 I  crossing angle orientation. lepton beam defines \pm\hat{z} direction. \pm 2 hadron/ion beam defines
                                                                    //    \pm\hat{z} direction. 0 means no crossing angle.
            this->subprocess =      std::stoi(event_tokens[11]);    //11 I   pythia subprocess (MSTI(1)), for details see PYTHIA
            this->nucleon =         std::stoi(event_tokens[12]);    //12 I   hadron beam type (MSTI(12))
            this->targetparton =    std::stoi(event_tokens[13]);    //13 I  parton hit in the target (MSTI(16))
            this->xtargparton =     std::stod(event_tokens[14]);    //14 D  x of target parton (PARI(34))
            this->beamparton =      std::stoi(event_tokens[15]);    //15 I  in case of resolved photon processes and soft VMD the virtual photon has a hadronic structure. This gives the info which parton interacted with the target parton (MSTI(15))
            this->xbeamparton =     std::stod(event_tokens[16]);    //16 D  x of beam parton (PARI(33))
            this->thetabeamparton = std::stod(event_tokens[17]);    //17 D  theta of beam parton (PARI(53))
            this->truey =           std::stod(event_tokens[18]);    //18 D  are the kinematic variables of the event.
            this->trueQ2 =          std::stod(event_tokens[19]);    //19 D  are the kinematic variables of the event.
            this->truex =           std::stod(event_tokens[20]);    //20 D  are the kinematic variables of the event.
            this->trueW2 =          std::stod(event_tokens[21]);    //21 D  are the kinematic variables of the event.
            this->trueNu =          std::stod(event_tokens[22]);    //22 D  are the kinematic variables of the event.
            this->leptonphi =       std::stod(event_tokens[23]);    //23 D  phi of the lepton (VINT(313)) in the laboratory frame
            this->s_hat =           std::stod(event_tokens[24]);    //24 D  s-hat of the process (PARI(14))
            this->t_hat =           std::stod(event_tokens[25]);    //25 D  Mandelstam t (PARI(15))
            this->u_hat =           std::stod(event_tokens[26]);    //26 D  Mandelstam u (PARI(16))
            this->pt2_hat =         std::stod(event_tokens[27]);    //27 D  pT2-hat of the hard scattering (PARI(18))
            this->Q2_hat =          std::stod(event_tokens[28]);    //28 D  Q2-hat of the hard scattering (PARI(22)),
            this->F2 =              std::stod(event_tokens[29]);    //29 D  information used and needed in the radiative correction code
            this->F1 =              std::stod(event_tokens[30]);    //30 D  information used and needed in the radiative correction code
            this->R =               std::stod(event_tokens[31]);    //31 D  information used and needed in the radiative correction code
            this->sigma_rad =       std::stod(event_tokens[32]);    //32 D  information used and needed in the radiative correction code
            this->SigRadCor =       std::stod(event_tokens[33]);    //33 D  information used and needed in the radiative correction code
            this->EBrems =          std::stod(event_tokens[34]);    //34 D  energy of the radiative photon in the nuclear rest frame
            this->photonflux =      std::stod(event_tokens[35]);    //35 D  flux factor from PYTHIA (VINT(319))
            this->b =               std::stod(event_tokens[36]);    //36 D  Impact parameter (in fm), radial position of virtual photon w.r.t. the center of the nucleus in the nuclear TRF with z along γ*
            this->Phib =            std::stod(event_tokens[37]);    //37 D  azimuthal angle of the impact parameter of the virtual photon in the nuclear TRF with z along γ* and φ=0 for the scattered electron
            this->Thickness =       std::stod(event_tokens[38]);    //38 D  Nuclear thickness T(b)/ρ0 in units of fm.
            this->ThickScl =        std::stod(event_tokens[39]);    //39 D  Nuclear thickness T(b) in nucleons/fm2.
            this->Ncollt =          std::stoi(event_tokens[40]);    //40 I  Number of collisions between the incoming γ* and nucleons in the nucleus (same as number of participating nucleons)
            this->Ncolli =          std::stoi(event_tokens[41]);    //41 I  Number of inelastic collisions between the incoming γ* and nucleons in the nucleus (same as number of inelastically participating nucleons)
            this->Nwound =          std::stoi(event_tokens[42]);    //42 I  Number of wounded nucleons, including those involved in the intranuclear cascade. WARNING: This variable is not finalized yet
            this->Nwdch =           std::stoi(event_tokens[43]);    //43 I  Number of wounded protons, including those involved in the intranuclear cascade. WARNING: This variable is not finalized yet
            this->Nnevap =          std::stoi(event_tokens[44]);    //44 I  Number of evaporation (and nuclear breakup) neutrons
            this->Npevap =          std::stoi(event_tokens[45]);    //45 I  Number of evaporation (and nuclear breakup) protons
            this->Aremn =           std::stoi(event_tokens[46]);    //46 I  A of the nuclear remnant after evaporation and breakup
            this->Ninc =            std::stoi(event_tokens[47]);    //47 I  Number of stable hadrons from the Intra Nuclear Cascade
            this->Nincch =          std::stoi(event_tokens[48]);    //48 I  Number of charged stable hadrons from the Intra Nuclear Cascade
            this->d1st =            std::stod(event_tokens[49]);    //49 D  density-weighted distance from first collision to the edge of the nucleus (amount of material traversed / ρ0)
            this->davg =            std::stod(event_tokens[50]);    //50 D  Average density-weighted distance from all inelastic collisions to the edge of the nucleus
            this->pxf =             std::stod(event_tokens[51]);    //51 D  Fermi-momentum of the struck nucleon (or sum Fermi momentum for all inelastic nucleon participants for Ncolli>1) in target rest frame with z along gamma* direction
            this->pyf =             std::stod(event_tokens[52]);    //52 D  Fermi-momentum of the struck nucleon (or sum Fermi momentum for all inelastic nucleon participants for Ncolli>1) in target rest frame with z along gamma* direction
            this->pzf =             std::stod(event_tokens[53]);    //53 D  Fermi-momentum of the struck nucleon (or sum Fermi momentum for all inelastic nucleon participants for Ncolli>1) in target rest frame with z along gamma* direction
            this->Eexc =            std::stod(event_tokens[54]);    //54 D  Excitation energy in the nuclear remnant before evaporation and breakup.
            this->RA =              std::stod(event_tokens[55]);    //55 D  Nuclear PDF ratio for the up sea for the given event kinematics (x,Q2), but set to 1 if multi-nucleon shadowing is off (genShd=1)
            this->User1 =           std::stod(event_tokens[56]);    //56 D  User variables to prevent/delay future format changes
            this->User2 =           std::stod(event_tokens[57]);    //57 D  User variables to prevent/delay future format changes
            this->User3 =           std::stod(event_tokens[58]);    //58 D  User variables to prevent/delay future format changes
            this->nrTracks =        std::stoi(event_tokens[59]);    //59 I  number of tracks in this event, including event history
            this->is_parsed = true;
        }


        ~BeagleEventData() = default;



        uint64_t event_index;                // Usually it what people call 'event number' but the 'number' is very misleading

        uint64_t started_at_line;

        int genevent;  //2 I  trials to generate this event
        int ltype;     //3 I  particle code for incoming lepton
        int a_targ;    //4 I  A of the target nucleus
        int z_targ;    //5 I  Z of the target nucleus
        double pzlep;  //6 D  lab pz of the lepton beam (sign(pz)*p for non-zero crossing angle)
        double pztarg; //7 D  lab pz/A of the ion beam (sign(pz)*p/A for non-zero crossing angle)
        double pznucl; //8 D  lab pz of the struck nucleon (sign(pz)*p for non-zero crossing angle)
        double crang;  //9 D  crossing-angle (mr). crang = (1000*) atan(px/pz) for the beam momentum with nonzero px. Note: we assume one of the beams has px=py=0 and the other py=0.

        int crori;     // 10 I  crossing angle orientation. lepton beam defines \pm\hat{z} direction. \pm 2 hadron/ion beam defines
                       // \pm\hat{z} direction. 0 means no crossing angle.

        int    subprocess;         //11 I   pythia subprocess (MSTI(1)), for details see PYTHIA
        int    nucleon;            //12 I   hadron beam type (MSTI(12))
        int    targetparton;       //13 I  parton hit in the target (MSTI(16))
        double xtargparton;        //14 D  x of target parton (PARI(34))
        int    beamparton;         //15 I  in case of resolved photon processes and soft VMD the virtual photon has a hadronic structure. This gives the info which parton interacted with the target parton (MSTI(15))
        double xbeamparton;        //16 D  x of beam parton (PARI(33))
        double thetabeamparton;    //17 D  theta of beam parton (PARI(53))
        double truey;              //18 D  are the kinematic variables of the event.
        double trueQ2;             //19 D  are the kinematic variables of the event.
        double truex;              //20 D  are the kinematic variables of the event.
        double trueW2;             //21 D  are the kinematic variables of the event.
        double trueNu;             //22 D  are the kinematic variables of the event.
                                   //     If radiative corrections are turned on they are different from what is calculated from the scattered lepton.
                                   //     If radiative corrections are turned off they are the same as what is calculated from the scattered lepton
        double leptonphi;          //23 D  phi of the lepton (VINT(313)) in the laboratory frame
        double s_hat;              //24 D  s-hat of the process (PARI(14))
        double t_hat;              //25 D  Mandelstam t (PARI(15))
        double u_hat;              //26 D  Mandelstam u (PARI(16))
        double pt2_hat;            //27 D  pT2-hat of the hard scattering (PARI(18))
        double Q2_hat;             //28 D  Q2-hat of the hard scattering (PARI(22)),
        double F2;                 //29 D  information used and needed in the radiative correction code
        double F1;                 //30 D  information used and needed in the radiative correction code
        double R;                  //31 D  information used and needed in the radiative correction code
        double sigma_rad;          //32 D  information used and needed in the radiative correction code
        double SigRadCor;          //33 D  information used and needed in the radiative correction code
        double EBrems;             //34 D  energy of the radiative photon in the nuclear rest frame
        double photonflux;         //35 D  flux factor from PYTHIA (VINT(319))
        double b;                  //36 D  Impact parameter (in fm), radial position of virtual photon w.r.t. the center of the nucleus in the nuclear TRF with z along γ*
        double Phib;               //37 D  azimuthal angle of the impact parameter of the virtual photon in the nuclear TRF with z along γ* and φ=0 for the scattered electron
        double Thickness;          //38 D  Nuclear thickness T(b)/ρ0 in units of fm.
        double ThickScl;           //39 D  Nuclear thickness T(b) in nucleons/fm2.
        int    Ncollt;             //40 I  Number of collisions between the incoming γ* and nucleons in the nucleus (same as number of participating nucleons)
        int    Ncolli;             //41 I  Number of inelastic collisions between the incoming γ* and nucleons in the nucleus (same as number of inelastically participating nucleons)
        int    Nwound;             //42 I  Number of wounded nucleons, including those involved in the intranuclear cascade. WARNING: This variable is not finalized yet
        int    Nwdch;              //43 I  Number of wounded protons, including those involved in the intranuclear cascade. WARNING: This variable is not finalized yet
        int    Nnevap;             //44 I  Number of evaporation (and nuclear breakup) neutrons
        int    Npevap;             //45 I  Number of evaporation (and nuclear breakup) protons
        int    Aremn;              //46 I  A of the nuclear remnant after evaporation and breakup
        int    Ninc;               //47 I  Number of stable hadrons from the Intra Nuclear Cascade
        int    Nincch;             //48 I  Number of charged stable hadrons from the Intra Nuclear Cascade
        double d1st;               //49 D  density-weighted distance from first collision to the edge of the nucleus (amount of material traversed / ρ0)
        double davg;               //50 D  Average density-weighted distance from all inelastic collisions to the edge of the nucleus
        double pxf;                //51 D  Fermi-momentum of the struck nucleon (or sum Fermi momentum for all inelastic nucleon participants for Ncolli>1) in target rest frame with z along gamma* direction
        double pyf;                //52 D  Fermi-momentum of the struck nucleon (or sum Fermi momentum for all inelastic nucleon participants for Ncolli>1) in target rest frame with z along gamma* direction
        double pzf;                //53 D  Fermi-momentum of the struck nucleon (or sum Fermi momentum for all inelastic nucleon participants for Ncolli>1) in target rest frame with z along gamma* direction
        double Eexc;               //54 D  Excitation energy in the nuclear remnant before evaporation and breakup.
        double RA;                 //55 D  Nuclear PDF ratio for the up sea for the given event kinematics (x,Q2), but set to 1 if multi-nucleon shadowing is off (genShd=1)
        double User1;              //56 D  User variables to prevent/delay future format changes
        double User2;              //57 D  User variables to prevent/delay future format changes
        double User3;              //58 D  User variables to prevent/delay future format changes
        int    nrTracks;           //59 I  number of tracks in this event, including event history

        /// Collection of primary vertexes (that came from a generator)
        std::vector<BeagleParticle *> particles; // Primary particles (that comes from a generator)

        std::unique_ptr<eicmcio::TextFileEvent> text_event;
        bool is_parsed = false;
    private:
    };



}

#endif //EJANA_JLEIC_GEANT_EVENT_H
