cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(cpp_tests_exec VERSION 0.0.1 LANGUAGES CXX)

add_executable(cpp_tests_exec
        catch2/catch.cpp
        catch2/catch.hpp
        test_beagle_reader.cpp)

find_package(eicmcio 0.0.1 REQUIRED)
target_link_libraries(cpp_tests_exec eicmcio)

# we need files
message(STATUS " {PROJECT_BINARY_DIR}  ${PROJECT_BINARY_DIR}")
configure_file(../../assets/beagle_3events.txt beagle_3events.txt COPYONLY)
configure_file(../../assets/beagle_3events.txt ${PROJECT_BINARY_DIR}/beagle_3events.txt COPYONLY)


# Code coverage
# =============================

find_program(GCOVR_FOUND "gcovr")
SET(USE_CODE_COVERAGE 0)
if(GCOVR_FOUND)
    message(STATUS "eicmcio: gcovr is found")
    if(CMAKE_COMPILER_IS_GNUCXX)
        message(STATUS "eicmcio: ... and compiler is GNUCXX, will generate code coverage ")
        SET(USE_CODE_COVERAGE 1)
    else()
        message(STATUS "eicmcio: ... but compiler is IS NOT GNUCXX, will NOT generate code coverage ")
    endif()
else()
    message(STATUS "eicmcio: gcovr is NOT found, will NOT generate code coverage")
endif()
# CodeCoverage.cmake is taken from here:
# https://raw.githubusercontent.com/bilke/cmake-modules/master/CodeCoverage.cmake
# SO QA is here:
# https://stackoverflow.com/questions/13116488/detailed-guide-on-using-gcov-with-cmake-cdash

if(USE_CODE_COVERAGE)
    include(CodeCoverage)
    append_coverage_compiler_flags()
#        setup_target_for_coverage_gcovr_html(
#                           NAME ${PROJECT_NAME}_coverage
#                           EXECUTABLE cpp_tests_exec
#                           BASE_DIRECTORY "${PROJECT_SOURCE_DIR}/../eicmcio"
#                           EXCLUDE "spdlog/*" # "tests/catch2/*"
#        )

#        setup_target_for_coverage_lcov(
#                                       NAME ${PROJECT_NAME}_coverage
#                                       EXECUTABLE cpp_tests_exec
#                                       BASE_DIRECTORY "${PROJECT_SOURCE_DIR}/../eicmcio"
#                                       EXCLUDE "/spdlog/*" # "tests/catch2/*"
#                    )

    setup_target_for_coverage_gcovr_xml(
            NAME ${PROJECT_NAME}_coverage
            EXECUTABLE cpp_tests_exec
            BASE_DIRECTORY "${PROJECT_SOURCE_DIR}/../eicmcio"
            EXCLUDE "spdlog/*" # "tests/catch2/*"

    )
endif()

