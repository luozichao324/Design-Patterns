#include "def.h"
#include "Command.h"

int main(char* argv[], int& argc)
{
    Command command;
    command.init();
    command.makeBackup();
    command.restore();
    return 0;
}