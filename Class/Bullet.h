//
// Created by tudor on 17/10/2022.
//

#ifndef ESCAPE_BULLET_H
#define ESCAPE_BULLET_H


#include <SFML/Graphics.hpp>
#include "MySprite.h"

class Bullet: public MySprite{
private:
    int id;
    int damage;
public:
    static constexpr float BULLET_SCALE_X = 0.2;
    static constexpr float BULLET_SCALE_Y = 0.2;


    explicit Bullet(const int &id);
    void move(const float& offsetX, const float& offsetY) override;
    bool hit();
    ~Bullet();
};


#endif //ESCAPE_BULLET_H
