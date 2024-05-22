#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H

#include "commands\ICommand.h"
#include <unordered_map>
#include <memory>

class CommandManager
{
private:
    std::unordered_map<std::string, std::shared_ptr<ICommand>> commands;

public:
    inline void RegisterCommand(std::shared_ptr<ICommand> command) {commands[command->GetName()] = command;}

    std::string ExecuteCommand(const std::string& name, const std::vector<std::string>& args);

    inline std::shared_ptr<ICommand> GetCommands(const std::string& _nameCommand) const { return commands.find(_nameCommand)->second; }
    inline std::unordered_map<std::string, std::shared_ptr<ICommand>>& GetCommandsList() { return commands; }
};

#endif
