//
// Created by tudor on 25/10/2022.
//

#include <fstream>
#include <iostream>
#include "Map.h"
#include <limits>
#include <sstream>

void Map::move(const float &offsetX, const float &offsetY) {
}
Map::~Map() {

}

Map::Map(const int& id) {
    this->id = id;
    texture.loadFromFile(getPath(id));
    sprite.setTexture(texture, true);
    sprite.setScale(MAP_SCALE_X, MAP_SCALE_Y);
}

int Map::getId() const {
    return this->id;
}

std::string Map::getPath(const int &id) {
    std::string currentLine;
    std::string delimiter = ">";
    int currentId = 0;
    size_t pos = 0;
    std::ifstream myFile("Files/Maps.txt");
    if(myFile.is_open()){
        while(myFile.good() && currentId != id ) {
            std::getline(myFile,  currentLine);
            pos = currentLine.find(delimiter);
            currentId++;
        }
    }
    myFile.close();
    return currentLine.substr(pos + 1, std::string::npos);

}





