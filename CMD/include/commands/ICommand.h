#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

class ICommand {
public:
    virtual ~ICommand() = default;
    virtual std::string Execute(const std::vector<std::string>& args) = 0;
    virtual std::string GetName() const = 0;
    virtual std::string GetDescription() const = 0;
};

#endif
