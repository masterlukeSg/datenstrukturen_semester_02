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
include CMakeFiles/demo_1_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/demo_1_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/demo_1_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo_1_test.dir/flags.make

CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o: CMakeFiles/demo_1_test.dir/flags.make
CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o: /Users/lukasbaumeister/zettel0/priorityQueue/test/test.cpp
CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o: CMakeFiles/demo_1_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lukasbaumeister/zettel0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o -MF CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o.d -o CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o -c /Users/lukasbaumeister/zettel0/priorityQueue/test/test.cpp

CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lukasbaumeister/zettel0/priorityQueue/test/test.cpp > CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.i

CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lukasbaumeister/zettel0/priorityQueue/test/test.cpp -o CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.s

# Object files for target demo_1_test
demo_1_test_OBJECTS = \
"CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o"

# External object files for target demo_1_test
demo_1_test_EXTERNAL_OBJECTS =

demo_1_test: CMakeFiles/demo_1_test.dir/priorityQueue/test/test.cpp.o
demo_1_test: CMakeFiles/demo_1_test.dir/build.make
demo_1_test: lib/libgtest_main.a
demo_1_test: lib/libgtest.a
demo_1_test: CMakeFiles/demo_1_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lukasbaumeister/zettel0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demo_1_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo_1_test.dir/link.txt --verbose=$(VERBOSE)
	/Applications/CMake.app/Contents/bin/cmake -D TEST_TARGET=demo_1_test -D TEST_EXECUTABLE=/Users/lukasbaumeister/zettel0/build/demo_1_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/lukasbaumeister/zettel0/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=demo_1_test_TESTS -D CTEST_FILE=/Users/lukasbaumeister/zettel0/build/demo_1_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /Applications/CMake.app/Contents/share/cmake-3.24/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/demo_1_test.dir/build: demo_1_test
.PHONY : CMakeFiles/demo_1_test.dir/build

CMakeFiles/demo_1_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demo_1_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demo_1_test.dir/clean

CMakeFiles/demo_1_test.dir/depend:
	cd /Users/lukasbaumeister/zettel0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lukasbaumeister/zettel0 /Users/lukasbaumeister/zettel0 /Users/lukasbaumeister/zettel0/build /Users/lukasbaumeister/zettel0/build /Users/lukasbaumeister/zettel0/build/CMakeFiles/demo_1_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo_1_test.dir/depend

