# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = L:\GIT\POO\UnitTesting-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = L:\GIT\POO\UnitTesting-1\cmake-build-debug

# Include any dependencies generated for this target.
include lib/googleTest/googletest/CMakeFiles/gtest_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/googleTest/googletest/CMakeFiles/gtest_main.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/googleTest/googletest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googleTest/googletest/CMakeFiles/gtest_main.dir/flags.make

lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: lib/googleTest/googletest/CMakeFiles/gtest_main.dir/flags.make
lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: lib/googleTest/googletest/CMakeFiles/gtest_main.dir/includes_CXX.rsp
lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: ../lib/googleTest/googletest/src/gtest_main.cc
lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj: lib/googleTest/googletest/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=L:\GIT\POO\UnitTesting-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj"
	cd /d L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj -MF CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj.d -o CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj -c L:\GIT\POO\UnitTesting-1\lib\googleTest\googletest\src\gtest_main.cc

lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /d L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E L:\GIT\POO\UnitTesting-1\lib\googleTest\googletest\src\gtest_main.cc > CMakeFiles\gtest_main.dir\src\gtest_main.cc.i

lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /d L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S L:\GIT\POO\UnitTesting-1\lib\googleTest\googletest\src\gtest_main.cc -o CMakeFiles\gtest_main.dir\src\gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/libgtest_maind.a: lib/googleTest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj
lib/libgtest_maind.a: lib/googleTest/googletest/CMakeFiles/gtest_main.dir/build.make
lib/libgtest_maind.a: lib/googleTest/googletest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=L:\GIT\POO\UnitTesting-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\libgtest_maind.a"
	cd /d L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest_main.dir\cmake_clean_target.cmake
	cd /d L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gtest_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googleTest/googletest/CMakeFiles/gtest_main.dir/build: lib/libgtest_maind.a
.PHONY : lib/googleTest/googletest/CMakeFiles/gtest_main.dir/build

lib/googleTest/googletest/CMakeFiles/gtest_main.dir/clean:
	cd /d L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest && $(CMAKE_COMMAND) -P CMakeFiles\gtest_main.dir\cmake_clean.cmake
.PHONY : lib/googleTest/googletest/CMakeFiles/gtest_main.dir/clean

lib/googleTest/googletest/CMakeFiles/gtest_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" L:\GIT\POO\UnitTesting-1 L:\GIT\POO\UnitTesting-1\lib\googleTest\googletest L:\GIT\POO\UnitTesting-1\cmake-build-debug L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest L:\GIT\POO\UnitTesting-1\cmake-build-debug\lib\googleTest\googletest\CMakeFiles\gtest_main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib/googleTest/googletest/CMakeFiles/gtest_main.dir/depend

