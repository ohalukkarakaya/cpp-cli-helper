cmake_minimum_required(VERSION 3.27)
project(cpp_help)

set(CMAKE_CXX_STANDARD 17)

file(COPY ${CMAKE_SOURCE_DIR}/utils/template_project
     DESTINATION ${CMAKE_BINARY_DIR}/)

add_executable(
  cpp_help 

  main.cpp

  model/command/include/command_type.h
  model/command/src/command_type.cpp

  development/locale/include/locale.h
  development/locale/src/locale.cpp

  development/locale/include/load_en_static_texts.h
  development/locale/src/load_en_static_texts.cpp

  development/locale/include/load_tr_static_texts.h
  development/locale/src/load_tr_static_texts.cpp

  development/command/include/commands.h
  development/command/src/commands.cpp

  development/commands/help/include/help.h
  development/commands/help/src/help.cpp

  development/commands/create_project/include/create_project.h
  development/commands/create_project/src/create_project.cpp

  development/commands/create_project/copy_template_project/include/copy_template_project.h
  development/commands/create_project/copy_template_project/src/copy_template_project.cpp

  development/commands/create_project/update_cmake_project_name/include/update_cmake_project_name.h
  development/commands/create_project/update_cmake_project_name/src/update_cmake_project_name.cpp
)

install(DIRECTORY utils/template_project/ DESTINATION ./)

