//
// Created by tudor on 12/10/2022.
//

#ifndef ESCAPE_WEAPON_H
#define ESCAPE_WEAPON_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Bullet.h"
#include "MySprite.h"

class Weapon: public MySprite{
private:
    sf::Sprite sprite;
    sf::Texture texture;
    float bulletSpeed;
    sf::Vector2f position;
    Bullet bulletType;
public:
    Weapon(const sf::Vector2f &position, const float &bulletSpeed, const Bullet &bulletType);
    Weapon();
    bool shoot();
    void move(const float &offsetX, const float &offsetY) override;

};


#endif //ESCAPE_WEAPON_H
