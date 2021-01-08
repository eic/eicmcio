//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Feb 22 02:19:03 2019 by ROOT version 6.16/00
// And updated later many times manually (he-he)
//////////////////////////////////////////////////////////

#ifndef JleicGeantSelector_h
#define JleicGeantSelector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include <vector>

using std::string;

class JLEICGeantSelector_1_0 : public TSelector {
public :
    TTreeReader fReader;       // !the tree reader
    TTree *fChain = nullptr;   // !pointer to the analyzed TTree or TChain

    // Readers to access the data (delete the ones you do not need).

    // Hits array
    // Readers to access the data (delete the ones you do not need).
    TTreeReaderValue<ULong64_t>      event_id           = {fReader, "event_id"};
    TTreeReaderValue<ULong64_t>      hit_count          = {fReader, "hit_count"};
    TTreeReaderArray<unsigned long>  hit_id             = {fReader, "hit_id"};
    TTreeReaderArray<unsigned long>  hit_trk_id         = {fReader, "hit_trk_id"};
    TTreeReaderArray<unsigned long>  hit_parent_trk_id  = {fReader, "hit_parent_trk_id"};
    TTreeReaderArray<std::string>    hit_vol_name       = {fReader, "hit_vol_name"};
    TTreeReaderArray<double>         hit_x              = {fReader, "hit_x"};
    TTreeReaderArray<double>         hit_y              = {fReader, "hit_y"};
    TTreeReaderArray<double>         hit_z              = {fReader, "hit_z"};
    TTreeReaderArray<unsigned long>  hit_i_rep          = {fReader, "hit_i_rep"};
    TTreeReaderArray<unsigned long>  hit_j_rep          = {fReader, "hit_j_rep"};
    TTreeReaderArray<double>         hit_e_loss         = {fReader, "hit_e_loss"};
    TTreeReaderValue<ULong64_t>      trk_count          = {fReader, "trk_count"};
    TTreeReaderArray<unsigned long>  trk_id             = {fReader, "trk_id"};
    TTreeReaderArray<long>           trk_pdg            = {fReader, "trk_pdg"};
    TTreeReaderArray<unsigned long>  trk_part_id        = {fReader, "trk_parent_id"};
    TTreeReaderArray<unsigned long>  trk_level          = {fReader, "trk_level"};
    TTreeReaderArray<double>         trk_vtx_x          = {fReader, "trk_vtx_x"};
    TTreeReaderArray<double>         trk_vtx_y          = {fReader, "trk_vtx_y"};
    TTreeReaderArray<double>         trk_vtx_z          = {fReader, "trk_vtx_z"};
    TTreeReaderArray<double>         trk_vtx_dir_x      = {fReader, "trk_vtx_dir_x"};
    TTreeReaderArray<double>         trk_vtx_dir_y      = {fReader, "trk_vtx_dir_y"};
    TTreeReaderArray<double>         trk_vtx_dir_z      = {fReader, "trk_vtx_dir_z"};
    TTreeReaderArray<double>         trk_mom            = {fReader, "trk_mom"};
    TTreeReaderValue<ULong64_t>      gen_prt_count      = {fReader, "gen_prt_count"};
    TTreeReaderArray<unsigned long>  gen_prt_id         = {fReader, "gen_prt_id"};
    TTreeReaderArray<unsigned long>  gen_prt_vtx_id     = {fReader, "gen_prt_vtx_id"};
    TTreeReaderArray<unsigned long>  gen_prt_pdg        = {fReader, "gen_prt_pdg"};
    TTreeReaderArray<unsigned long>  gen_prt_trk_id     = {fReader, "gen_prt_trk_id"};
    TTreeReaderArray<double>         gen_prt_charge     = {fReader, "gen_prt_charge"};
    TTreeReaderArray<double>         gen_prt_dir_x      = {fReader, "gen_prt_dir_x"};
    TTreeReaderArray<double>         gen_prt_dir_y      = {fReader, "gen_prt_dir_y"};
    TTreeReaderArray<double>         gen_prt_dir_z      = {fReader, "gen_prt_dir_z"};
    TTreeReaderArray<double>         gen_prt_tot_mom    = {fReader, "gen_prt_tot_mom"};
    TTreeReaderArray<double>         gen_prt_tot_e      = {fReader, "gen_prt_tot_e"};
    TTreeReaderArray<double>         gen_prt_time       = {fReader, "gen_prt_time"};
    TTreeReaderArray<double>         gen_prt_polariz_x  = {fReader, "gen_prt_polariz_x"};
    TTreeReaderArray<double>         gen_prt_polariz_y  = {fReader, "gen_prt_polariz_y"};
    TTreeReaderArray<double>         gen_prt_polariz_z  = {fReader, "gen_prt_polariz_z"};
    TTreeReaderValue<ULong64_t>      gen_vtx_count      = {fReader, "gen_vtx_count"};
    TTreeReaderArray<unsigned long>  gen_vtx_id         = {fReader, "gen_vtx_id"};
    TTreeReaderArray<unsigned long>  gen_vtx_part_count = {fReader, "gen_vtx_part_count"};
    TTreeReaderArray<double>         gen_vtx_x          = {fReader, "gen_vtx_x"};
    TTreeReaderArray<double>         gen_vtx_y          = {fReader, "gen_vtx_y"};
    TTreeReaderArray<double>         gen_vtx_z          = {fReader, "gen_vtx_z"};
    TTreeReaderArray<double>         gen_vtx_time       = {fReader, "gen_vtx_time"};
    TTreeReaderArray<double>         gen_vtx_weight     = {fReader, "gen_vtx_weight"};


    explicit JLEICGeantSelector_1_0(TTree *tree) {
        fChain = tree;
        fReader.SetTree(fChain);
    }

    ~JLEICGeantSelector_1_0() override = default;

    Int_t Version() const override { return 2; }

    Int_t GetEntry(Long64_t entry, Int_t getall) override
    {
        return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0;
    }
};

#endif