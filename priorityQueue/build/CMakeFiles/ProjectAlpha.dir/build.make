# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lukasbaumeister/zettel0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lukasbaumeister/zettel0/build

# Include any dependencies generated for this target.
include CMakeFiles/ProjectAlpha.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProjectAlpha.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjectAlpha.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectAlpha.dir/flags.make

CMakeFiles/ProjectAlpha.dir/main.cpp.o: CMakeFiles/ProjectAlpha.dir/flags.make
CMakeFiles/ProjectAlpha.dir/main.cpp.o: /Users/lukasbaumeister/zettel0/main.cpp
CMakeFiles/ProjectAlpha.dir/main.cpp.o: CMakeFiles/ProjectAlpha.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukasbaumeister/zettel0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjectAlpha.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjectAlpha.dir/main.cpp.o -MF CMakeFiles/ProjectAlpha.dir/main.cpp.o.d -o CMakeFiles/ProjectAlpha.dir/main.cpp.o -c /Users/lukasbaumeister/zettel0/main.cpp

CMakeFiles/ProjectAlpha.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectAlpha.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukasbaumeister/zettel0/main.cpp > CMakeFiles/ProjectAlpha.dir/main.cpp.i

CMakeFiles/ProjectAlpha.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectAlpha.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukasbaumeister/zettel0/main.cpp -o CMakeFiles/ProjectAlpha.dir/main.cpp.s

# Object files for target ProjectAlpha
ProjectAlpha_OBJECTS = \
"CMakeFiles/ProjectAlpha.dir/main.cpp.o"

# External object files for target ProjectAlpha
ProjectAlpha_EXTERNAL_OBJECTS =

ProjectAlpha: CMakeFiles/ProjectAlpha.dir/main.cpp.o
ProjectAlpha: CMakeFiles/ProjectAlpha.dir/build.make
ProjectAlpha: CMakeFiles/ProjectAlpha.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lukasbaumeister/zettel0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProjectAlpha"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjectAlpha.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectAlpha.dir/build: ProjectAlpha
.PHONY : CMakeFiles/ProjectAlpha.dir/build

CMakeFiles/ProjectAlpha.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjectAlpha.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjectAlpha.dir/clean

CMakeFiles/ProjectAlpha.dir/depend:
	cd /Users/lukasbaumeister/zettel0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lukasbaumeister/zettel0 /Users/lukasbaumeister/zettel0 /Users/lukasbaumeister/zettel0/build /Users/lukasbaumeister/zettel0/build /Users/lukasbaumeister/zettel0/build/CMakeFiles/ProjectAlpha.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProjectAlpha.dir/depend

