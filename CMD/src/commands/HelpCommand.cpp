#include "commands\HelpCommand.h"

std::string HelpCommand::Execute(const std::vector<std::string>& args)
{
    std::ostringstream oss;
    oss << "Available commands:\n";

    for (const auto& command : commandManager.GetCommandsList()) {
        oss << command.second->GetName() << " - " << command.second->GetDescription() << "\n";
    }

    return oss.str();
}
