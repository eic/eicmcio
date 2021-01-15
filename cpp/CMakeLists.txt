cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(eicmcio_project VERSION 0.0.1 LANGUAGES CXX)


# C++ standard to use (controlled with -DCPP_STANDARD flag)
if(NOT DEFINED CMAKE_CXX_STANDARD)
    SET(CMAKE_CXX_STANDARD 11)
    message(STATUS "g4e: Setting default to ${CMAKE_CXX_STANDARD}")
endif()
message(STATUS "eicmcio: CMAKE_CXX_STANDARD: ${CMAKE_CXX_STANDARD}")


include_directories(SYSTEM spdlog ./)

add_subdirectory(eicmcio)
add_subdirectory(tests)

