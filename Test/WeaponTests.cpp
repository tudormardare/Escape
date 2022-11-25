//
// Created by tudor on 25/10/2022.
//
#include <gtest/gtest.h>
#include <SFML/Graphics.hpp>
#include "../Class/Weapon.h"

TEST(Weapon, shoot){
    Weapon weapon(1);
    EXPECT_EQ(weapon.shoot(), true);
}
