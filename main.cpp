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
    process_command(argc, argv);

    return 0;
}
