// $Id$
//
// File: JEventSource_jleic_root.cc
// Created: Tue Mar 27 23:15:54 UTC 2018
// Creator:  (on Linux docker 4.9.60-linuxkit-aufs x86_64)
//


#include <iostream>
using namespace std;

#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>

#include <MinimalistModel/McTrack.h>

#include "GemcRootEvent.h"
#include "JEventSource_jleic_root.h"



//----------------
// Constructor
//----------------
JEventSource_jleic_root::JEventSource_jleic_root(std::string& source_name, JApplication *app):
    JEventSource(source_name, app)
{
	// Open ROOT file
	rootfile = new TFile(source_name.c_str());
	if(!rootfile->IsOpen()) {
		cerr << "Unable to open ROOT file \"" << source_name << "\"!" << endl;
		throw( std::exception() );
	}
	cout << "Opened ROOT file \"" << source_name << "\"" << endl;

	// Get flux TTree
	tree_flux = (TTree*)gROOT->FindObject("flux");
	if(!tree_flux) {
		cerr << R"(Unable to find tree "flux" in ROOT file ")" << source_name << "\"!" << endl;
		throw( std::exception() );
	}
	cout << "Found TTree \"flux\"" << endl;

	// Get generated TTree
	tree_generated = (TTree*)gROOT->FindObject("generated");
	if(!tree_generated){
		cout << R"(Unable to find tree "generated" in ROOT file ")" << source_name << "\"!" << endl;
	}
	cout << "Found TTree \"generated\"" << endl;

	// Make a selectors from the trees
	flux_selector = new flux(tree_flux);
	generated_selector = tree_generated ? new generated(tree_generated): nullptr;

	// Event index = number of event read
	_event_index = 0;
}

//----------------
// Destructor
//----------------
JEventSource_jleic_root::~JEventSource_jleic_root()
{
	delete flux_selector;
	delete generated_selector;
	delete rootfile;
}

//----------------
// GetEvent
//----------------
void JEventSource_jleic_root::GetEvent(std::shared_ptr<JEvent>)
{
	// Read an event from the source and copy the vital info into
	// the GemcRootEvent structure.

	// Is there events to read?
	if(_event_index >= tree_flux->GetEntries()) {
		throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
	}

	// Flux hits first
	// Read the event into memory
	flux_selector->fReader.SetEntry(_event_index);


	// Create a GemcFluxHit object for each entry in TTree. Store the
	// hits in an Event object so they can be copied into the
	// factory later in GetObjects below.

	std::vector<GemcFluxHit*> flux_hits;

	for(size_t i=0; i < flux_selector->hitn.GetSize(); i++){
		auto hit = new GemcFluxHit();
		
		// n.b. Just guessing by the values in ROOT file
		// that trackE and px,py,pz are in MeV and vx,vy,
		// vz are in mm(??)
		hit->hitn    = flux_selector->hitn[i];	 //
		hit->id      = flux_selector->id[i];	 //	
		hit->pid     = flux_selector->pid[i];	 // ID of the first particle entering the sensitive volume
		hit->mpid    = flux_selector->mpid[i];	 // ID of the mother of the first particle entering the sensitive volume
		hit->tid     = flux_selector->tid[i];	 // Track ID of the first particle entering the sensitive volume
		hit->mtid    = flux_selector->mtid[i];	 // Track ID of the mother of the first particle entering the sensitive volume
		hit->otid    = flux_selector->otid[i];	 // Track ID of the original track that generated the first particle entering the sensitive volume
		hit->trackE  = flux_selector->trackE[i]  / 1000.0; // Convert to GeV
		hit->totEdep = flux_selector->totEdep[i] / 1000.0; // Convert to GeV
		hit->avg_x   = flux_selector->avg_x[i]   / 10.0;   // Convert to cm
		hit->avg_y   = flux_selector->avg_y[i]   / 10.0;   // Convert to cm
		hit->avg_z   = flux_selector->avg_z[i]   / 10.0;   // Convert to cm
		hit->avg_lx  = flux_selector->avg_lx[i]  / 10.0;   // Convert to cm
		hit->avg_ly  = flux_selector->avg_ly[i]  / 10.0;   // Convert to cm
		hit->avg_lz  = flux_selector->avg_lz[i]  / 10.0;   // Convert to cm
		hit->px      = flux_selector->px[i]      / 1000.0; // Convert to GeV
		hit->py      = flux_selector->py[i]      / 1000.0; // Convert to GeV
		hit->pz      = flux_selector->pz[i]      / 1000.0; // Convert to GeV
		hit->vx      = flux_selector->vx[i]      / 10.0;   // Convert to cm
		hit->vy      = flux_selector->vy[i]      / 10.0;   // Convert to cm
		hit->vz      = flux_selector->vz[i]      / 10.0;   // Convert to cm
		hit->mvx     = flux_selector->mvx[i]     / 10.0;   // Convert to cm
		hit->mvy     = flux_selector->mvy[i]     / 10.0;   // Convert to cm
		hit->mvz     = flux_selector->mvz[i]     / 10.0;   // Convert to cm
		hit->avg_t   = flux_selector->avg_t[i];
		hit->nsteps  = flux_selector->nsteps[i];
		hit->procID  = flux_selector->procID[i];

		flux_hits.push_back(hit);
	}
	
	// If generated info is available, then make objects from it
	vector<GemcGenerated*> generated;
	if( generated_selector ){

		// Read the event into memory
		generated_selector->fReader.SetEntry(_event_index);

		for(size_t i=0; i<generated_selector->pid.GetSize(); i++){
			auto gen = new GemcGenerated();
		
			// n.b. Just guessing by the values in ROOT file
			// that trackE and px,py,pz are in MeV and vx,vy,
			// vz are in mm(??)
			
			gen->pid          = generated_selector->pid[i];
			gen->px           = generated_selector->px[i] / 1000.0; // Convert to GeV
			gen->py           = generated_selector->py[i] / 1000.0; // Convert to GeV
			gen->pz           = generated_selector->pz[i] / 1000.0; // Convert to GeV
			gen->vx           = generated_selector->vx[i] / 10.0;   // Convert to cm
			gen->vy           = generated_selector->vy[i] / 10.0;   // Convert to cm
			gen->vz           = generated_selector->vz[i] / 10.0;   // Convert to cm
			gen->time         = generated_selector->time[i];
			gen->multiplicity = generated_selector->multiplicity[i];

			generated.push_back(gen);
		}
	}

	// Create GemcRootEvent structure and fill it with info
	auto event = std::make_shared<GemcRootEvent>(std::move(flux_hits), std::move(generated));
	event->SetJEventSource(this);
	event->SetEventNumber(static_cast<uint64_t>(_event_index));
	event->SetRunNumber(0);

	// Increment event number
    _event_index++;

	return event;
}



