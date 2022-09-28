//
// Created by tudor on 28/09/2022.
//

#ifndef ESCAPE3_SAW_H
#define ESCAPE3_SAW_H

#include <iostream>
#include "Sprite.h"

class Saw : public Sprite{
private:
    short int damage;
public:
    Saw():damage(0){}
    short getDamage() const;
    void setDamage(short damage);
    void move() override;
    ~Saw();
};

#endif //ESCAPE3_SAW_H
