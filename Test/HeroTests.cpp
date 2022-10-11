//
// Created by tudor on 11/10/2022.
//

#include "gtest/gtest.h"
#include "../Headers/Hero.h"

TEST(Hero, constructor){
    Hero hero;
    int hp = 3;
    EXPECT_EQ(hero.getHp(), hp);
}

TEST(Hero, changeHP){
    Hero hero;
    int hp = 2;
    hero.changeHp(-1);
    EXPECT_EQ(hero.getHp(), hp);
}

TEST(Hero, shoot){
    Hero hero;
    EXPECT_EQ(hero.shoot(), true);
}