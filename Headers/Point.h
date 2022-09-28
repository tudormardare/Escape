//
// Created by tudor on 28/09/2022.
//

#ifndef ESCAPE3_POINT_H
#define ESCAPE3_POINT_H


class Point {
private:
    float x;
    float y;
public:
    Point();

    Point(float x, float y);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    ~Point();

};


#endif //ESCAPE3_POINT_H
