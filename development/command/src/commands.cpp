#include "../include/commands.h"

void process_command(int argc, char *argv[])
{
    LocaleHelper localeHelper;

    std::string command = argv[1];
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
        build(argc, argv);
        break;
    case UNDEFINED:
        std::cout << localeHelper.get_locale_value("couldnt_found") << std::endl;
        break;
    default:
        std::cout << localeHelper.get_locale_value("couldnt_found") << std::endl;
        break;
    }
}
