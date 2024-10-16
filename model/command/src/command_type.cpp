#include "../include/command_type.h"

Command get_command_type(std::string &command)
{
    std::transform(command.begin(), command.end(), command.begin(), [](unsigned char c) { return std::toupper(c); });

    if (command == "CREATE_PROJECT")
        return CREATE_PROJECT;
    if (command == "BUILD")
        return BUILD;
    if (command == "BUILD_AND_RUN")
        return BUILD_AND_RUN;
    if (command == "BUILD_DEBUG")
        return BUILD_DEBUG;
    if (command == "BUILD_DEBUG_AND_RUN")
        return BUILD_DEBUG_AND_RUN;

    return UNDEFINED;
}
