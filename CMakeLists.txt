cmake_minimum_required(VERSION 3.13)
project(revenant VERSION 0.1)

configure_file(src/config.h.in src/config.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(revenant src/main.cpp src/game/Game.cpp src/game/Game.h)

target_include_directories(revenant PUBLIC "${PROJECT_BINARY_DIR}/src")
