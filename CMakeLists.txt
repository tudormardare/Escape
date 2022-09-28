cmake_minimum_required(VERSION 3.20)
project(Escape3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Escape main.cpp Class/Point.cpp Headers/Point.h)

set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML/include)
target_link_libraries(Escape sfml-system sfml-window sfml-graphics sfml-audio)
