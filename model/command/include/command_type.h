#ifndef COMMAND_TYPE_ENUM_H
#define COMMAND_TYPE_ENUM_H

#include <iostream>

enum Command
{
    HELP,
    CREATE_PROJECT,
    BUILD,
    UNDEFINED,
    COMMAND_COUNT,
};

Command get_command_type(std::string &command);
std::string command_to_string(Command cmd);

#endif // COMMAND_TYPE_ENUM_H
