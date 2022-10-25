//
// Created by tudor on 12/10/2022.
//
#include <gtest/gtest.h>
#include <SFML/Graphics.hpp>
#include "../Class/Weapon.h"
#include "../Class/Hero.h"


TEST(Hero, constructor){
    Weapon weapon;
    sf::Vector2f pos (0,0);
    Hero hero(weapon, pos);
    EXPECT_EQ(hero.getHp(), 3);
}