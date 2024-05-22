#include <iostream>
#include "cmd\CMD.h"

CMD::CMD()
{
    commandManager.RegisterCommand(std::make_shared<EchoCommand>());
    commandManager.RegisterCommand(std::make_shared<DirCommand>());
    commandManager.RegisterCommand(std::make_shared<CdCommand>());
    commandManager.RegisterCommand(std::make_shared<ClsCommand>());
    commandManager.RegisterCommand(std::make_shared<HelpCommand>(commandManager));
    commandManager.RegisterCommand(std::make_shared<HistoryCommand>(commandHistory));

}

std::string CMD::ProcessInput(const std::string& input)
{
    auto tokens = Tokenize(input);
    if (tokens.empty()) return "";

    const std::string commandName = tokens.front();
    commandHistory.AddToHistory(commandManager.GetCommands(commandName));
    tokens.erase(tokens.begin());

    try {
        return commandManager.ExecuteCommand(commandName, tokens);
    }
    catch (const std::runtime_error& e) {
        return std::string("Error: ") + e.what();
    }
    catch (const std::exception& e) {
        return std::string("An unexpected error occurred: ") + e.what();
    }
    catch (...) {
        return "An unknown error occurred.";
    }
}

std::vector<std::string> CMD::Tokenize(const std::string& str) const
{
    std::istringstream iss(str);
    return { std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };
}

void CMD::Run()
{
    std::string input;
    while (true) {
        std::cout << "cmd> ";
        std::getline(std::cin, input);
        if (input.empty()) continue;
        std::cout << ProcessInput(input) << std::endl;
    }
}
