# Automatically set plugin name the same as the direcotry name
# Don't forget string(REPLACE " " "_" PLUGIN_NAME ${PLUGIN_NAME}) if this dir has spaces in its name
get_filename_component(PLUGIN_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

print_header(">>>>   P L U G I N :   ${PLUGIN_NAME}    <<<<")       # Fancy printing

add_plugin(${PLUGIN_NAME})                                          # Creates plugin 'target'

# (!) GLOB is not recommended by CMake. So it is better to use:
# target_sources_local(${PLUGIN_NAME} PRIVATE your_file.cc ... PUBLIC your_file.h ...)
# But... GLOB here makes this file just hot pluggable
file(GLOB SRC_FILES *.cc)
file(GLOB HEADER_FILES *.h)

find_package(HepMC3 REQUIRED)

message(STATUS "${PLUGIN_NAME}: HEPMC3_LIB = ${HEPMC3_LIB} ")
message(STATUS "${PLUGIN_NAME}: HEPMC3_INCLUDE_DIR = ${HEPMC3_INCLUDE_DIR} ")

# To somehow control GLOB lets at least name the files we are going to compile:
print_file_names("" "\nSource files to build:" ${SRC_FILES})     # Prints source files
print_file_names("" "\nHeader files to build:" ${HEADER_FILES})  # Prints header files

# Add sources to our target
target_sources(${PLUGIN_NAME} PRIVATE ${SRC_FILES} PUBLIC ${HEADER_FILES})

# Libraries used for this plugin
target_link_libraries(${PLUGIN_NAME} ${ROOT_LIBRARIES} -L${JANA_LIB_DIR} ${JANA_LIB} ejana_fmt ${HEPMC3_LIB})
target_include_directories(${PLUGIN_NAME} SYSTEM PRIVATE ${HEPMC3_INCLUDE_DIR})

install(DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/" # source directory
        DESTINATION "include/ejana/plugins/io/${PLUGIN_NAME}" # target directory
        FILES_MATCHING PATTERN "*.h" # select header files
        )