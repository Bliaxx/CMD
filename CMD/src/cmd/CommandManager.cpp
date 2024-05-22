#include "cmd\CommandManager.h"

std::string CommandManager::ExecuteCommand(const std::string& name, const std::vector<std::string>& args)
{
    auto it = commands.find(name);
    if (it != commands.end()) {
        return it->second->Execute(args);
    }
    else {
        return "Command not found";
    }
}
