#include "../include/help.h"

void help()
{
    std::cout << std::endl;

    for (int i = 0; i < COMMAND_COUNT; ++i)
    {
        Command cmd = static_cast<Command>(i);
        std::string command = command_to_string(cmd);

        std::string lower_command = command;
        std::transform(lower_command.begin(), lower_command.end(), lower_command.begin(),
                       [](unsigned char c) { return std::tolower(c); });

        if (lower_command != "help" && lower_command != "undefined")
        {
            if (lower_command == "build")
            {
                std::string flag_list = " [ \"--debug\", \"--run\" ]";
                lower_command += flag_list;
            }

            std::cout << "- " << lower_command << std::endl;
        }
    }

    std::cout << std::endl;

    return;
}
