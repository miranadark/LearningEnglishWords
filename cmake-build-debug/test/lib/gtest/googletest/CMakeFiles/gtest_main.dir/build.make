# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\User Files\Sibsutis\Trpo\LearningEnglishWords"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"

# Include any dependencies generated for this target.
include test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\depend.make

# Include the progress variables for this target.
include test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\progress.make

# Include the compile flags for this target's objects.
include test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\flags.make

test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj: test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\flags.make
test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj: ..\test\lib\gtest\googletest\src\gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/lib/gtest/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj"
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\gtest_main.dir\src\gtest_main.cc.obj /Fd..\..\..\..\bin\gtest_maind.pdb /FS -c "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\test\lib\gtest\googletest\src\gtest_main.cc"
<<
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"

test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\src\gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\gtest_main.dir\src\gtest_main.cc.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\test\lib\gtest\googletest\src\gtest_main.cc"
<<
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"

test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\src\gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\gtest_main.dir\src\gtest_main.cc.s /c "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\test\lib\gtest\googletest\src\gtest_main.cc"
<<
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib\gtest_maind.lib: test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\src\gtest_main.cc.obj
lib\gtest_maind.lib: test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\build.make
lib\gtest_maind.lib: test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\..\lib\gtest_maind.lib"
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest"
	$(CMAKE_COMMAND) -P CMakeFiles\gtest_main.dir\cmake_clean_target.cmake
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\link.exe /lib /nologo /machine:X86 /out:..\..\..\..\lib\gtest_maind.lib @CMakeFiles\gtest_main.dir\objects1.rsp 
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"

# Rule to build all files generated by this target.
test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\build: lib\gtest_maind.lib

.PHONY : test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\build

test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\clean:
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest"
	$(CMAKE_COMMAND) -P CMakeFiles\gtest_main.dir\cmake_clean.cmake
	cd "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug"
.PHONY : test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\clean

test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\User Files\Sibsutis\Trpo\LearningEnglishWords" "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\test\lib\gtest\googletest" "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug" "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest" "D:\User Files\Sibsutis\Trpo\LearningEnglishWords\cmake-build-debug\test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : test\lib\gtest\googletest\CMakeFiles\gtest_main.dir\depend

