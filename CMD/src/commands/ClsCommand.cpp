#include "commands\ClsCommand.h"

std::string ClsCommand::Execute(const std::vector<std::string>& args)
{
	ClearScreen();
	return "";
}

void ClsCommand::ClearScreen() const
{
#ifdef _WIN32
        system("cls");
#else
        std::cout << "\033[2J\033[1;1H";
#endif
}
