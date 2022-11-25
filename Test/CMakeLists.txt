cmake_minimum_required(VERSION 3.12)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp HeroTests.cpp ../Class/Hero.cpp ../Class/Hero.h ../Class/Weapon.cpp ../Class/Weapon.h ../Class/Bullet.h ../Class/Bullet.cpp WeaponTests.cpp MapTest.cpp ../Class/MySprite.h GameTest.cpp ../Class/Map.h ../Class/Map.cpp ../Class/FileReader.h ../Class/FileReader.cpp FileReaderTests.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main core)

# Detect and add SFML - to read FindSFML.cmake file
set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/SFML/include)

target_link_libraries(runAllTests sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
