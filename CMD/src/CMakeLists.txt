# Ajouter l'exécutable pour l'application principale
add_executable(cmd_app main.cpp)

# Inclure les répertoires
include_directories(${CMAKE_SOURCE_DIR}/src/cmd)
include_directories(${CMAKE_SOURCE_DIR}/src/commands)

# Ajouter les fichiers sources (seulement main.cpp ici)
target_sources(cmd_app PRIVATE main.cpp)

# Ajouter les fichiers d'en-tête pour l'IDE (optionnel)
target_include_directories(cmd_app PRIVATE
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
