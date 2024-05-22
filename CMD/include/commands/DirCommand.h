#ifndef DIRCOMMAND_H
#define DIRCOMMAND_H

#include "commands\ICommand.h"
#include <filesystem>
#include <sstream>

namespace fs = std::filesystem;

class DirCommand : public ICommand {
public:
    std::string Execute(const std::vector<std::string>& args) override;

    inline std::string GetName() const override { return "dir"; }
    inline std::string GetDescription() const override { return "List files in the specified directory or current directory"; }
};

#endif
