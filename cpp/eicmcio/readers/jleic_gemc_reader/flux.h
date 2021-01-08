//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Mar 27 23:10:16 2018 by ROOT version 6.08/06
// from TTree flux/Geant4 flux digitized information
// found on file: hits.root
//////////////////////////////////////////////////////////

#ifndef flux_h
#define flux_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include <vector>



class flux  {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderArray<double> hitn = {fReader, "hitn"};
   TTreeReaderArray<double> id = {fReader, "id"};
   TTreeReaderArray<double> pid = {fReader, "pid"};
   TTreeReaderArray<double> mpid = {fReader, "mpid"};
   TTreeReaderArray<double> tid = {fReader, "tid"};
   TTreeReaderArray<double> mtid = {fReader, "mtid"};
   TTreeReaderArray<double> otid = {fReader, "otid"};
   TTreeReaderArray<double> trackE = {fReader, "trackE"};
   TTreeReaderArray<double> totEdep = {fReader, "totEdep"};
   TTreeReaderArray<double> avg_x = {fReader, "avg_x"};
   TTreeReaderArray<double> avg_y = {fReader, "avg_y"};
   TTreeReaderArray<double> avg_z = {fReader, "avg_z"};
   TTreeReaderArray<double> avg_lx = {fReader, "avg_lx"};
   TTreeReaderArray<double> avg_ly = {fReader, "avg_ly"};
   TTreeReaderArray<double> avg_lz = {fReader, "avg_lz"};
   TTreeReaderArray<double> px = {fReader, "px"};
   TTreeReaderArray<double> py = {fReader, "py"};
   TTreeReaderArray<double> pz = {fReader, "pz"};
   TTreeReaderArray<double> vx = {fReader, "vx"};
   TTreeReaderArray<double> vy = {fReader, "vy"};
   TTreeReaderArray<double> vz = {fReader, "vz"};
   TTreeReaderArray<double> mvx = {fReader, "mvx"};
   TTreeReaderArray<double> mvy = {fReader, "mvy"};
   TTreeReaderArray<double> mvz = {fReader, "mvz"};
   TTreeReaderArray<double> avg_t = {fReader, "avg_t"};
   TTreeReaderArray<double> nsteps = {fReader, "nsteps"};
   TTreeReaderArray<double> procID = {fReader, "procID"};


   flux(TTree *tree) {
		fChain = tree;
		fReader.SetTree(fChain);
	}

	virtual ~flux() { }
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) {
		return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0;
	}

};

#endif
