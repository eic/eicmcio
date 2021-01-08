#include <iostream>

#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>

#include <fmt/format.h>     // For format and print functions
#include <fmt/ostream.h>    // For print(std::cerr, ...)

#include <JANA/JEventSourceGeneratorT.h>
#include <JANA/JSourceFactoryGenerator.h>

#include <MinimalistModel/McFluxHit.h>
#include <MinimalistModel/McGeneratedParticle.h>
#include <MinimalistModel/McGeneratedVertex.h>
#include <MinimalistModel/McTrack.h>
#include <MinimalistModel/DisInfo.h>

#include "RootEventSelector_1_0.h"
#include "RootEventSelector_2_0.h"
#include "Geant4EicEventSource.h"
#include "GeantHit.h"
#include "GeantTrack.h"
#include "GeantPrimaryVertex.h"
#include "GeantPrimaryParticle.h"

// This function helps error reporting if one cant read ROOT event
static std::string EntryStatusToString(TTreeReader::EEntryStatus status);

using namespace jleic;
using namespace minimodel;

//----------------
// Constructor
//----------------
Geant4EicEventSource::Geant4EicEventSource(std::string& source_name, JApplication *app):
    JEventSource(source_name, app),
	services(app)
{
    using namespace fmt;

	// Open ROOT file
	file = new TFile(source_name.c_str());
	if(!file->IsOpen()) {
	    auto message = format("Unable to open ROOT file '{}'", source_name);
	    print(std::cerr, message);
		throw(std::runtime_error(message));     // NOLINT(cert-err60-cpp)
	}
	print("Geant4EicEventSource: Opened ROOT file {}\n", source_name);


	// Get TTree 'event'
	event_tree = (TTree*)gROOT->FindObject("events");
	if(!event_tree) {
	    auto message = format("Unable to find tree 'events' in ROOT file '{}'\n", source_name);
		throw( std::runtime_error(message) );   // NOLINT(cert-err60-cpp)
	}
    print("Geant4EicEventSource: Found TTree 'events' with {} records\n", event_tree->GetEntries());

	//Make factory generator that will make factories for all types provided by the event source
	//This is necessary because the JFactorySet needs all factories ahead of time
	//Make sure that all types are listed as template arguments here!!
	SetFactoryGenerator(
	        new JSourceFactoryGenerator<GeantPrimaryVertex, GeantPrimaryParticle, GeantTrack, GeantHit>());

	if(event_tree->GetBranch("evt_true_q2")) {
	    // Tree with true DIS info
        event_selector = new JLEICGeantSelector_2_0(event_tree);
        // Only in this case we add DisInfo factory generator
        app->Add(new JFactoryGeneratorT<JFactoryT<minimodel::DisInfo>>());
	} else {
        event_selector = new JLEICGeantSelector_1_0(event_tree);
	}
	// Make a selector


	// Event index = number of event read
	entry_index = 0;

	eventSourceControl = new ej::EventSourceControl(app->GetJParameterManager());
}

//----------------
// Destructor
//----------------
Geant4EicEventSource::~Geant4EicEventSource()
{
	delete event_selector;
	delete file;
}

//----------------
// GetEvent
//----------------

