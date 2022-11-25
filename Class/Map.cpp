//
// Created by tudor on 25/10/2022.
//

#include <fstream>
#include <iostream>
#include "Map.h"
#include <limits>
#include <sstream>
#include "FileReader.h"

void Map::move(const float &offsetX, const float &offsetY) {
}
Map::~Map() {

}

Map::Map(const int& id) {
    std::vector<std::string> attributes;
    attributes = FileReader::getAttributesFromFile("Files/Maps.txt", id);
    this->id = stoi(attributes[0]);
    texture.loadFromFile(attributes[1]);
    sprite.setTexture(texture);
    sprite.setScale( MAP_SCALE_X, MAP_SCALE_Y);
}

int Map::getId() const {
    return this->id;
}







