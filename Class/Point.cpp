//
// Created by tudor on 28/09/2022.
//

#include "../Headers/Point.h"

Point::Point(float x, float y){
    setX(x);
    setY(y);
}
Point::Point() {
    x=0;
    y=0;
}

float Point::getX() const {
    return x;
}

void Point::setX(float x) {
    Point::x = x;
}

float Point::getY() const {
    return y;
}

void Point::setY(float y) {
    Point::y = y;
}

Point::~Point() {}

