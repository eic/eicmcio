cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(libeicmcio VERSION 0.0.1 LANGUAGES CXX)

#Make sure that custom modules are found
list(INSERT CMAKE_MODULE_PATH 0 ${CMAKE_SOURCE_DIR}/cmake)

##############################################
# Create target and set properties

add_library(eicmcio
        readers/beagle_reader/BeagleEventData.h
        readers/beagle_reader/BeagleParticle.h
        readers/beagle_reader/JEventSource_beagle.cc
        readers/beagle_reader/JEventSource_beagle.h
)

# Fill this with more required features
target_compile_features(eicmcio PRIVATE cxx_auto_type)

# Don't use it now, but will be used later
# target_link_libraries(eicmcio
#     PUBLIC
#         Boost::headers RapidJSON::RapidJSON
#     PRIVATE
#         Boost::regex
# )

##############################################
# Installation instructions

include(GNUInstallDirs)
set(INSTALL_CONFIGDIR ${CMAKE_INSTALL_LIBDIR}/cmake/eicmcio)

install(TARGETS eicmcio
        EXPORT eicmcio-targets
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        )

#This is required so that the exported target has the name JSONUtils and not jsonutils
#set_target_properties(eicmcio PROPERTIES EXPORT_NAME JSONUtils)

#install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

#Export the targets to a script
install(EXPORT eicmcio-targets
        FILE
        eicmcio.cmake
#        NAMESPACE
#        JSONUtils::
        DESTINATION
        ${INSTALL_CONFIGDIR}
        )

#Create a ConfigVersion.cmake file
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
        ${CMAKE_CURRENT_BINARY_DIR}/eicmcioConfigVersion.cmake
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(cmake/eicmcioConfig.cmake.in
        ${CMAKE_CURRENT_BINARY_DIR}/eicmcioConfig.cmake
        INSTALL_DESTINATION ${INSTALL_CONFIGDIR}
        )

#Install the config, configversion and custom find modules
install(FILES
        #${CMAKE_CURRENT_LIST_DIR}/cmake/FindRapidJSON.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/eicmcioConfig.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/eicmcioConfigVersion.cmake
        DESTINATION ${INSTALL_CONFIGDIR}
        )

##############################################
## Exporting from the build tree
#configure_file(${CMAKE_CURRENT_LIST_DIR}/cmake/FindRapidJSON.cmake
#        ${CMAKE_CURRENT_BINARY_DIR}/FindRapidJSON.cmake
#        COPYONLY)

export(EXPORT eicmcio-targets
        FILE ${CMAKE_CURRENT_BINARY_DIR}/eicmcioTargets.cmake)

#Register package in user's package registry
export(PACKAGE .)

# Make tests
include_directories(../tests)