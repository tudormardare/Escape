//
// Created by tudor on 28/09/2022.
//

#include "../Headers/Saw.h"

short Saw::getDamage() const {
    return damage;
}

void Saw::setDamage(short damage) {
    Saw::damage = damage;
}

Saw::~Saw() {
}

void Saw::move() {
    Sprite::move();
}

void Sprite::move() {
    std::cout << "ciao";
}
