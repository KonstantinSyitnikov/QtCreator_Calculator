# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/username/Документы/CPlusPlus/CalculatorQtCr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/username/Документы/CPlusPlus/CalculatorQtCr/build

# Include any dependencies generated for this target.
include CMakeFiles/CalculatorQtCr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CalculatorQtCr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CalculatorQtCr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CalculatorQtCr.dir/flags.make

CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o: CMakeFiles/CalculatorQtCr.dir/flags.make
CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o: CalculatorQtCr_autogen/mocs_compilation.cpp
CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o: CMakeFiles/CalculatorQtCr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/username/Документы/CPlusPlus/CalculatorQtCr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o -MF CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o -c /home/username/Документы/CPlusPlus/CalculatorQtCr/build/CalculatorQtCr_autogen/mocs_compilation.cpp

CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/username/Документы/CPlusPlus/CalculatorQtCr/build/CalculatorQtCr_autogen/mocs_compilation.cpp > CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.i

CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/username/Документы/CPlusPlus/CalculatorQtCr/build/CalculatorQtCr_autogen/mocs_compilation.cpp -o CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.s

CMakeFiles/CalculatorQtCr.dir/main.cpp.o: CMakeFiles/CalculatorQtCr.dir/flags.make
CMakeFiles/CalculatorQtCr.dir/main.cpp.o: /home/username/Документы/CPlusPlus/CalculatorQtCr/main.cpp
CMakeFiles/CalculatorQtCr.dir/main.cpp.o: CMakeFiles/CalculatorQtCr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/username/Документы/CPlusPlus/CalculatorQtCr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CalculatorQtCr.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CalculatorQtCr.dir/main.cpp.o -MF CMakeFiles/CalculatorQtCr.dir/main.cpp.o.d -o CMakeFiles/CalculatorQtCr.dir/main.cpp.o -c /home/username/Документы/CPlusPlus/CalculatorQtCr/main.cpp

CMakeFiles/CalculatorQtCr.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CalculatorQtCr.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/username/Документы/CPlusPlus/CalculatorQtCr/main.cpp > CMakeFiles/CalculatorQtCr.dir/main.cpp.i

CMakeFiles/CalculatorQtCr.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CalculatorQtCr.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/username/Документы/CPlusPlus/CalculatorQtCr/main.cpp -o CMakeFiles/CalculatorQtCr.dir/main.cpp.s

CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o: CMakeFiles/CalculatorQtCr.dir/flags.make
CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o: /home/username/Документы/CPlusPlus/CalculatorQtCr/mainwindow.cpp
CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o: CMakeFiles/CalculatorQtCr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/username/Документы/CPlusPlus/CalculatorQtCr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o -MF CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o.d -o CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o -c /home/username/Документы/CPlusPlus/CalculatorQtCr/mainwindow.cpp

CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/username/Документы/CPlusPlus/CalculatorQtCr/mainwindow.cpp > CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.i

CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/username/Документы/CPlusPlus/CalculatorQtCr/mainwindow.cpp -o CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.s

# Object files for target CalculatorQtCr
CalculatorQtCr_OBJECTS = \
"CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/CalculatorQtCr.dir/main.cpp.o" \
"CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o"

# External object files for target CalculatorQtCr
CalculatorQtCr_EXTERNAL_OBJECTS =

CalculatorQtCr: CMakeFiles/CalculatorQtCr.dir/CalculatorQtCr_autogen/mocs_compilation.cpp.o
CalculatorQtCr: CMakeFiles/CalculatorQtCr.dir/main.cpp.o
CalculatorQtCr: CMakeFiles/CalculatorQtCr.dir/mainwindow.cpp.o
CalculatorQtCr: CMakeFiles/CalculatorQtCr.dir/build.make
CalculatorQtCr: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.10
CalculatorQtCr: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.10
CalculatorQtCr: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.10
CalculatorQtCr: CMakeFiles/CalculatorQtCr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/username/Документы/CPlusPlus/CalculatorQtCr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CalculatorQtCr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CalculatorQtCr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CalculatorQtCr.dir/build: CalculatorQtCr
.PHONY : CMakeFiles/CalculatorQtCr.dir/build

CMakeFiles/CalculatorQtCr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CalculatorQtCr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CalculatorQtCr.dir/clean

CMakeFiles/CalculatorQtCr.dir/depend:
	cd /home/username/Документы/CPlusPlus/CalculatorQtCr/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/username/Документы/CPlusPlus/CalculatorQtCr /home/username/Документы/CPlusPlus/CalculatorQtCr /home/username/Документы/CPlusPlus/CalculatorQtCr/build /home/username/Документы/CPlusPlus/CalculatorQtCr/build /home/username/Документы/CPlusPlus/CalculatorQtCr/build/CMakeFiles/CalculatorQtCr.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CalculatorQtCr.dir/depend

