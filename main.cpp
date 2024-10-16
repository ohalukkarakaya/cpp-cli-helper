#include <iostream>
#include <string>

#include "development/command/include/commands.h"
#include "development/locale/include/locale.h"

int main(int argc, char *argv[])
{
    LocaleHelper localHelper;

    if (argc < 2)
    {
        std::cout << localHelper.get_locale_value("no_flag_found") << std::endl;
        return 1;
    }

    // Run Main Logic
    process_command(argv[1]);

    // std::string ask_project_name_label = localHelper.get_locale_value("ask_for_project_name");

    // std::cout << ask_project_name_label;

    // std::string project_name;
    // std::getline(std::cin, project_name);

    // std::cout << project_name << std::endl;

    return 0;
}
