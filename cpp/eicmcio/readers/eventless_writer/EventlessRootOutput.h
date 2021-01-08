#ifndef EJANA_EVENTLESSROOTOUTPUT_H
#define EJANA_EVENTLESSROOTOUTPUT_H

#include <TFile.h>
#include <TDirectory.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TApplication.h>

class EventlessRootOutput
{
public:
    void init(TFile *file)
    {
        // 'locker' locks mutex so other threads can't interfere with TFile doing its job
        std::lock_guard<std::recursive_mutex> locker(lock);

        // create a subdirectory "hist_dir" in this file
        main_directory = file->mkdir("eventless");
        file->cd();         // Just in case some other root file is the main TDirectory now

        // TTree with recoiled electron
        tree = new TTree("tree", "a tree with particles from all the events");
        tree->SetDirectory(main_directory);
    }

    std::recursive_mutex lock;
    TTree* tree;     // Tree to store all the data

private:
    TDirectory* main_directory;
};

#endif //EJANA_EVENTLESSROOTOUTPUT_H