//----------------
// GetObjects
//----------------
bool JEventSource_jleic_root::GetObjects(const std::shared_ptr<const JEvent>& event, JFactory* factory)
{
	// This callback is called to extract objects of a specific type from
	// an event and store them in the factory pointed to by JFactory_base.
	// The data type desired can be obtained via factory->GetDataClassName()
	// and the tag via factory->Tag().
	//
	// If the object is not one of a type this source can provide, then
	// it should return OBJECT_NOT_AVAILABLE. Otherwise, it should return
	// NOERROR;
	
	// We must have a factory to hold the data
	if(!factory) {
		throw runtime_error("JEventSource_jleic_root::GetObjects: JFactory* factory == null");
	}

	// We actually await only GemcRootEvents
	shared_ptr<const GemcRootEvent> gemc_event;
	gemc_event = dynamic_pointer_cast< const GemcRootEvent >(event);
	if(! gemc_event) {
		throw runtime_error("JEventSource_jleic_root::GetObjects: gemcEvent == null");
	}

	// Get name of data class we're trying to extract and the factory tag
	string dataClassName = factory->GetName();
	string tag = factory->GetTag();
	
	// Check if the requested type is one which we can provide

	if(dataClassName == "GemcFluxHit")
	{
		std::vector<GemcFluxHit*> flux_hits = gemc_event->flux_hits;

		// Copy pointers into factory, transferring ownership.
		factory->Set(flux_hits);
		return true;
	}
	if(dataClassName == "GemcGenerated")
	{
		factory->Set(const_cast<std::vector<GemcGenerated*>&>(gemc_event->generated));
		return true;
	}
	if(dataClassName == "MCVertexTrackerHit")
	{
		vector<MCVertexTrackerHit*> vtxhits;
		for( auto hit : gemc_event->flux_hits ){

			// Silicon tracker has hits from 50000-51000
			//if( hit->id>=50000 && hit->id<51000){
			if( hit->id> 0){

				auto thit = new MCVertexTrackerHit();

				thit->trackid = static_cast<int>(hit->tid);
				thit->planeid = static_cast<int>(hit->id);
				thit->Xpos    = hit->avg_x;
				thit->Ypos    = hit->avg_y;
				thit->Zpos    = hit->avg_z;
				thit->AddAssociatedObject(hit);

				vtxhits.push_back( thit );
			}
		}
		factory->Set(vtxhits);
		return true;
	}

	return false;
}

