//
// Created by tudor on 28/09/2022.
//

#ifndef ESCAPE_SPRITE_H
#define ESCAPE_SPRITE_H

#include "Point.h"

class Sprite {
protected:
    Point position;
    float speed;

public:
    Sprite();

    Sprite(const Point &position, float speed);

    virtual void move();

    const Point &getPosition() const;

    void setPosition(const Point &position);

    float getSpeed() const;

    void setSpeed(float speed);

    virtual ~Sprite();
};

#endif //ESCAPE_SPRITE_H
