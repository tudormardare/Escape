//
// Created by tudor on 17/10/2022.
//

#ifndef ESCAPE_MYSPRITE_H
#define ESCAPE_MYSPRITE_H


#include <SFML/Graphics.hpp>

class MySprite {
protected:
    sf::Sprite sprite;
    sf::Texture texture;
    float speed;
public:
    void draw();
    virtual void move(const float& offsetX, const float& offsetY);
};


#endif //ESCAPE_MYSPRITE_H
