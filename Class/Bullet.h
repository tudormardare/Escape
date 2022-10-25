//
// Created by tudor on 17/10/2022.
//

#ifndef ESCAPE_BULLET_H
#define ESCAPE_BULLET_H


#include <SFML/Graphics.hpp>
#include "MySprite.h"

class Bullet: MySprite{
private:
    sf::Sprite sprite;
    sf::Texture texture;
    int damage;
public:
    Bullet(const int &id, const int &damage);
    Bullet();
    ~Bullet();
};


#endif //ESCAPE_BULLET_H
