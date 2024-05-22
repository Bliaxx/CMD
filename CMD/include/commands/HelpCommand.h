#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H

#include "commands\ICommand.h"
#include "cmd\CommandManager.h"
#include <sstream>
#include <unordered_map>

class HelpCommand : public ICommand
{

private:
    CommandManager& commandManager;

public:
    HelpCommand(CommandManager& manager) : commandManager(manager) {}

public:
    std::string Execute(const std::vector<std::string>& args) override;

    inline std::string GetName() const override { return "help"; }
    inline std::string GetDescription() const override { return "Show this help message"; }
};

#endif
