#include "../include/load_en_static_texts.h"

std::unordered_map<std::string, std::string> load_en_static_texts()
{
    std::unordered_map<std::string, std::string> en_texts;

    // Add Static Texts To Here
    en_texts["no_flag_found"] = "I can't help you without any command. Run me again with a command :)";
    en_texts["ask_for_project_name"] = "Enter Project Name: ";
    en_texts["error_copying_template_project"] = "Error copying template project: ";
    en_texts["projec_created_succesfully"] = "Project created succesfully";
    en_texts["project_builded_succesfully"] = "Procekt builded succesfully";
    en_texts["couldnt_found"] = "Couldn't Found";
    en_texts["terminal_err"] = "Terminal Error: ";
    en_texts["program_not_found"] = "Program not found";
    en_texts["program_running"] = "Program Running: ";
    en_texts["program_running_err"] = "Program Running Error: ";
    en_texts["undefined_command"] = "Undefined Command";

    return en_texts;
}
