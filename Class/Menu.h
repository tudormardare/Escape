#ifndef ISAAC_MENU_H
#define ISAAC_MENU_H

#include <SFML/Graphics.hpp>

#define MaxMainMenu 3

#define WIDTH 1080
#define HEIGHT 720

using namespace sf;


class Menu {
private:
    //Variables
    bool MenuIsRunning;
    RectangleShape MainBackGround;
    Texture MainTexture;
    Font MainFont;
    int MenuType;

    //Texts
    Text MenuSelections[MaxMainMenu];
    Text Commands;
    int MainMenuSelected{};
    Event ev{};

    //Function private
    void InitBackground();
    void InitTextMenu();
    void InitMenu();
    void DrawMenu(RenderWindow & window);

public:

    //Constructor and Destructor
    Menu();
    virtual ~Menu();

    //Function public
    void MoveUp();
    void MoveDown();
    void MainMenu(RenderWindow & window);

};

#endif