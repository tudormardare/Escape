//
// Created by tudor on 26/10/2022.
//

#include <fstream>
#include <iostream>
#include "Game.h"

Game::Game(const int &level) {
    this->level = level;
    map = std::make_unique<Map>(level);
}

Game::~Game() {

}

