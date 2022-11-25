//
// Created by tudor on 25/11/2022.
//

#include <fstream>
#include <iostream>
#include "FileReader.h"

std::vector<std::string> FileReader::getAttributesFromFile(const std::string &path, const int &id) {
    std::vector<std::string> attributes;
    std::string currentLine;
    std::string delimiter = ">";
    int currentId = 0;
    size_t start = 0;
    size_t end = 0;
    std::ifstream myFile(path);
    if(myFile.is_open()){
        while(myFile.good() && currentId != id ) {
            std::getline(myFile,  currentLine);
            currentId++;
        }
    }
    myFile.close();

    end = currentLine.find(delimiter);
    while (end != -1) {
        attributes.push_back(currentLine.substr(start, end - start) );
        start = end + delimiter.size();
        end = currentLine.find(delimiter, start);
    }
    attributes.push_back(currentLine.substr(start, end - start));
    return attributes;
}

FileReader::FileReader() {

}
