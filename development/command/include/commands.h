#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

#include "../../../model/command/include/command_type.h"

#include "../../commands/create_project/include/create_project.h"
#include "../../commands/help/include/help.h"

void process_command(std::string command);

#endif // COMMAND_H
