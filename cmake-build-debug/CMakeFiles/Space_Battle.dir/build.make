# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/jose/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.8109.222/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/jose/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.8109.222/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Desktop/TEC/CE2103/space-battle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Space_Battle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Space_Battle.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Space_Battle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Space_Battle.dir/flags.make

CMakeFiles/Space_Battle.dir/src/main.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/main.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/main.cpp
CMakeFiles/Space_Battle.dir/src/main.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Space_Battle.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/main.cpp.o -MF CMakeFiles/Space_Battle.dir/src/main.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/main.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/main.cpp

CMakeFiles/Space_Battle.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/main.cpp > CMakeFiles/Space_Battle.dir/src/main.cpp.i

CMakeFiles/Space_Battle.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/main.cpp -o CMakeFiles/Space_Battle.dir/src/main.cpp.s

CMakeFiles/Space_Battle.dir/src/Player.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Player.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Player.cpp
CMakeFiles/Space_Battle.dir/src/Player.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Space_Battle.dir/src/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Player.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Player.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Player.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Player.cpp

CMakeFiles/Space_Battle.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Player.cpp > CMakeFiles/Space_Battle.dir/src/Player.cpp.i

CMakeFiles/Space_Battle.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Player.cpp -o CMakeFiles/Space_Battle.dir/src/Player.cpp.s

CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/PlayState.cpp
CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o -MF CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/PlayState.cpp

CMakeFiles/Space_Battle.dir/src/PlayState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/PlayState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/PlayState.cpp > CMakeFiles/Space_Battle.dir/src/PlayState.cpp.i

CMakeFiles/Space_Battle.dir/src/PlayState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/PlayState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/PlayState.cpp -o CMakeFiles/Space_Battle.dir/src/PlayState.cpp.s

CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/LinkedList.cpp
CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o -MF CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/LinkedList.cpp

CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/LinkedList.cpp > CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.i

CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/LinkedList.cpp -o CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.s

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy.cpp
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy.cpp

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy.cpp > CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.i

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy.cpp -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.s

CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/Node.cpp
CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o -MF CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/Node.cpp

CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/Node.cpp > CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.i

CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/DataStructures/Node.cpp -o CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.s

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_1.cpp
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_1.cpp

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_1.cpp > CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.i

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_1.cpp -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.s

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_2.cpp
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_2.cpp

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_2.cpp > CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.i

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_2.cpp -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.s

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_3.cpp
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_3.cpp

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_3.cpp > CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.i

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_3.cpp -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.s

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_4.cpp
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_4.cpp

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_4.cpp > CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.i

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_4.cpp -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.s

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o: CMakeFiles/Space_Battle.dir/flags.make
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o: /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_5.cpp
CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o: CMakeFiles/Space_Battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o -MF CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o.d -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o -c /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_5.cpp

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_5.cpp > CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.i

CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/space-battle/src/Enemies/Enemy_5.cpp -o CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.s

# Object files for target Space_Battle
Space_Battle_OBJECTS = \
"CMakeFiles/Space_Battle.dir/src/main.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Player.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o" \
"CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o"

# External object files for target Space_Battle
Space_Battle_EXTERNAL_OBJECTS =

Space_Battle: CMakeFiles/Space_Battle.dir/src/main.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Player.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/PlayState.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/DataStructures/LinkedList.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Enemies/Enemy.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/DataStructures/Node.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_1.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_2.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_3.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_4.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/src/Enemies/Enemy_5.cpp.o
Space_Battle: CMakeFiles/Space_Battle.dir/build.make
Space_Battle: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
Space_Battle: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
Space_Battle: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
Space_Battle: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
Space_Battle: CMakeFiles/Space_Battle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Space_Battle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Space_Battle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Space_Battle.dir/build: Space_Battle
.PHONY : CMakeFiles/Space_Battle.dir/build

CMakeFiles/Space_Battle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Space_Battle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Space_Battle.dir/clean

CMakeFiles/Space_Battle.dir/depend:
	cd /home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/TEC/CE2103/space-battle /home/jose/Desktop/TEC/CE2103/space-battle /home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug /home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug /home/jose/Desktop/TEC/CE2103/space-battle/cmake-build-debug/CMakeFiles/Space_Battle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Space_Battle.dir/depend

