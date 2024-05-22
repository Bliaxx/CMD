# Add the executable for the main application
add_executable(cmd_app main.cpp)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/src/cmd)
include_directories(${CMAKE_SOURCE_DIR}/src/commands)

# Add source files
target_sources(cmd_app PRIVATE
    cmd/CMD.h
    cmd/CommandManager.h
    cmd/CommandHistory.h
    commands/Command.h
    commands/EchoCommand.h
    commands/DirCommand.h
    commands/CdCommand.h
    commands/ClsCommand.h
    commands/HelpCommand.h
    commands/ExitCommand.h
    commands/HistoryCommand.h
)
