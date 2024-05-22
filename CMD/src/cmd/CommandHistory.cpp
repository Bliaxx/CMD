#include "cmd\CommandHistory.h"

void CommandHistory::AddToHistory(std::shared_ptr<ICommand> command)
{
	history.push_back(command);
}
