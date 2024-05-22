#include "commands\DirCommand.h"

std::string DirCommand::Execute(const std::vector<std::string>& args)
{
    fs::path dir = fs::current_path();

    if (!args.empty()) {
        dir = args[0];
    }

    std::ostringstream oss;

    if (fs::exists(dir) && fs::is_directory(dir)) {
        for (const auto& entry : fs::directory_iterator(dir)) {
            oss << (entry.is_directory() ? "[DIR] " : "      ") << entry.path().filename().string() << "\n";
        }
    }
    else {
        oss << "The system cannot find the path specified.\n";
    }

    return oss.str();
}
