# gemc_root_reader

This plugin reads g4e (JLEIC Geant4) generated root file.

## File structure 

* `GeantPrimaryVertex.hh` - Primary interaction vertex/es information (comes from generator)
* `GeantPrimaryPartice.hh` - Information of particles from the prime vertex/es (comes from generator)
* `GeantTrack.hh` - Class holding each track information
* `GeantHit.hh` - Class holding each hit information
* `Geant4EicEventData.hh` - Class to hold general event information
* `Geant4EicEventSource.cc` - (!) The essence of this plugin. Opens root file, 
  reads events (by RootEventSelector) and fills the above classes with data
* `RootEventSelector.h` - TTree selectors (what branches are read from TFile)
* `jleic_geant_reader.cc` - File that initializes this plugin

Tags:

* ***type***: event_source
* ***file_type***: .root

