cmake_minimum_required(VERSION 3.0)

project(Atelier_CMAKE)

# Définir les sources et l'exécutable
add_library(lib
    src/lib/calculator.c
)

# Spécifier les répertoires d'inclusion
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

# Ajouter l'exécutable
add_executable(calculator
    main.c
)

# Lier l'exécutable à la bibliothèque
target_link_libraries(calculator
    lib
)
