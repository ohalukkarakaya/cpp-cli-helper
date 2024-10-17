#include "../include/load_en_static_texts.h"

std::unordered_map<std::string, std::string> load_en_static_texts()
{
    std::unordered_map<std::string, std::string> en_texts;

    // Add Static Texts To Here
    en_texts["no_flag_found"] = "I can't help you without any command. Run me again with a command :)";
    en_texts["ask_for_project_name"] = "Enter Project Name: ";
    en_texts["error_copying_template_project"] = "Error copying template project: ";
    en_texts["projec_created_succesfully"] = "Project created succesfully";

    return en_texts;
}
