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
include src/CMakeFiles/podioRootIO.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/podioRootIO.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/podioRootIO.dir/flags.make

src/CMakeFiles/podioRootIO.dir/PythonEventStore.cc.o: src/CMakeFiles/podioRootIO.dir/flags.make
src/CMakeFiles/podioRootIO.dir/PythonEventStore.cc.o: ../src/PythonEventStore.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/podioRootIO.dir/PythonEventStore.cc.o"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/podioRootIO.dir/PythonEventStore.cc.o -c /home/romanov/eic/soft/podio/src/v00-13/src/PythonEventStore.cc

src/CMakeFiles/podioRootIO.dir/PythonEventStore.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/podioRootIO.dir/PythonEventStore.cc.i"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanov/eic/soft/podio/src/v00-13/src/PythonEventStore.cc > CMakeFiles/podioRootIO.dir/PythonEventStore.cc.i

src/CMakeFiles/podioRootIO.dir/PythonEventStore.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/podioRootIO.dir/PythonEventStore.cc.s"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanov/eic/soft/podio/src/v00-13/src/PythonEventStore.cc -o CMakeFiles/podioRootIO.dir/PythonEventStore.cc.s

src/CMakeFiles/podioRootIO.dir/ROOTReader.cc.o: src/CMakeFiles/podioRootIO.dir/flags.make
src/CMakeFiles/podioRootIO.dir/ROOTReader.cc.o: ../src/ROOTReader.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/podioRootIO.dir/ROOTReader.cc.o"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/podioRootIO.dir/ROOTReader.cc.o -c /home/romanov/eic/soft/podio/src/v00-13/src/ROOTReader.cc

src/CMakeFiles/podioRootIO.dir/ROOTReader.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/podioRootIO.dir/ROOTReader.cc.i"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanov/eic/soft/podio/src/v00-13/src/ROOTReader.cc > CMakeFiles/podioRootIO.dir/ROOTReader.cc.i

src/CMakeFiles/podioRootIO.dir/ROOTReader.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/podioRootIO.dir/ROOTReader.cc.s"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanov/eic/soft/podio/src/v00-13/src/ROOTReader.cc -o CMakeFiles/podioRootIO.dir/ROOTReader.cc.s

src/CMakeFiles/podioRootIO.dir/ROOTWriter.cc.o: src/CMakeFiles/podioRootIO.dir/flags.make
src/CMakeFiles/podioRootIO.dir/ROOTWriter.cc.o: ../src/ROOTWriter.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/podioRootIO.dir/ROOTWriter.cc.o"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/podioRootIO.dir/ROOTWriter.cc.o -c /home/romanov/eic/soft/podio/src/v00-13/src/ROOTWriter.cc

src/CMakeFiles/podioRootIO.dir/ROOTWriter.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/podioRootIO.dir/ROOTWriter.cc.i"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanov/eic/soft/podio/src/v00-13/src/ROOTWriter.cc > CMakeFiles/podioRootIO.dir/ROOTWriter.cc.i

src/CMakeFiles/podioRootIO.dir/ROOTWriter.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/podioRootIO.dir/ROOTWriter.cc.s"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanov/eic/soft/podio/src/v00-13/src/ROOTWriter.cc -o CMakeFiles/podioRootIO.dir/ROOTWriter.cc.s

# Object files for target podioRootIO
podioRootIO_OBJECTS = \
"CMakeFiles/podioRootIO.dir/PythonEventStore.cc.o" \
"CMakeFiles/podioRootIO.dir/ROOTReader.cc.o" \
"CMakeFiles/podioRootIO.dir/ROOTWriter.cc.o"

# External object files for target podioRootIO
podioRootIO_EXTERNAL_OBJECTS =

src/libpodioRootIO.so: src/CMakeFiles/podioRootIO.dir/PythonEventStore.cc.o
src/libpodioRootIO.so: src/CMakeFiles/podioRootIO.dir/ROOTReader.cc.o
src/libpodioRootIO.so: src/CMakeFiles/podioRootIO.dir/ROOTWriter.cc.o
src/libpodioRootIO.so: src/CMakeFiles/podioRootIO.dir/build.make
src/libpodioRootIO.so: src/libpodio.so
src/libpodioRootIO.so: /home/romanov/eic/soft/root/root-v6-20-04/lib/libTree.so
src/libpodioRootIO.so: /home/romanov/eic/soft/root/root-v6-20-04/lib/libImt.so
src/libpodioRootIO.so: /home/romanov/eic/soft/root/root-v6-20-04/lib/libNet.so
src/libpodioRootIO.so: /home/romanov/eic/soft/root/root-v6-20-04/lib/libRIO.so
src/libpodioRootIO.so: /home/romanov/eic/soft/root/root-v6-20-04/lib/libThread.so
src/libpodioRootIO.so: /home/romanov/eic/soft/root/root-v6-20-04/lib/libCore.so
src/libpodioRootIO.so: src/CMakeFiles/podioRootIO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libpodioRootIO.so"
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/podioRootIO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/podioRootIO.dir/build: src/libpodioRootIO.so

.PHONY : src/CMakeFiles/podioRootIO.dir/build

src/CMakeFiles/podioRootIO.dir/clean:
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/podioRootIO.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/podioRootIO.dir/clean

src/CMakeFiles/podioRootIO.dir/depend:
	cd /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/romanov/eic/soft/podio/src/v00-13 /home/romanov/eic/soft/podio/src/v00-13/src /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src /home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/src/CMakeFiles/podioRootIO.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/podioRootIO.dir/depend

