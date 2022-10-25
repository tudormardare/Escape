//
// Created by tudor on 12/10/2022.
//

#include "Hero.h"
#include "Weapon.h"

Hero::Hero(const Weapon &weapon, const sf::Vector2f &position) {
    this->weapon = weapon;
    this->hp = HERO_HP;
    this->energy = HERO_MAX_ENERGY;
    this->speed = HERO_SPEED;
    this->score = 0;
    sprite.setPosition(position);
    texture.loadFromFile("immagini/hero.png");
    sprite.setScale(DEFAULT_SCALE_X, DEFAULT_SCALE_Y);
    sprite.setTexture(texture, true);
}
bool Hero::shoot() {
    return true;
}

Hero::~Hero(){

}

int Hero::getHp() const{
    return this->hp;
}

void Hero::changeHp(const int &damage) {
    this->hp+=damage;
}

void Hero::draw() {

}

void Hero::move(const float &offsetX, const float &offsetY) {
    sprite.setPosition(sprite.getPosition().x + (offsetX * speed), sprite.getPosition().y + (offsetY * speed));
}

float Hero::getPositionX() const {
    return sprite.getPosition().x;
}

float Hero::getPositionY() const {
    return sprite.getPosition().y;
}

void Hero(){

}
