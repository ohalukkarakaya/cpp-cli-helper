#include "../include/build.h"
#include <ostream>

void build(int argc, char *argv[])
{

    LocaleHelper localeHelper;

    bool areThereFlags = argc > 2;
    bool isDebug = false;
    bool shouldRun = false;

    std::string given_command = argv[1];
    Command cmd = get_command_type(given_command);

    if (!std::filesystem::exists("CMakeLists.txt"))
    {
        std::cerr << "\"CMakeLists.txt\" " << localeHelper.get_locale_value("couldnt_found") << std::endl;
        return;
    }

    // catch -- flags
    if (areThereFlags)
    {
        for (int i = 2; i < argc; ++i)
        {
            std::string arg = argv[i];
            if (arg.rfind("--", 0) == 0)
            {                    // If the argument starts with "--"
                                 // Remove "--" and convert all letters to lower case
                arg.erase(0, 2); // Remove first two characters
                std::transform(arg.begin(), arg.end(), arg.begin(), [](unsigned char c) {
                    return std::tolower(c); // Convert to lower case
                });

                // is debug
                if (arg == "debug")
                {
                    isDebug = true;
                }

                if (arg == "run")
                {
                    shouldRun = true;
                }
            }
        }
    }

    // mkdir build
    if (!std::filesystem::exists("build"))
    {
        std::system(MKDIR_COMMAND);
    }

    // cd build and run commands
    std::stringstream command_stream_build;
    command_stream_build << CHANGE_DIR_COMMAND << " && " << CMAKE_BUILD_COMMAND;

    std::string build_command = command_stream_build.str();

    if (isDebug)
    {
        build_command += " -DCMAKE_BUILD_TYPE=Debug"; // Add debug mode
    }

    std::stringstream command_stream;
    command_stream << build_command << " && " << MAKE_COMMAND;
    std::string command = command_stream.str();

    int result = std::system(command.c_str());
    if (result != 0)
    {
        std::cerr << localeHelper.get_locale_value("terminal_err") << result << std::endl;
    }
    else
    {
        std::cout << localeHelper.get_locale_value("project_builded_succesfully") << std::endl;
    }

    if (shouldRun)
    {
        std::string program_path;
        // Automatically find and run compiled program in build folder
        for (const auto &entry : std::filesystem::directory_iterator("build"))
        {
            if (entry.is_regular_file() &&
                (entry.path().extension() == ".exe" ||
                 entry.path().extension() == "")) // .exe extension for Windows, extension control for others
            {
                program_path = entry.path().string();
                break; // Get the first program found
            }
        }

        if (program_path.empty())
        {
            std::cout << localeHelper.get_locale_value("program_not_found") << std::endl;
            return;
        }
        if (!std::filesystem::exists(program_path))
        {
            std::cerr << localeHelper.get_locale_value("program_not_found") << ": " << program_path << std::endl;
            return;
        }

        std::cout << localeHelper.get_locale_value("program_running") << program_path << std::endl;
        std::string command = program_path;
        int result = std::system(command.c_str());

        if (result != 0)
        {
            std::cerr << localeHelper.get_locale_value("program_running_err") << result << std::endl;
            return;
        }
    }
}
