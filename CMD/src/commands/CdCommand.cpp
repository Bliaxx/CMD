#include "commands\CdCommand.h"

std::string CdCommand::Execute(const std::vector<std::string>& args)
{
    std::ostringstream oss;
    if (args.empty()) {
        return "No directory specified.\n";
    }

    fs::path dir = args[0];

    try {
        fs::current_path(dir);
        oss << "Changed directory to " << fs::current_path() << "\n";
    }
    catch (const fs::filesystem_error& e) {
        oss << "Error: " << e.what() << "\n";
    }

    return oss.str();
}
