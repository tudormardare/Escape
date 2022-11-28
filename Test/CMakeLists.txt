cmake_minimum_required(VERSION 3.12)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp HeroTests.cpp ../Class/Game.cpp ../Class/Hero.cpp  ../Class/Weapon.cpp   ../Class/Bullet.cpp WeaponTests.cpp MapTest.cpp  GameTest.cpp  ../Class/Map.cpp  ../Class/FileReader.cpp FileReaderTests.cpp  ../Class/Menu.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main )

# Detect and add SFML - to read FindSFML.cmake file
set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML/include)

target_link_libraries(runAllTests sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
