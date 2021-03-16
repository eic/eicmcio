#include "catch2/catch.hpp"
#include "eicmcio/BeagleReader.h"
#include "eicmcio/BeagleEventData.h"

#include <unistd.h>
#include <stdio.h>
#include <limits.h>


TEST_CASE( "BeagleReader read a single file", "[reader]" ) {
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working dir: %s\n", cwd);
    } else {
        perror("getcwd() error");
    }

    eicmcio::BeagleReader reader("beagle_3events.txt");
    eicmcio::BeagleEventData data;
    bool result = reader.GetEvent(data);
    REQUIRE (data.genevent == 1);
    REQUIRE(data.particles.size() == 11);
    REQUIRE(data.particles[0]->kf_code == 11);
    //ggg
}