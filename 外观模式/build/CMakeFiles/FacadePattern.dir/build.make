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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/learnCppProgram/DesignPatternCpp/外观模式

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/learnCppProgram/DesignPatternCpp/外观模式/build

# Include any dependencies generated for this target.
include CMakeFiles/FacadePattern.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FacadePattern.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FacadePattern.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FacadePattern.dir/flags.make

CMakeFiles/FacadePattern.dir/main.cpp.o: CMakeFiles/FacadePattern.dir/flags.make
CMakeFiles/FacadePattern.dir/main.cpp.o: /root/learnCppProgram/DesignPatternCpp/外观模式/main.cpp
CMakeFiles/FacadePattern.dir/main.cpp.o: CMakeFiles/FacadePattern.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/learnCppProgram/DesignPatternCpp/外观模式/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FacadePattern.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FacadePattern.dir/main.cpp.o -MF CMakeFiles/FacadePattern.dir/main.cpp.o.d -o CMakeFiles/FacadePattern.dir/main.cpp.o -c /root/learnCppProgram/DesignPatternCpp/外观模式/main.cpp

CMakeFiles/FacadePattern.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FacadePattern.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/learnCppProgram/DesignPatternCpp/外观模式/main.cpp > CMakeFiles/FacadePattern.dir/main.cpp.i

CMakeFiles/FacadePattern.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FacadePattern.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/learnCppProgram/DesignPatternCpp/外观模式/main.cpp -o CMakeFiles/FacadePattern.dir/main.cpp.s

# Object files for target FacadePattern
FacadePattern_OBJECTS = \
"CMakeFiles/FacadePattern.dir/main.cpp.o"

# External object files for target FacadePattern
FacadePattern_EXTERNAL_OBJECTS =

FacadePattern: CMakeFiles/FacadePattern.dir/main.cpp.o
FacadePattern: CMakeFiles/FacadePattern.dir/build.make
FacadePattern: CMakeFiles/FacadePattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/learnCppProgram/DesignPatternCpp/外观模式/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FacadePattern"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FacadePattern.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FacadePattern.dir/build: FacadePattern
.PHONY : CMakeFiles/FacadePattern.dir/build

CMakeFiles/FacadePattern.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FacadePattern.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FacadePattern.dir/clean

CMakeFiles/FacadePattern.dir/depend:
	cd /root/learnCppProgram/DesignPatternCpp/外观模式/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/learnCppProgram/DesignPatternCpp/外观模式 /root/learnCppProgram/DesignPatternCpp/外观模式 /root/learnCppProgram/DesignPatternCpp/外观模式/build /root/learnCppProgram/DesignPatternCpp/外观模式/build /root/learnCppProgram/DesignPatternCpp/外观模式/build/CMakeFiles/FacadePattern.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FacadePattern.dir/depend

