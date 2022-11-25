//
// Created by tudor on 12/10/2022.
//

#include "Weapon.h"
#include "Bullet.h"
#include "FileReader.h"

Weapon::Weapon(const int &id) {
    std::vector<std::string> attributes;
    attributes = FileReader::getAttributesFromFile("Files/Weapons.txt", id);
    this->id = stoi(attributes[0]);
    texture.loadFromFile(attributes[1]);
    sprite.setTexture(texture, true);
    sprite.setScale(WEAPON_SCALE_X, WEAPON_SCALE_Y);
    sprite.setPosition(position);
    this->bulletSpeed = stoi(attributes[2]);
    bulletType = std::make_unique<Bullet>(stoi(attributes[3]));
}


bool Weapon::shoot() {
    bulletType->move(30,0);
    return bulletType->hit();
}

void Weapon::move(const float &offsetX, const float &offsetY) {

}

Weapon::~Weapon() {

}
