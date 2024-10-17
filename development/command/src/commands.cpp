#include "../include/commands.h"

void process_command(std::string command)
{

    Command cmd = get_command_type(command);

    switch (cmd)
    {
    case HELP:
        help();
        break;
    case CREATE_PROJECT:
        create_project();
        break;
    case BUILD:
        std::cout << "Build" << std::endl;
        break;
    case BUILD_AND_RUN:
        std::cout << "Build and run" << std::endl;
        break;
    case BUILD_DEBUG:
        std::cout << "Build Debug" << std::endl;
        break;
    case BUILD_DEBUG_AND_RUN:
        std::cout << "Build debug and run" << std::endl;
        break;
    case UNDEFINED:
        std::cout << "Undefined Command" << std::endl;
        break;
    default:
        std::cout << "Undefined Command" << std::endl;
        break;
    }
}
