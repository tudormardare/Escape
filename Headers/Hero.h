//
// Created by tudor on 11/10/2022.
//

#ifndef ESCAPE_HERO_H
#define ESCAPE_HERO_H


#include "Sprite.h"
#include "ArmedSprite.h"
#include "Weapon.h"

class Hero: public ArmedSprite{
private:
    short int hp;
    Weapon gun;
public:
    Hero();
    void changeHp(short int hp);
    bool shoot() override;
    short int getHp();
    ~Hero();
};


#endif //ESCAPE_HERO_H
