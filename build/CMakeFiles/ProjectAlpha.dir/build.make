# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/odin/zettel0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/odin/zettel0/build

# Include any dependencies generated for this target.
include CMakeFiles/ProjectAlpha.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProjectAlpha.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjectAlpha.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectAlpha.dir/flags.make

CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o: CMakeFiles/ProjectAlpha.dir/flags.make
CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o: ../stack/examples/afg1.cpp
CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o: CMakeFiles/ProjectAlpha.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/zettel0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o -MF CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o.d -o CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o -c /home/odin/zettel0/stack/examples/afg1.cpp

CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/zettel0/stack/examples/afg1.cpp > CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.i

CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/zettel0/stack/examples/afg1.cpp -o CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.s

# Object files for target ProjectAlpha
ProjectAlpha_OBJECTS = \
"CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o"

# External object files for target ProjectAlpha
ProjectAlpha_EXTERNAL_OBJECTS =

ProjectAlpha: CMakeFiles/ProjectAlpha.dir/stack/examples/afg1.cpp.o
ProjectAlpha: CMakeFiles/ProjectAlpha.dir/build.make
ProjectAlpha: CMakeFiles/ProjectAlpha.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/odin/zettel0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProjectAlpha"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjectAlpha.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectAlpha.dir/build: ProjectAlpha
.PHONY : CMakeFiles/ProjectAlpha.dir/build

CMakeFiles/ProjectAlpha.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjectAlpha.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjectAlpha.dir/clean

CMakeFiles/ProjectAlpha.dir/depend:
	cd /home/odin/zettel0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/odin/zettel0 /home/odin/zettel0 /home/odin/zettel0/build /home/odin/zettel0/build /home/odin/zettel0/build/CMakeFiles/ProjectAlpha.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProjectAlpha.dir/depend

