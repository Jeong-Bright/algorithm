# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jeonjeonghyeon/Documents/algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/boj_tree_1991.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/boj_tree_1991.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/boj_tree_1991.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boj_tree_1991.dir/flags.make

CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o: CMakeFiles/boj_tree_1991.dir/flags.make
CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o: /Users/jeonjeonghyeon/Documents/algorithm/boj/tree/1991.cpp
CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o: CMakeFiles/boj_tree_1991.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o -MF CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o.d -o CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o -c /Users/jeonjeonghyeon/Documents/algorithm/boj/tree/1991.cpp

CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeonjeonghyeon/Documents/algorithm/boj/tree/1991.cpp > CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.i

CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeonjeonghyeon/Documents/algorithm/boj/tree/1991.cpp -o CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.s

# Object files for target boj_tree_1991
boj_tree_1991_OBJECTS = \
"CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o"

# External object files for target boj_tree_1991
boj_tree_1991_EXTERNAL_OBJECTS =

boj_tree_1991: CMakeFiles/boj_tree_1991.dir/boj/tree/1991.cpp.o
boj_tree_1991: CMakeFiles/boj_tree_1991.dir/build.make
boj_tree_1991: CMakeFiles/boj_tree_1991.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable boj_tree_1991"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boj_tree_1991.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boj_tree_1991.dir/build: boj_tree_1991
.PHONY : CMakeFiles/boj_tree_1991.dir/build

CMakeFiles/boj_tree_1991.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boj_tree_1991.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boj_tree_1991.dir/clean

CMakeFiles/boj_tree_1991.dir/depend:
	cd /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeonjeonghyeon/Documents/algorithm /Users/jeonjeonghyeon/Documents/algorithm /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug/CMakeFiles/boj_tree_1991.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/boj_tree_1991.dir/depend

