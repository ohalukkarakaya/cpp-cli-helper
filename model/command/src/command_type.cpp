#include "../include/command_type.h"

Command get_command_type(std::string &command)
{
    std::transform(command.begin(), command.end(), command.begin(), [](unsigned char c) { return std::toupper(c); });

    if (command == "HELP")
        return HELP;
    if (command == "CREATE_PROJECT")
        return CREATE_PROJECT;
    if (command == "BUILD")
        return BUILD;

    return UNDEFINED;
}

std::string command_to_string(Command cmd)
{
    switch (cmd)
    {
    case HELP:
        return "HELP";
    case CREATE_PROJECT:
        return "CREATE_PROJECT";
    case BUILD:
        return "BUILD";
    default:
        return "UNDEFINED";
    }

    return "UNDEFINED";
}