void Geant4EicEventSource::GetEvent(std::shared_ptr<JEvent> event)
{
	// Read an event from the source and copy the vital info into the Geant4EicEventData structure.

	// Is there events to read?
	if(entry_index >= event_tree->GetEntriesFast()) {
		throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
	}

	TTreeReader::EEntryStatus result = TTreeReader::EEntryStatus::kEntryNotLoaded;

	auto decision = eventSourceControl->Decide(entry_index);
	while (decision == ej::EventControlDecisions::Skip) {

		result = event_selector->fReader.SetEntry(entry_index);

		if (result == TTreeReader::EEntryStatus::kEntryBeyondEnd) {
			throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
		}
		entry_index++;
		decision = eventSourceControl->Decide(entry_index);
	}

	if (decision == ej::EventControlDecisions::Stop){
		throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
	}
	else {
		result = event_selector->fReader.SetEntry(entry_index);

		if (result == TTreeReader::EEntryStatus::kEntryBeyondEnd) {
			throw JEventSource::RETURN_STATUS::kNO_MORE_EVENTS;
		}
		entry_index++;
	}


	if(result != TTreeReader::EEntryStatus::kEntryValid)
	{
		auto message = fmt::format("Can't read entry. Reason: '{}'", EntryStatusToString(result));
		fmt::print(std::cerr, message);
		throw(std::runtime_error(message));     // NOLINT(cert-err60-cpp)
	}

    // Read some constants.
    // (!) Actually TTreeReaderValue::Get() method can return nullptr and crash everything around
    //     But we trust the method description that promises to have nullptr only if entry is not loaded
	auto hits_count = static_cast<size_t>(*event_selector->hit_count.Get());         // Number of hits
	auto tracks_count = static_cast<size_t>(*event_selector->trk_count.Get());       // Number of tracks
	auto o_parts_count = static_cast<size_t>(*event_selector->gen_prt_count.Get());  // Number of generated particles
	auto o_vtx_count = static_cast<size_t>(*event_selector->gen_vtx_count.Get());    // Number of generated vertexes
	auto event_index = static_cast<uint64_t>(*event_selector->event_id.Get());       // Geant event index

	if(auto selector_2_0 = dynamic_cast<JLEICGeantSelector_2_0*>(event_selector)) {
        auto dis_info = new DisInfo();
        dis_info->q2 = *selector_2_0->evt_true_q2;
        dis_info->x = *selector_2_0->evt_true_x ;
        dis_info->y = *selector_2_0->evt_true_y ;
        dis_info->w2 = *selector_2_0->evt_true_w2;
        dis_info->nu = *selector_2_0->evt_true_nu;
        dis_info->t_hat = *selector_2_0->evt_true_t_hat;
        event->Insert(dis_info);
	}

	// Create a GeantHit for each record
	std::vector<GeantHit *> hits;
	for(size_t i=0; i < hits_count; i++){
        auto hit = new GeantHit();
        hit->id = event_selector->hit_id[i];
        hit->track_id = static_cast<uint64_t>(event_selector->hit_trk_id[i]);
        hit->parent_track_id = static_cast<uint64_t>(event_selector->hit_parent_trk_id[i]);
        hit->x_pos    = event_selector->hit_x[i];
        hit->y_pos    = event_selector->hit_y[i];
        hit->z_pos    = event_selector->hit_z[i];
        hit->i_pos    = event_selector->hit_i_rep[i];
        hit->j_pos    = event_selector->hit_j_rep[i];
        hit->dedx     = event_selector->hit_e_loss[i];
		hit->vol_name = event_selector->hit_vol_name[i];

		hits.push_back(hit);
	}
	event->Insert(hits);

	// Now fill tracks information
    std::vector<GeantTrack *> tracks;
    for(size_t i=0; i < tracks_count; i++) {
        auto track = new GeantTrack();
        track->id          = event_selector->trk_id[i];
        track->pdg         = event_selector->trk_pdg[i];
        track->parent_id = event_selector->trk_part_id[i];
        track->decay_level = event_selector->trk_level[i];
        track->vtx_x       = event_selector->trk_vtx_x[i];
        track->vtx_y       = event_selector->trk_vtx_y[i];
        track->vtx_z       = event_selector->trk_vtx_z[i];
        track->dir_x       = event_selector->trk_vtx_dir_x[i];
        track->dir_y       = event_selector->trk_vtx_dir_y[i];
        track->dir_z       = event_selector->trk_vtx_dir_z[i];
        track->p		   = event_selector->trk_mom[i];
        tracks.push_back(track);
    }
    event->Insert(tracks);

    // Fill prime vertex information
    std::vector<GeantPrimaryVertex *> vertexes;
    for(size_t i=0; i < o_vtx_count; i++) {
        auto vertex = new GeantPrimaryVertex;

        vertex->count      = o_vtx_count;
        vertex->id         = event_selector->gen_vtx_id[i];
        vertex->part_count = event_selector->gen_vtx_part_count[i];
        vertex->x          = event_selector->gen_vtx_x[i];
        vertex->y          = event_selector->gen_vtx_y[i];
        vertex->z          = event_selector->gen_vtx_z[i];
        vertex->time       = event_selector->gen_vtx_time[i];
        vertex->weight     = event_selector->gen_vtx_weight[i];
        vertexes.push_back(vertex);
    }
    event->Insert(vertexes);

	// Fill Original particles information
	std::vector<GeantPrimaryParticle *> particles;
	for(size_t i=0; i < o_parts_count; i++) {
		auto particle = new GeantPrimaryParticle();

		particle->count   = o_parts_count;
		particle->id      = event_selector->gen_prt_id[i];
		particle->vtx_id  = event_selector->gen_prt_vtx_id[i];
		particle->pdg     = event_selector->gen_prt_pdg[i];
		particle->trk_id  = event_selector->gen_prt_trk_id[i];
		particle->charge  = event_selector->gen_prt_charge[i];
		particle->dir_x   = event_selector->gen_prt_dir_x[i];
		particle->dir_y   = event_selector->gen_prt_dir_y[i];
		particle->dir_z   = event_selector->gen_prt_dir_z[i];
		particle->tot_mom = event_selector->gen_prt_tot_mom[i];
		particle->tot_e   = event_selector->gen_prt_tot_e[i];
		particle->time    = event_selector->gen_prt_time[i];
		particle->pol_x   = event_selector->gen_prt_polariz_x[i];
		particle->pol_y   = event_selector->gen_prt_polariz_y[i];
		particle->pol_z   = event_selector->gen_prt_polariz_z[i];
		particles.push_back(particle);
	}
	event->Insert(particles);
	event->SetEventNumber(static_cast<uint64_t>(event_index));
	event->SetRunNumber(0);
}



