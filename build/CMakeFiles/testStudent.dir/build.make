# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tory/MergeSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tory/MergeSort/build

# Include any dependencies generated for this target.
include CMakeFiles/testStudent.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testStudent.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testStudent.dir/flags.make

CMakeFiles/testStudent.dir/src/MergeSort.cc.o: CMakeFiles/testStudent.dir/flags.make
CMakeFiles/testStudent.dir/src/MergeSort.cc.o: ../src/MergeSort.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tory/MergeSort/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/testStudent.dir/src/MergeSort.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testStudent.dir/src/MergeSort.cc.o -c /home/tory/MergeSort/src/MergeSort.cc

CMakeFiles/testStudent.dir/src/MergeSort.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStudent.dir/src/MergeSort.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tory/MergeSort/src/MergeSort.cc > CMakeFiles/testStudent.dir/src/MergeSort.cc.i

CMakeFiles/testStudent.dir/src/MergeSort.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStudent.dir/src/MergeSort.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tory/MergeSort/src/MergeSort.cc -o CMakeFiles/testStudent.dir/src/MergeSort.cc.s

CMakeFiles/testStudent.dir/src/MergeSort.cc.o.requires:
.PHONY : CMakeFiles/testStudent.dir/src/MergeSort.cc.o.requires

CMakeFiles/testStudent.dir/src/MergeSort.cc.o.provides: CMakeFiles/testStudent.dir/src/MergeSort.cc.o.requires
	$(MAKE) -f CMakeFiles/testStudent.dir/build.make CMakeFiles/testStudent.dir/src/MergeSort.cc.o.provides.build
.PHONY : CMakeFiles/testStudent.dir/src/MergeSort.cc.o.provides

CMakeFiles/testStudent.dir/src/MergeSort.cc.o.provides.build: CMakeFiles/testStudent.dir/src/MergeSort.cc.o

# Object files for target testStudent
testStudent_OBJECTS = \
"CMakeFiles/testStudent.dir/src/MergeSort.cc.o"

# External object files for target testStudent
testStudent_EXTERNAL_OBJECTS =

testStudent: CMakeFiles/testStudent.dir/src/MergeSort.cc.o
testStudent: CMakeFiles/testStudent.dir/build.make
testStudent: CMakeFiles/testStudent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testStudent"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testStudent.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testStudent.dir/build: testStudent
.PHONY : CMakeFiles/testStudent.dir/build

CMakeFiles/testStudent.dir/requires: CMakeFiles/testStudent.dir/src/MergeSort.cc.o.requires
.PHONY : CMakeFiles/testStudent.dir/requires

CMakeFiles/testStudent.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testStudent.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testStudent.dir/clean

CMakeFiles/testStudent.dir/depend:
	cd /home/tory/MergeSort/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tory/MergeSort /home/tory/MergeSort /home/tory/MergeSort/build /home/tory/MergeSort/build /home/tory/MergeSort/build/CMakeFiles/testStudent.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testStudent.dir/depend

