//
// Created by tudor on 11/10/2022.
//

#include "../Headers/Hero.h"

Hero::Hero() {
    hp=3;
}
short int Hero::getHp() {
    return hp;
}


void Hero::changeHp(short difference) {
    hp = hp + difference;
}

Hero::~Hero() {

}

bool Hero::shoot() {
    return gun.shoot();
}
