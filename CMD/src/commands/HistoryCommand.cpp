#include "commands\HistoryCommand.h"

std::string HistoryCommand::Execute(const std::vector<std::string>& args)
{
    std::ostringstream oss;
    auto _history = history.GetHistory();
    for (size_t i = 0; i < _history.size(); ++i) {
        oss << i + 1 << ": " << _history[i]->GetName() << "\n";
    }
    return oss.str();
}
