#ifndef COMMAND_TYPE_ENUM_H
#define COMMAND_TYPE_ENUM_H

#include <iostream>

enum Command
{
    HELP,
    CREATE_PROJECT,
    BUILD,
    BUILD_AND_RUN,
    BUILD_DEBUG,
    BUILD_DEBUG_AND_RUN,
    UNDEFINED,
    COMMAND_COUNT,
};

Command get_command_type(std::string &command);
std::string command_to_string(Command cmd);

#endif // COMMAND_TYPE_ENUM_H
