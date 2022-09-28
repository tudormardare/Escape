#include "../Headers/Point.h"
#include "../Headers/Sprite.h"

//
// Created by tudor on 28/09/2022.
//

Sprite::Sprite(const Point &position, float speed) {
    setPosition(position);
    setSpeed(speed);
}
Sprite::Sprite() {
    Sprite::position = Point(0,0);
    Sprite::speed = 0;
}
const Point &Sprite::getPosition() const {
    return position;
}

void Sprite::setPosition(const Point &position) {
    Sprite::position = position;
}

float Sprite::getSpeed() const {
    return speed;
}

void Sprite::setSpeed(float speed) {
    Sprite::speed = speed;
}

Sprite::~Sprite() {
}


