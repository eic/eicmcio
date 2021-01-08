# LUND file format

Lund file format has many flavours. It consist of one line of the event record and
a line for each particle. 

```
event 1 data
prticle 1 record
prticle 2 record
...
event 2 data
particle 1 record
particle 2 record
... 
```

## Particle record
|column|Pythia6|quantity|
|------|------|--------|
| 0    |I     | 	line index, runs from 1 to nrTracks
| 1    |K(I,1)| 	status code KS (1: stable particles 11: particles which decay 55; radiative photon)
| 2    |K(I,2)| 	particle KF code (211: pion, 2112:n, ....)
| 3    |K(I,3)| 	line number of parent particle
| 4    |K(I,4)| 	normally the line number of the first daughter; it is 0 for an undecayed particle or unfragmented parton
| 5    |K(I,5)| 	normally the line number of the last daughter; it is 0 for an undecayed particle or unfragmented parton.
| 6    |P(I,1)| 	px of particle
| 7    |P(I,2)| 	py of particle
| 8    |P(I,3)| 	pz of particle
| 9    |P(I,4)| 	Energy of particle
| 10   |P(I,5)| 	mass of particle
| 11   |V(I,1)| 	x vertex information
| 12   |V(I,2)| 	y vertex information
| 13   |V(I,3)| 	z vertex information 

[From pythia6 documentation](https://arxiv.org/pdf/hep-ph/0603175.pdf):

> For particleI,K(I,1) gives information on whether or not a parton or particle
> has fragmented  or  decayed, K(I,2) gives the particle code, K(I,3) its origin,
> K(I,4) and K(I,5) the position of fragmentation/decay products, andP(I,1)–P(I,5)
> momentum, energy and mass. V - matrix  contains  decay  vertices;

In ejana, this record is represented by [LundParticle](LundParticle.h) class;

## Event record:

While particle record is more or less standard, the event
record varies greatly depending on generator. 

(which is
usually pretty custom depending on the generator)

### EIC Pythia6

I, 
ievent, 
genevent, 
subprocess, 
nucleon,
targetparton,
xtargparton,
beamparton,
xbeamparton,
thetabeamprtn,
truey,
trueQ2,
truex,
trueW2,
trueNu,
leptonphi,
s_hat,
t_hat,
u_hat,
pt2_hat,
Q2_hat,
F2,
F1,
R,
sigma_rad,
SigRadCor,
EBrems,
photonflux,
nrTracks

https://wiki.bnl.gov/eic/index.php/PYTHIA

### Original pythia6

The header of Pythia6 is:

|column|quantity|
|------|--------|
|0|Number of particles|
|1|Mass number of the target (UD)|
|2|Atomic number oif the target (UD)|
|3|Target polarization  (UD)|
|4|Beam Polarization|
|5|Beam type, electron=11, photon=22” (UD)|
|6|Beam energy (GeV)  (UD)|
|7|Interacted nucleon ID (2212 or 2112)  (UD)|
|8|Process ID (UD)|
|9|Event weight (UD)|

But for example [EIC_mesonMC](https://github.com/JeffersonLab/EIC_mesonMC) uses 
fields 2-5 ot represent true DIS info (x, Q2, nu, etc.)

In ejana lund event data is represented by [LundEventData](LundEventData.h) class, 
Which has `LundEventData::column_values`. The most important members are: 

```c++
    class LundEventData : public JObject {
    public:
        // FIELDS

        /// Values for the lund header
        ///
        /// In original pythia6 format: 
        ///    column_values[0] - the target mass, 
        ///    column_values[8] - Event weight
        std::vector<double> column_values;

        /// Collection of primary vertexes (that came from a generator)
        std::vector<LundParticle *> particles; // Primary particles (that comes from a generator)

        /// Not parsed event (in forms of tokens)
        std::unique_ptr<ej::TextFileEvent> text_event;

        /// Parse() function was called
        bool is_parsed = false;

        /// File line number at which this event starts
        uint64_t started_at_line;
// ...
```

Thus, the length 

So it might be used as (the example is for [EIC_mesonMC]):

```c++
auto event_data = event->GetSingle<ej::LundEventData>();
tgt_mass   = eventData->column_values[1];   // Column #2  Mass number of the target
evt_weight = eventData->column_values[9];   // Column #10 Event weight
```


### Using Lund files in analysis

It is recommended to organize the analysis code so that it shouldn't know where 
the data comes from. LundParticle-s are correctly converted to the general
McGeneratedParticle class;

But because lund event format could be customized and analysis 
may need the data, here is a code sample which checks and uses LundEventData directly:

```c++

bool is_lund_evnet = event->GetFactory<ej::LundEventData>("", false) != nullptr;

if(is_lund_evnet) {
    have_true_dis_info = true;
    auto eventData = event->GetSingle<ej::LundEventData>();
    true_x = eventData->column_values[0];
    true_q2 = eventData->column_values[1];
    // ...
```


### Testing this plugin:

Download tiny sample 
[from here](https://gitlab.com/eic/validation_data/-/blob/master/tiny_sets/eic-pythia_ep-10x100_10evt_rad-cor-cut.lund):

```
ejana
-Pplugins=lund_reader,vmeson
-Pnthreads=1
-Pnevents=5
-Poutput=eic_pythia_lund_reader.root
-Pjana:debug_plugin_loading=1
./eic-pythia_ep-10x100_10evt_rad-cor-cut.lund
```

For CLion test:

```
Working directory
 $PROJECT_DIR$/src/tests/pytests

Environment variables:
JANA_PLUGIN_PATH=$PROJECT_DIR$/cmake_build_debug
```


