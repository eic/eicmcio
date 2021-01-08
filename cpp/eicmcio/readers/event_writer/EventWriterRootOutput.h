//
// Created by Alexander on 17.07.2019.
//

#ifndef EJANA_EVENTWRITERROOTOUTPUT_H
#define EJANA_EVENTWRITERROOTOUTPUT_H

#include <TFile.h>
#include <TDirectory.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TApplication.h>

class EventWriterRootOutput
{
public:
    void init(TFile *file)
    {
        // 'locker' locks mutex so other threads can't interfere with TFile doing its job
        std::lock_guard<std::recursive_mutex> locker(lock);

        // create a subdirectory
        main_directory = file->mkdir("events");
        file->cd();         // Just in case some other root file is the main TDirectory now

        tree = new TTree("tree", "a tree with all the events");
        tree->SetDirectory(main_directory);
    }

    std::recursive_mutex lock;
    TTree* tree;     // Tree to store all the data

private:
    TDirectory* main_directory;
};

#endif //EJANA_EVENTWRITERROOTOUTPUT_H