// Produces McFluxHit
// This method gets called to produce the McFluxHit objects for the event.
// "partial template specialization" is utilized to define this here in place
template<>
void JFactoryT<McGeneratedVertex>::Process(const std::shared_ptr<const JEvent>& event) {
/// Produces McGeneratedVertex
	auto g_vertexes = event->Get<GeantPrimaryVertex>();
    std::vector<McGeneratedVertex*> vertexes;
	for(auto g_vertex: g_vertexes) {
		auto mc_vertex = new McGeneratedVertex();

		mc_vertex->id          = g_vertex->id         ;
		mc_vertex->part_count  = g_vertex->part_count ;
		mc_vertex->x           = g_vertex->x          ;
		mc_vertex->y           = g_vertex->y          ;
		mc_vertex->z           = g_vertex->z          ;
		mc_vertex->time        = g_vertex->time       ;
		mc_vertex->weight      = g_vertex->weight     ;

		vertexes.push_back(mc_vertex);
	}

	// hits;
    event->Insert(vertexes);
}

// Produces McGeneratedParticle out of GeantPrimaryParticle
// "partial template specialization" is utilized to define this here in place
template<>
void JFactoryT<McGeneratedParticle>::Process(const std::shared_ptr<const JEvent>& event) {


    auto g_particles = event->Get<GeantPrimaryParticle>();
	std::vector<McGeneratedParticle *> particles;
	for(auto g_part: g_particles) {
		auto mc_part = new McGeneratedParticle();
		mc_part->count	= g_part->count ;
		mc_part->id		= g_part->id    ;
		mc_part->vtx_id	= g_part->vtx_id;		    /// Generated vertex ID
		mc_part->pdg	= g_part->pdg   ;		    /// PDG value
		mc_part->trk_id	= g_part->trk_id;		    /// ID of the related track
		mc_part->charge	= g_part->charge;		    /// no comments
		mc_part->dir_x	= g_part->dir_x ;		    /// Direction unit vector component at vertex
		mc_part->dir_y	= g_part->dir_y ;
		mc_part->dir_z	= g_part->dir_z ;
		mc_part->p		= g_part->tot_mom;	         /// total momentum
		mc_part->px		= g_part->tot_mom * g_part->dir_x;	        /// dir_x * p
		mc_part->py		= g_part->tot_mom * g_part->dir_y;	        /// dir_y * p
		mc_part->pz		= g_part->tot_mom * g_part->dir_z;	        /// dir_z * p
		mc_part->tot_e	= g_part->tot_e;		     /// total energy
		mc_part->time	= g_part->time ;
		mc_part->pol_x	= g_part->pol_x;		     /// polarization
		mc_part->pol_y	= g_part->pol_y;
		mc_part->pol_z	= g_part->pol_z;
		mc_part->is_stable = true;
		particles.push_back(mc_part);
	}
	event->Insert(particles);
}

