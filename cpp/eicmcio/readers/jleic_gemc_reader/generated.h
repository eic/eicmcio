//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Mar 29 09:47:03 2018 by ROOT version 6.08/06
// from TTree generated/Generated Particles
// found on file: hits.root
//////////////////////////////////////////////////////////

#ifndef generated_h
#define generated_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include <vector>



class generated{
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderArray<int> pid = {fReader, "pid"};
   TTreeReaderArray<double> px = {fReader, "px"};
   TTreeReaderArray<double> py = {fReader, "py"};
   TTreeReaderArray<double> pz = {fReader, "pz"};
   TTreeReaderArray<double> vx = {fReader, "vx"};
   TTreeReaderArray<double> vy = {fReader, "vy"};
   TTreeReaderArray<double> vz = {fReader, "vz"};
   TTreeReaderArray<double> time = {fReader, "time"};
   TTreeReaderArray<int> multiplicity = {fReader, "multiplicity"};


   generated(TTree *tree) {
		fChain = tree;
		fReader.SetTree(fChain);
	}
   virtual ~generated() { }
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) {
		return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0;
	}
};

#endif

