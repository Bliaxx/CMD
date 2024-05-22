#ifndef CLSCOMMAND_H
#define CLSCOMMAND_H

#include "commands\ICommand.h"
#include <string>

class ClsCommand : public ICommand {
public:
    std::string Execute(const std::vector<std::string>& args) override;

    inline std::string GetName() const override {return "cls";}
    inline std::string GetDescription() const override { return "Clear the screen"; }

private:
    void ClearScreen() const;
};

#endif
