#ifndef ECHOCOMMAND_H
#define ECHOCOMMAND_H

#include "commands\ICommand.h"

class EchoCommand : public ICommand {
public:
    std::string Execute(const std::vector<std::string>& args) override;

    inline std::string GetName() const override {return "echo";}
    inline std::string GetDescription() const override {return "Echo the input text";}
};

#endif

