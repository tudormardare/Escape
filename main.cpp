#include <iostream>
#include <memory>
#include "Headers/Point.h"
#include "Headers/Sprite.h"
#include "Headers/Saw.h"
#include "SFML/Window.hpp"
#include "wtypes.h"

void GetDesktopResolution(int& horizontal, int& vertical) {
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

int main() {
    int height;
    int width;
    sf::Window window(sf::VideoMode::getDesktopMode(), "My window");
    GetDesktopResolution(width,height);
    const int windowWidth = (width/4)*3;
    const int windowHeight = (height/4)*3;
    window.setSize(sf::Vector2u(windowWidth,windowHeight));
    window.setPosition(sf::Vector2i(width/2 - windowWidth/2,height/2 - windowHeight/2));
    sf::Vector2i position = sf::Mouse::getPosition();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
