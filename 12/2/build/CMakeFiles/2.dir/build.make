# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_SOURCE_DIR = D:\vscodeCode\cprimer\12\2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\vscodeCode\cprimer\12\2\build

# Include any dependencies generated for this target.
include CMakeFiles/2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2.dir/flags.make

CMakeFiles/2.dir/main.cpp.obj: CMakeFiles/2.dir/flags.make
CMakeFiles/2.dir/main.cpp.obj: D:/vscodeCode/cprimer/12/2/main.cpp
CMakeFiles/2.dir/main.cpp.obj: CMakeFiles/2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\vscodeCode\cprimer\12\2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2.dir/main.cpp.obj -MF CMakeFiles\2.dir\main.cpp.obj.d -o CMakeFiles\2.dir\main.cpp.obj -c D:\vscodeCode\cprimer\12\2\main.cpp

CMakeFiles/2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\vscodeCode\cprimer\12\2\main.cpp > CMakeFiles\2.dir\main.cpp.i

CMakeFiles/2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\vscodeCode\cprimer\12\2\main.cpp -o CMakeFiles\2.dir\main.cpp.s

CMakeFiles/2.dir/string1.cpp.obj: CMakeFiles/2.dir/flags.make
CMakeFiles/2.dir/string1.cpp.obj: D:/vscodeCode/cprimer/12/2/string1.cpp
CMakeFiles/2.dir/string1.cpp.obj: CMakeFiles/2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\vscodeCode\cprimer\12\2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/2.dir/string1.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/2.dir/string1.cpp.obj -MF CMakeFiles\2.dir\string1.cpp.obj.d -o CMakeFiles\2.dir\string1.cpp.obj -c D:\vscodeCode\cprimer\12\2\string1.cpp

CMakeFiles/2.dir/string1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2.dir/string1.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\vscodeCode\cprimer\12\2\string1.cpp > CMakeFiles\2.dir\string1.cpp.i

CMakeFiles/2.dir/string1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2.dir/string1.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\vscodeCode\cprimer\12\2\string1.cpp -o CMakeFiles\2.dir\string1.cpp.s

# Object files for target 2
2_OBJECTS = \
"CMakeFiles/2.dir/main.cpp.obj" \
"CMakeFiles/2.dir/string1.cpp.obj"

# External object files for target 2
2_EXTERNAL_OBJECTS =

2.exe: CMakeFiles/2.dir/main.cpp.obj
2.exe: CMakeFiles/2.dir/string1.cpp.obj
2.exe: CMakeFiles/2.dir/build.make
2.exe: CMakeFiles/2.dir/linkLibs.rsp
2.exe: CMakeFiles/2.dir/objects1.rsp
2.exe: CMakeFiles/2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\vscodeCode\cprimer\12\2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2.dir/build: 2.exe
.PHONY : CMakeFiles/2.dir/build

CMakeFiles/2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2.dir/clean

CMakeFiles/2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\vscodeCode\cprimer\12\2 D:\vscodeCode\cprimer\12\2 D:\vscodeCode\cprimer\12\2\build D:\vscodeCode\cprimer\12\2\build D:\vscodeCode\cprimer\12\2\build\CMakeFiles\2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2.dir/depend

