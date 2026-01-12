cmake_minimum_required(VERSION 3.16)

project(sfml_project
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML installed via apt
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(main
    src/main.cpp
)

target_link_libraries(main
    sfml-graphics
    sfml-window
    sfml-system
)

# Optional: better warnings
target_compile_options(main PRIVATE -Wall -Wextra -Wpedantic)
