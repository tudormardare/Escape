//
// Created by tudor on 10/10/2022.
//

#ifndef ESCAPE3_MAP_H
#define ESCAPE3_MAP_H
#include <string>
#include "SFML/Graphics.hpp"


class Map {
private:
    std::string pathName;
    int id;
public:
    Map(const std::string &pathName,const int &id);
    ~Map();
private:
    void GetDesktopResolution(int& horizontal, int& vertical);
};


#endif //ESCAPE3_MAP_H
