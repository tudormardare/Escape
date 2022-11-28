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
    ~Game();
    void run();
    Game();
};


#endif //ESCAPE_GAME_H
