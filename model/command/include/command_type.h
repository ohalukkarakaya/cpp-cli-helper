#ifndef COMMAND_TYPE_ENUM_H
#define COMMAND_TYPE_ENUM_H

#include <iostream>

enum Command
{
    CREATE_PROJECT,
    BUILD,
    BUILD_AND_RUN,
    BUILD_DEBUG,
    BUILD_DEBUG_AND_RUN,
    UNDEFINED,
};

Command get_command_type(std::string &command);

#endif // COMMAND_TYPE_ENUM_H
