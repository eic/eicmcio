# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/romanov/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.6682.181/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/romanov/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.6682.181/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/romanov/eic/soft/podio/src/v00-13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug

# Include any dependencies generated for this target.
include tests/CMakeFiles/read_and_write.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/read_and_write.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/read_and_write.dir/flags.make

tests/CMakeFiles/read_and_write.dir/read_and_write.cpp.o: tests/CMakeFiles/read_and_write.dir/flags.make
tests/CMakeFiles/read_and_write.dir/read_and_write.cpp.o: ../tests/read_and_write.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/read_and_write.dir/read_and_write.cpp.o"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/read_and_write.dir/read_and_write.cpp.o -c /home/romanov/eic/soft/podio/src/v00-13/tests/read_and_write.cpp

tests/CMakeFiles/read_and_write.dir/read_and_write.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/read_and_write.dir/read_and_write.cpp.i"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanov/eic/soft/podio/src/v00-13/tests/read_and_write.cpp > CMakeFiles/read_and_write.dir/read_and_write.cpp.i

tests/CMakeFiles/read_and_write.dir/read_and_write.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/read_and_write.dir/read_and_write.cpp.s"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanov/eic/soft/podio/src/v00-13/tests/read_and_write.cpp -o CMakeFiles/read_and_write.dir/read_and_write.cpp.s

# Object files for target read_and_write
read_and_write_OBJECTS = \
"CMakeFiles/read_and_write.dir/read_and_write.cpp.o"

# External object files for target read_and_write
read_and_write_EXTERNAL_OBJECTS =

tests/read_and_write: tests/CMakeFiles/read_and_write.dir/read_and_write.cpp.o
tests/read_and_write: tests/CMakeFiles/read_and_write.dir/build.make
tests/read_and_write: tests/libTestDataModelDict.so
tests/read_and_write: src/libpodioRootIO.so
tests/read_and_write: tests/libTestDataModel.so
tests/read_and_write: src/libpodio.so
tests/read_and_write: /home/romanov/eic/soft/root/root-v6-20-04/lib/libTree.so
tests/read_and_write: /home/romanov/eic/soft/root/root-v6-20-04/lib/libImt.so
tests/read_and_write: /home/romanov/eic/soft/root/root-v6-20-04/lib/libNet.so
tests/read_and_write: /home/romanov/eic/soft/root/root-v6-20-04/lib/libRIO.so
tests/read_and_write: /home/romanov/eic/soft/root/root-v6-20-04/lib/libThread.so
tests/read_and_write: /home/romanov/eic/soft/root/root-v6-20-04/lib/libCore.so
tests/read_and_write: tests/CMakeFiles/read_and_write.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable read_and_write"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/read_and_write.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/read_and_write.dir/build: tests/read_and_write

.PHONY : tests/CMakeFiles/read_and_write.dir/build

tests/CMakeFiles/read_and_write.dir/clean:
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests && $(CMAKE_COMMAND) -P CMakeFiles/read_and_write.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/read_and_write.dir/clean

tests/CMakeFiles/read_and_write.dir/depend:
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/romanov/eic/soft/podio/src/v00-13 /home/romanov/eic/soft/podio/src/v00-13/tests /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests/CMakeFiles/read_and_write.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/read_and_write.dir/depend
