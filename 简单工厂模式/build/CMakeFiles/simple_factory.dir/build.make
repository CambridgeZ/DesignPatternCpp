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
CMAKE_SOURCE_DIR = /root/learnCppProgram/DesignPatternCpp/简单工厂模式

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/learnCppProgram/DesignPatternCpp/简单工厂模式/build

# Include any dependencies generated for this target.
include CMakeFiles/simple_factory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simple_factory.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simple_factory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_factory.dir/flags.make

CMakeFiles/simple_factory.dir/test.cpp.o: CMakeFiles/simple_factory.dir/flags.make
CMakeFiles/simple_factory.dir/test.cpp.o: /root/learnCppProgram/DesignPatternCpp/简单工厂模式/test.cpp
CMakeFiles/simple_factory.dir/test.cpp.o: CMakeFiles/simple_factory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/learnCppProgram/DesignPatternCpp/简单工厂模式/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_factory.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simple_factory.dir/test.cpp.o -MF CMakeFiles/simple_factory.dir/test.cpp.o.d -o CMakeFiles/simple_factory.dir/test.cpp.o -c /root/learnCppProgram/DesignPatternCpp/简单工厂模式/test.cpp

CMakeFiles/simple_factory.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_factory.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/learnCppProgram/DesignPatternCpp/简单工厂模式/test.cpp > CMakeFiles/simple_factory.dir/test.cpp.i

CMakeFiles/simple_factory.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_factory.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/learnCppProgram/DesignPatternCpp/简单工厂模式/test.cpp -o CMakeFiles/simple_factory.dir/test.cpp.s

# Object files for target simple_factory
simple_factory_OBJECTS = \
"CMakeFiles/simple_factory.dir/test.cpp.o"

# External object files for target simple_factory
simple_factory_EXTERNAL_OBJECTS =

simple_factory: CMakeFiles/simple_factory.dir/test.cpp.o
simple_factory: CMakeFiles/simple_factory.dir/build.make
simple_factory: CMakeFiles/simple_factory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/learnCppProgram/DesignPatternCpp/简单工厂模式/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simple_factory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_factory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_factory.dir/build: simple_factory
.PHONY : CMakeFiles/simple_factory.dir/build

CMakeFiles/simple_factory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_factory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_factory.dir/clean

CMakeFiles/simple_factory.dir/depend:
	cd /root/learnCppProgram/DesignPatternCpp/简单工厂模式/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/learnCppProgram/DesignPatternCpp/简单工厂模式 /root/learnCppProgram/DesignPatternCpp/简单工厂模式 /root/learnCppProgram/DesignPatternCpp/简单工厂模式/build /root/learnCppProgram/DesignPatternCpp/简单工厂模式/build /root/learnCppProgram/DesignPatternCpp/简单工厂模式/build/CMakeFiles/simple_factory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_factory.dir/depend

