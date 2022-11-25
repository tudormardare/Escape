cmake_minimum_required(VERSION 3.20)
project(Escape)

set(CMAKE_CXX_STANDARD 14)

add_executable(Escape main.cpp)

add_subdirectory(Test)

set(SOURCE_FILES main.cpp Class/Hero.cpp Class/Hero.h Class/Weapon.cpp Class/Weapon.h Class/Bullet.cpp Class/Bullet.h Class/MySprite.cpp Class/MySprite.h Class/Map.cpp Class/Map.h Class/Game.cpp Class/Game.h Class/FileReader.cpp Class/FileReader.h)
add_executable(EscapeExe main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Escape core)

set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML/include)
target_link_libraries(Escape sfml-system sfml-window sfml-graphics sfml-audio)
