#include "../include/create_project.h"
#include <clocale>

void create_project()
{
    LocaleHelper localHelper;

    // Prepare required data
    std::string ask_project_name_label = localHelper.get_locale_value("ask_for_project_name");
    std::cout << ask_project_name_label;

    std::string project_name;
    std::getline(std::cin, project_name);

    std::string source_path = "../template_project";
    std::filesystem::path current_path = std::filesystem::current_path();

    // Main Logic
    copy_template_project(source_path, current_path);
    update_cmake_project_name(current_path, project_name);

    // Log success message
    std::cout << localHelper.get_locale_value("projec_created_succesfully") << std::endl;
}
