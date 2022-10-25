//
// Created by tudor on 25/10/2022.
//

#ifndef ESCAPE_MAP_H
#define ESCAPE_MAP_H


#include "MySprite.h"

class Map: public MySprite{
public:
    constexpr static float MAP_SCALE_X = 1.42;
    constexpr static float MAP_SCALE_Y = 1.42;
private:
    short int id;

public:
    Map();
    void move(const float& offsetX, const float& offsetY) override;
    ~Map();

};


#endif //ESCAPE_MAP_H
