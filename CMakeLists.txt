cmake_minimum_required(VERSION 3.27)
project(cpp_help)

set(CMAKE_CXX_STANDARD 17)

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
)
