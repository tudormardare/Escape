
#include "gtest/gtest.h"
#include "../Headers/Point.h"

TEST(Point, setX){
    Point p;
    float x = 5.f;
    p.setX(x);
    ASSERT_EQ(p.getX(),x);

}