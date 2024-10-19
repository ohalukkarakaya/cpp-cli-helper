#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

#include "../../../model/command/include/command_type.h"
#include "../../locale/include/locale.h"

#include "../../commands/build/include/build.h"
#include "../../commands/create_project/include/create_project.h"
#include "../../commands/help/include/help.h"

void process_command(int argc, char *argv[]);

#endif // COMMAND_H
