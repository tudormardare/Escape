//
// Created by tudor on 25/10/2022.
//

#include <fstream>
#include <iostream>
#include "Map.h"

Map::Map() {
    std::ifstream myFile;
    myFile.open("Files/Maps.txt");
    std::string myString("1");
    if ( myFile.is_open() ) { // always check whether the file is open
        myFile >> myString; // pipe file's content into stream
        std::cout << myString; // pipe stream's content to standard output
    }
    texture.loadFromFile("immagini/Prova.png");
    //sprite.setScale(sf::Vector2f((float) windowWidth/texture.getSize().x, (float) windowHeight/texture.getSize().y));
    sprite.setScale(MAP_SCALE_X,MAP_SCALE_Y);
    sprite.setTexture(texture,true);
}

void Map::move(const float &offsetX, const float &offsetY) {
    MySprite::move(offsetX, offsetY);
}
Map::~Map() {

}
