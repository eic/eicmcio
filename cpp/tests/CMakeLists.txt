cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(cpp_tests_exec VERSION 0.0.1 LANGUAGES CXX)

add_executable(cpp_tests_exec
        catch.cpp
        catch.hpp)

# Do we need this?
#target_compile_features(cpp_tests_exec PRIVATE cxx_auto_type)

find_package(eicmcio 0.0.1 REQUIRED)
target_link_libraries(cpp_tests_exec eicmcio)
