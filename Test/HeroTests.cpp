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

TEST(HERO, move){
    Weapon weapon;
    sf::Vector2f pos (0,0);
    Hero hero(weapon, pos);
    hero.move(10, 10);
    EXPECT_EQ(hero.getPositionX(), 10 * hero.HERO_SPEED);
    EXPECT_EQ(hero.getPositionY(), 10 * hero.HERO_SPEED);
}