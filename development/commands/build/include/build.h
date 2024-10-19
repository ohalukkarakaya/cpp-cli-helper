#ifndef BUILD_H
#define BUILD_H

#include <filesystem>
#include <iostream>
#include <sstream>

#ifdef _WIN32
#include <cstdlib>
#define MKDIR_COMMAND "mkdir build"
#define CHANGE_DIR_COMMAND "cd build"
#define CMAKE_BUILD_COMMAND "cmake .."
#define MAKE_COMMAND "cmake --build ."

#else
#define MKDIR_COMMAND "mkdir -p build"
#define CHANGE_DIR_COMMAND "cd build"
#define CMAKE_BUILD_COMMAND "cmake .."
#define MAKE_COMMAND "make"
#endif

#include "../../../../model/command/include/command_type.h"
#include "../../../locale/include/locale.h"

void build(int argc, char *argv[]);

#endif // BUILD_H