// Produces McTracks out of GeantTrack
// "partial template specialization" is utilized to define this here in place
template<>
void JFactoryT<McTrack>::Process(const std::shared_ptr<const JEvent>& event) {

    auto g_tracks = event->Get<GeantTrack>();
	std::vector<McTrack *> tracks;
	for(auto g_track: g_tracks) {
		auto mc_track = new McTrack();
		mc_track->id	=	g_track->id;
		mc_track->parent_id = g_track->parent_id;      // Id of the generated particle info
		mc_track->pdg	=	g_track->pdg;	           // PDG id of the particle
		mc_track->decay_level = g_track->decay_level;  // Level of decay particle 0 generator, 1 - gen. daughters, 2 - etc
		mc_track->vtx_x	=	g_track->vtx_x;
		mc_track->vtx_y	=	g_track->vtx_y;
		mc_track->vtx_z	=	g_track->vtx_z;
		mc_track->dir_x	=	g_track->dir_x;	    /// direction unit vector X at the vertex point
		mc_track->dir_y	=	g_track->dir_y;	    /// direction unit vector Y at the vertex point
		mc_track->dir_z	=	g_track->dir_z;	    /// direction unit vector Z at the vertex point
		mc_track->p		=	g_track->p	;       /// Total momentum [gev]
		mc_track->px	=	g_track->dir_x * g_track->p;      /// p * dir_x
		mc_track->py	=	g_track->dir_y * g_track->p;      /// p * dir_y
		mc_track->pz	=	g_track->dir_z * g_track->p;      /// p * dir_z
		tracks.push_back(mc_track);
	}

	event->Insert(tracks);
}


// Produces McFluxHit out of GeantHit
// This method gets called to produce the McFluxHit objects for the event.
// "partial template specialization" is utilized to define this here in place
template<>
void JFactoryT<McFluxHit>::Process(const std::shared_ptr<const JEvent>& event) {

    auto g_hits = event->Get<GeantHit>();
	std::vector<McFluxHit *> hits;
	for(auto g_hit: g_hits) {
		auto hit = new McFluxHit();
        hit->id       = g_hit->id;          // Unique hit id
		hit->track_id = g_hit->track_id;    // Reference to track
		hit->plane_id = g_hit->plane_id;    // Reference to plane
		hit->x        = g_hit->x_pos;       // [mm]
		hit->y        = g_hit->y_pos;       // [mm]
		hit->z        = g_hit->z_pos;       // [mm]
		hit->e_loss   = g_hit->dedx;        // Energy deposition dE/dx KeV/mm
		hit->vol_name = g_hit->vol_name;    // Detector ID is 0 for now
		hits.push_back(hit);
	}
	event->Insert(hits);
}

std::string EntryStatusToString(TTreeReader::EEntryStatus status)
{
    switch(status) {
        case TTreeReader::EEntryStatus::kEntryValid           : return  "data read okay";
        case TTreeReader::EEntryStatus::kEntryNotLoaded       : return  "no entry has been loaded yet";
        case TTreeReader::EEntryStatus::kEntryNoTree          : return  "the tree does not exist";
        case TTreeReader::EEntryStatus::kEntryNotFound        : return  "the tree entry number does not exist";
        case TTreeReader::EEntryStatus::kEntryChainSetupError : return  "problem in accessing a chain element, e.g. file without the tree";
        case TTreeReader::EEntryStatus::kEntryChainFileError  : return  "problem in opening a chain's file";
        case TTreeReader::EEntryStatus::kEntryDictionaryError : return  "problem reading dictionary info from tree";
        case TTreeReader::EEntryStatus::kEntryBeyondEnd       : return  "last entry loop has reached its end";
        default:
            return "unknown error";
    }
}
