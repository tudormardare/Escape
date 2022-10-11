cmake_minimum_required(VERSION 3.20)
project(Escape)

set(CMAKE_CXX_STANDARD 14)

add_executable(Escape main.cpp ./Class/Point.cpp ./Headers/Point.h ./Headers/Sprite.h ./Class/Sprite.cpp ./Class/Saw.cpp ./Headers/Saw.h ./Class/Map.cpp ./Headers/Map.h Class/Hero.cpp Headers/Hero.h)

add_subdirectory(Test)

set(SOURCE_FILES ./Class/Point.cpp ./Headers/Point.h ./Headers/Sprite.h ./Class/Sprite.cpp ./Class/Saw.cpp ./Headers/Saw.h ./Class/Map.cpp ./Headers/Map.h Class/Hero.cpp Headers/Hero.h Class/ArmedSprite.cpp Headers/ArmedSprite.h Class/Weapon.cpp Headers/Weapon.h Class/Bullet.cpp Headers/Bullet.h)
add_executable(EscapeExe main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Escape core)

set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML/include)
target_link_libraries(Escape sfml-system sfml-window sfml-graphics sfml-audio)
