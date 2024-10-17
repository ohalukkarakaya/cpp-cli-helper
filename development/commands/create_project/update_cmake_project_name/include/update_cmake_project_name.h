#ifndef UPDATE_CMAKE_PROJECT_NAME_H
#define UPDATE_CMAKE_PROJECT_NAME_H

#include <filesystem>
#include <fstream>
#include <iostream>

void update_cmake_project_name(const std::filesystem::path &cmakeFilePath, const std::string &projectName);

#endif
