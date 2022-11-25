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
    int id;
    sf::Sprite sprite;
    sf::Texture texture;
    float bulletSpeed;
    sf::Vector2f position;
    std::unique_ptr<Bullet> bulletType;
public:
    static constexpr float WEAPON_SCALE_X = 0.2;
    static constexpr float WEAPON_SCALE_Y = 0.2;

    explicit Weapon(const int &id);
    ~Weapon();
    bool shoot();
    void move(const float &offsetX, const float &offsetY) override;

};


#endif //ESCAPE_WEAPON_H
