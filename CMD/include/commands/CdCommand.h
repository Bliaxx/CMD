#ifndef CDCOMMAND_H
#define CDCOMMAND_H

#include "commands\ICommand.h"
#include <filesystem>
#include <sstream>
#include <stdexcept>

namespace fs = std::filesystem;

class CdCommand : public ICommand {
public:
    std::string Execute(const std::vector<std::string>& args) override;

    inline std::string GetName() const override {return "cd";}
    inline std::string GetDescription() const override { return "Change the current directory"; }
};

#endif
