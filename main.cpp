#include <iostream>
#include <memory>
#include "Headers/point.h"

int main() {
    std::unique_ptr<Point> p = std::make_unique<Point>(20,50);
    std::cout << p->getX();


    return 0;
}
