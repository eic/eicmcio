cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(cpp_tests_exec VERSION 0.0.1 LANGUAGES CXX)

add_executable(cpp_tests_exec
        catch2/catch.cpp
        catch2/catch.hpp
        test_beagle_reader.cpp)


find_package(eicmcio 0.0.1 REQUIRED)
target_link_libraries(cpp_tests_exec eicmcio)
