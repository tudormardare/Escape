//
// Created by tudor on 25/11/2022.
//

#ifndef ESCAPE_FILEREADER_H
#define ESCAPE_FILEREADER_H


#include <vector>
#include <string>

class  FileReader {
public:
    static std::vector<std::string> getAttributesFromFile(const std::string &path, const int &id);
private:
    FileReader();
};


#endif //ESCAPE_FILEREADER_H
