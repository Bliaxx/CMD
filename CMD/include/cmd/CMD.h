#ifndef CMD_H
#define CMD_H

#include "cmd\CommandManager.h"
#include "commands\EchoCommand.h"
#include "commands\DirCommand.h"
#include "commands\CdCommand.h"
#include "commands\ClsCommand.h"
#include "commands\HelpCommand.h"
#include "commands\HistoryCommand.h"
#include <iostream>
#include <sstream>

class CMD
{
private:
    CommandManager commandManager;
    CommandHistory commandHistory;

public:
    CMD();

private:
    std::string ProcessInput(const std::string& input);
    std::vector<std::string> Tokenize(const std::string& str) const;

public:
    void Run();
};

#endif
