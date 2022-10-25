//
// Created by tudor on 12/10/2022.
//

#include "Weapon.h"
#include "Bullet.h"

Weapon::Weapon(const sf::Vector2f &position, const float &bulletSpeed, const Bullet &bulletType) {
    this->bulletSpeed = bulletSpeed;
    texture.loadFromFile("Inserisci qui percorso");
    sprite.setTexture(texture, true);
    sprite.setScale(0.2, 0.2);
    sprite.setPosition(position);
    this->bulletType = bulletType;
}

Weapon::Weapon() {

}

bool Weapon::shoot() {
    bulletType.move(30,0);
    return bulletType.hit();
}

void Weapon::move(const float &offsetX, const float &offsetY) {

}
