# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/sebastian/Documents/C-Make/codigo_peru

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebastian/Documents/C-Make/c_make_clasificacion_peru

# Include any dependencies generated for this target.
include CMakeFiles/clasificacion_peru.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clasificacion_peru.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clasificacion_peru.dir/flags.make

CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o: CMakeFiles/clasificacion_peru.dir/flags.make
CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o: /home/sebastian/Documents/C-Make/codigo_peru/probabilidad_peru.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastian/Documents/C-Make/c_make_clasificacion_peru/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o -c /home/sebastian/Documents/C-Make/codigo_peru/probabilidad_peru.cpp

CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastian/Documents/C-Make/codigo_peru/probabilidad_peru.cpp > CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.i

CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastian/Documents/C-Make/codigo_peru/probabilidad_peru.cpp -o CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.s

CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.requires:

.PHONY : CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.requires

CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.provides: CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.requires
	$(MAKE) -f CMakeFiles/clasificacion_peru.dir/build.make CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.provides.build
.PHONY : CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.provides

CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.provides.build: CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o


# Object files for target clasificacion_peru
clasificacion_peru_OBJECTS = \
"CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o"

# External object files for target clasificacion_peru
clasificacion_peru_EXTERNAL_OBJECTS =

clasificacion_peru: CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o
clasificacion_peru: CMakeFiles/clasificacion_peru.dir/build.make
clasificacion_peru: CMakeFiles/clasificacion_peru.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebastian/Documents/C-Make/c_make_clasificacion_peru/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable clasificacion_peru"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clasificacion_peru.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clasificacion_peru.dir/build: clasificacion_peru

.PHONY : CMakeFiles/clasificacion_peru.dir/build

CMakeFiles/clasificacion_peru.dir/requires: CMakeFiles/clasificacion_peru.dir/probabilidad_peru.cpp.o.requires

.PHONY : CMakeFiles/clasificacion_peru.dir/requires

CMakeFiles/clasificacion_peru.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clasificacion_peru.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clasificacion_peru.dir/clean

CMakeFiles/clasificacion_peru.dir/depend:
	cd /home/sebastian/Documents/C-Make/c_make_clasificacion_peru && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebastian/Documents/C-Make/codigo_peru /home/sebastian/Documents/C-Make/codigo_peru /home/sebastian/Documents/C-Make/c_make_clasificacion_peru /home/sebastian/Documents/C-Make/c_make_clasificacion_peru /home/sebastian/Documents/C-Make/c_make_clasificacion_peru/CMakeFiles/clasificacion_peru.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clasificacion_peru.dir/depend

