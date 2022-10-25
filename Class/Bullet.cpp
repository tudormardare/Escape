//
// Created by tudor on 17/10/2022.
//

#include "Bullet.h"

Bullet::~Bullet() {
}

Bullet::Bullet(const int &id, const int &damage) {
    this->damage = damage;
}

Bullet::Bullet() {
}

void Bullet::move(const float &offsetX, const float &offsetY) {

}

bool Bullet::hit() {
    return true;
}
