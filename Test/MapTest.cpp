//
// Created by tudor on 25/10/2022.
//
#include <gtest/gtest.h>
#include "../Class/Map.h"

TEST(Map, constructor){
    Map map( 2);
    EXPECT_EQ(map.getId(), 2);
}
