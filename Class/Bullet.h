//
// Created by tudor on 17/10/2022.
//

#ifndef ESCAPE_BULLET_H
#define ESCAPE_BULLET_H


#include <SFML/Graphics.hpp>
#include "MySprite.h"

class Bullet: public MySprite{
private:
    int damage;
public:
    Bullet(const int &id, const int &damage);
    void move(const float& offsetX, const float& offsetY) override;
    bool hit();
    Bullet();
    ~Bullet();
};


#endif //ESCAPE_BULLET_H
