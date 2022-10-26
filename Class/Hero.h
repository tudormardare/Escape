//
// Created by tudor on 12/10/2022.
//

#ifndef ESCAPE_HERO_H
#define ESCAPE_HERO_H


#include <SFML/Graphics.hpp>
#include "Weapon.h"
#include "MySprite.h"

class Hero: public MySprite{
public:

    constexpr static float DEFAULT_SCALE_X = 0.2f;
    constexpr static float DEFAULT_SCALE_Y = 0.2f;
    static const int HERO_HP = 3;
    constexpr static float HERO_SPEED = 3.f;
    static const int HERO_MAX_ENERGY = 300;
    constexpr static float MAX_DISTANCE_FROM_GROUND = 30.f;
private:
    int energy;
    int hp;
    int score;
    Weapon weapon;
    int distanceFromGround;
public:
    Hero(const Weapon &weapon, const sf::Vector2f &position);
    bool shoot();
    int getHp() const;
    ~Hero();
    void draw();
    void move(const float& offsetX, const float& offsetY) override;
    float getPositionX() const;
    float getPositionY() const;

private:
    void changeHp(const int &damage);
};


#endif //ESCAPE_HERO_H
