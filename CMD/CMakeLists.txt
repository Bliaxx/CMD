cmake_minimum_required(VERSION 3.10)

# Définir le nom du projet
project(CMD_Project)

# Spécifier le standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter le répertoire src
add_subdirectory(src)
