//
// Created by tudor on 17/10/2022.
//

#include "Bullet.h"
#include "FileReader.h"

Bullet::~Bullet() {
}

Bullet::Bullet(const int &id) {
    std::vector<std::string> attributes;
    attributes = FileReader::getAttributesFromFile("Files/Bullets.txt", id);
    this->id = stoi(attributes[0]);
    this->damage = stoi(attributes[2]);

    texture.loadFromFile(attributes[1]);
    sprite.setTexture(texture);


}


void Bullet::move(const float &offsetX, const float &offsetY) {

}

bool Bullet::hit() {
    return true;
}
