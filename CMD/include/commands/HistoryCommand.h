#ifndef HISTORYCOMMAND_H
#define HISTORYCOMMAND_H

#include "cmd\CommandHistory.h"
#include "commands\ICommand.h"
#include <sstream>

class HistoryCommand : public ICommand {

private:
    CommandHistory& history;

public:
    HistoryCommand(CommandHistory& history) : history(history) {}

public:
    std::string Execute(const std::vector<std::string>& args) override;

    inline std::string GetName() const override {return "history";}
    inline std::string GetDescription() const override { return "Show command history"; }
};

#endif
