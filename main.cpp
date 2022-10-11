#include <iostream>
#include <memory>
#include <unistd.h>
#include "../Escape2/Headers/Point.h"
#include "../Escape2/Headers/Sprite.h"
#include "../Escape2/Headers/Saw.h"
#include "SFML/Window.hpp"
#include "wtypes.h"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

void GetDesktopResolution(int& horizontal, int& vertical) {
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

int main() {
    int height, width;
    GetDesktopResolution(width,height);
    int windowHeight= (height/4)*3;
    int windowWidth = (width/4)*3;
    std::cout<<height;
    sf::Sprite sprite;
    sf::Sprite hero;
    sprite.setPosition(0,0);
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Moving a shape");
    window.setVerticalSyncEnabled(true);
    sf::Texture texture;
    sf::Texture heroTexture;
    texture.loadFromFile("immagini/Prova.png");
    //sprite.setScale(sf::Vector2f((float) windowWidth/texture.getSize().x, (float) windowHeight/texture.getSize().y));
    sprite.setScale(1.42,1.42);
    sprite.setTexture(texture,true);

    heroTexture.loadFromFile("immagini/hero.png");
    hero.setScale(0.2,0.2);
    hero.setTexture(heroTexture, true);
    hero.setPosition(windowWidth/2-((hero.getTexture()->getSize().x)*hero.getScale().x/2), windowHeight/2 - ((hero.getTexture()->getSize().y)*hero.getScale().y/2));
    hero.setRotation(0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();

                return 0;
            }
        }


        window.clear(sf::Color::White);
        window.clear(sf::Color::Black);

        if (event.type == sf::Event::KeyPressed){
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                        sprite.move(0, 5);

            }
        }

        if (event.type == sf::Event::KeyPressed){
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                sprite.move(0, -5);
            }
        }

        if (event.type == sf::Event::KeyPressed){
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
                sprite.move(5, 0);
            }
        }

        if (event.type == sf::Event::KeyPressed){
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                if(hero.getRotation()<5){
                hero.rotate(0.4);
                }
                sprite.move(-5, 0);
            }
        }
        if(hero.getRotation()> 0.4 && !sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            hero.rotate(-0.4);
            std::cout<<hero.getRotation()<<"\n";
        }
        if(sprite.getPosition().y!=0 && !sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            sprite.move(0,-5);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                if(hero.getRotation()<5){
                    hero.rotate(0.4);
                }
                sprite.move(-5, 0);
            }
        }
        window.draw(sprite);
        window.draw(hero);
        window.display();

    }
}

