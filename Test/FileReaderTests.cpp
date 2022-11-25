//
// Created by tudor on 25/11/2022.
//

#include <gtest/gtest.h>
#include "../Class/FileReader.h"
TEST(FileReader, getAttributesFromFile) {
    std::vector<std::string> attributes;
    attributes = FileReader::getAttributesFromFile("Files/Maps.txt", 2);
    EXPECT_EQ(attributes[0], "2");
}