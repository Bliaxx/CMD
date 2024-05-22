#include "commands\EchoCommand.h"

std::string EchoCommand::Execute(const std::vector<std::string>& args)
{
    std::string result;
    for (const auto& arg : args) {
        result += arg + " ";
    }
    return result;
}
