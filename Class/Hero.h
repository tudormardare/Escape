//
// Created by tudor on 12/10/2022.
//

#ifndef ESCAPE_HERO_H
#define ESCAPE_HERO_H


#include <SFML/Graphics.hpp>
#include "Weapon.h"
class Hero{
public:

    constexpr static float DEFAULT_SCALE_X = 0.2f;
    constexpr static float DEFAULT_SCALE_Y = 0.2f;
    static const int HERO_HP = 3;
    constexpr static float HERO_SPEED = 3.f;
    static const int HERO_MAX_ENERGY = 300;
private:
    sf::Sprite sprite;
    sf::Texture texture;
    int energy;
    int hp;
    int score;
    Weapon weapon;
    float speed;
public:
    Hero(const Weapon &weapon, const sf::Vector2f &position);
    bool shoot();
    int getHp() const;
    ~Hero();
    void draw();
private:
    void changeHp(const int &damage);
};


#endif //ESCAPE_HERO_H
