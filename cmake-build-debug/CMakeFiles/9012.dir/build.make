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
include CMakeFiles/9012.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/9012.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/9012.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/9012.dir/flags.make

CMakeFiles/9012.dir/boj/stack/9012.cpp.o: CMakeFiles/9012.dir/flags.make
CMakeFiles/9012.dir/boj/stack/9012.cpp.o: /Users/jeonjeonghyeon/Documents/algorithm/boj/stack/9012.cpp
CMakeFiles/9012.dir/boj/stack/9012.cpp.o: CMakeFiles/9012.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/9012.dir/boj/stack/9012.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/9012.dir/boj/stack/9012.cpp.o -MF CMakeFiles/9012.dir/boj/stack/9012.cpp.o.d -o CMakeFiles/9012.dir/boj/stack/9012.cpp.o -c /Users/jeonjeonghyeon/Documents/algorithm/boj/stack/9012.cpp

CMakeFiles/9012.dir/boj/stack/9012.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/9012.dir/boj/stack/9012.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jeonjeonghyeon/Documents/algorithm/boj/stack/9012.cpp > CMakeFiles/9012.dir/boj/stack/9012.cpp.i

CMakeFiles/9012.dir/boj/stack/9012.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/9012.dir/boj/stack/9012.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jeonjeonghyeon/Documents/algorithm/boj/stack/9012.cpp -o CMakeFiles/9012.dir/boj/stack/9012.cpp.s

# Object files for target 9012
9012_OBJECTS = \
"CMakeFiles/9012.dir/boj/stack/9012.cpp.o"

# External object files for target 9012
9012_EXTERNAL_OBJECTS =

9012: CMakeFiles/9012.dir/boj/stack/9012.cpp.o
9012: CMakeFiles/9012.dir/build.make
9012: CMakeFiles/9012.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 9012"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/9012.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/9012.dir/build: 9012
.PHONY : CMakeFiles/9012.dir/build

CMakeFiles/9012.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/9012.dir/cmake_clean.cmake
.PHONY : CMakeFiles/9012.dir/clean

CMakeFiles/9012.dir/depend:
	cd /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jeonjeonghyeon/Documents/algorithm /Users/jeonjeonghyeon/Documents/algorithm /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug /Users/jeonjeonghyeon/Documents/algorithm/cmake-build-debug/CMakeFiles/9012.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/9012.dir/depend

