//
// Created by tudor on 11/10/2022.
//

#ifndef ESCAPE_ARMEDSPRITE_H
#define ESCAPE_ARMEDSPRITE_H


#include "Sprite.h"

class ArmedSprite: public Sprite {
public:
    virtual bool shoot() = 0;
};


#endif //ESCAPE_ARMEDSPRITE_H
