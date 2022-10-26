//
// Created by tudor on 26/10/2022.
//

#ifndef ESCAPE_GAME_H
#define ESCAPE_GAME_H


#include "Map.h"

class Game {
private:
    std::unique_ptr<Map> map;
    int level;
public:
    explicit Game(const int& level);
    ~Game();
};


#endif //ESCAPE_GAME_H
