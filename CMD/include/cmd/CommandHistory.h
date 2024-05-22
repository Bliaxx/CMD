#ifndef COMMANDHISTORY_H
#define COMMANDHISTORY_H

#include <vector>
#include <string>
#include <memory>
#include "commands\ICommand.h"

class CommandHistory
{
private:
    std::vector<std::shared_ptr<ICommand>> history;

public:
    void AddToHistory(std::shared_ptr<ICommand> command);

    inline std::vector<std::shared_ptr<ICommand>> GetHistory() const {return history;}
};

#endif
