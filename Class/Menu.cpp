#include "Menu.h"


#define DIMENSION_NOT_SELECTED 60
#define DIMENSION_SELECTED 70

//Initialization of Background Menu
void Menu::InitBackground() {

    this->MainBackGround.setSize(sf::Vector2f(WIDTH,HEIGHT));
    this->MainTexture.loadFromFile("./Immagini/White.png");
    this->MainBackGround.setTexture(&(this->MainTexture), true);
}

//Drawing Selections
void Menu::DrawMenu(RenderWindow & window) {

    for (const auto & MenuSelection : MenuSelections)
    {
        window.draw(MenuSelection);
    }

}

//Initialization of Selections Menu
void Menu::InitTextMenu() {

    //Font
    this->MainFont.loadFromFile("./Fonts/Gloriously.ttf");

    //Start
    this->MenuSelections[0].setFont(this->MainFont);
    this->MenuSelections[0].setFillColor(Color::Black);
    this->MenuSelections[0].setString("START");
    this->MenuSelections[0].setCharacterSize(DIMENSION_NOT_SELECTED);
    this->MenuSelections[0].setOrigin(sf::Vector2f(this->MenuSelections[0].getLocalBounds().width/2.f,this->MenuSelections[0].getLocalBounds().height/2.f ));
    this->MenuSelections[0].setPosition(sf::Vector2f ((WIDTH /2.f),(HEIGHT/ (MaxMainMenu + 1.f)) * 1));
    //Commands
    this->MenuSelections[1].setFont(this->MainFont);
    this->MenuSelections[1].setFillColor(Color::Black);
    this->MenuSelections[1].setString("COMMANDS");
    this->MenuSelections[1].setCharacterSize(DIMENSION_NOT_SELECTED);
    this->MenuSelections[1].setOrigin(sf::Vector2f(this->MenuSelections[1].getLocalBounds().width/2.f,this->MenuSelections[1].getLocalBounds().height/2.f ));
    this->MenuSelections[1].setPosition(WIDTH/2.f,(HEIGHT/ (MaxMainMenu + 1.f)) * 2);
    //Quit
    this->MenuSelections[2].setFont(this->MainFont);
    this->MenuSelections[2].setFillColor(Color::Black);
    this->MenuSelections[2].setString("QUIT");
    this->MenuSelections[2].setCharacterSize(DIMENSION_NOT_SELECTED);
    this->MenuSelections[2].setOrigin(sf::Vector2f(this->MenuSelections[2].getLocalBounds().width/2.f,this->MenuSelections[2].getLocalBounds().height/2.f ));
    this->MenuSelections[2].setPosition(WIDTH/2.f,(HEIGHT/ (MaxMainMenu + 1.f)) * 3);

}

//Initialization of first selection of Menu
void Menu::InitMenu() {

    this->MainMenuSelected = 0;
    this->MenuSelections[MainMenuSelected].setCharacterSize(DIMENSION_SELECTED);
}

//Constructor
Menu::Menu() {
    this->MenuType = 0;
    this->MenuIsRunning = true;
    this->InitBackground();
    this->InitTextMenu();
    this->InitMenu();
}

//Destructor
Menu::~Menu() = default;

//MoveUp
void Menu::MoveUp()
{
    if (this->MainMenuSelected + 1 >= 0)
    {
        this->MenuSelections[this->MainMenuSelected].setCharacterSize(DIMENSION_NOT_SELECTED);
        this->MenuSelections[this->MainMenuSelected].setOrigin(sf::Vector2f(this->MenuSelections[this->MainMenuSelected].getLocalBounds().width/2.f,this->MenuSelections[this->MainMenuSelected].getLocalBounds().height/2.f ));
        this->MainMenuSelected--;
        if (this->MainMenuSelected == -1)
        {
            this->MainMenuSelected = 2;
        }
        this->MenuSelections[this->MainMenuSelected].setCharacterSize(DIMENSION_SELECTED);
        this->MenuSelections[this->MainMenuSelected].setOrigin(sf::Vector2f(this->MenuSelections[this->MainMenuSelected].getLocalBounds().width/2.f,this->MenuSelections[this->MainMenuSelected].getLocalBounds().height/2.f ));
    }
}
//MoveDown
void Menu::MoveDown()
{
    if (this->MainMenuSelected - 1 <= MaxMainMenu)
    {
        this->MenuSelections[MainMenuSelected].setCharacterSize(DIMENSION_NOT_SELECTED);
        this->MenuSelections[this->MainMenuSelected].setOrigin(sf::Vector2f(this->MenuSelections[this->MainMenuSelected].getLocalBounds().width/2.f,this->MenuSelections[this->MainMenuSelected].getLocalBounds().height/2.f ));
        this->MainMenuSelected++;
        if (this->MainMenuSelected == 3)
        {
            this->MainMenuSelected = 0;
        }
        this->MenuSelections[this->MainMenuSelected].setCharacterSize(DIMENSION_SELECTED);
        this->MenuSelections[this->MainMenuSelected].setOrigin(sf::Vector2f(this->MenuSelections[this->MainMenuSelected].getLocalBounds().width/2.f,this->MenuSelections[this->MainMenuSelected].getLocalBounds().height/2.f ));
    }
}

//Menu effettivo
void Menu::MainMenu(RenderWindow & window) {

    //Loop
    while (MenuIsRunning) {
        while (window.pollEvent(ev)) {
            switch (this->ev.type) {
                case Event::Closed:
                    window.close();
                    this->MenuIsRunning = false;
                    break;
                case Event::KeyReleased:
                    //Escape close window
                    if (this->ev.key.code == Keyboard::Escape) {
                        if (this->MenuType > 0)
                            //Return to MainMenu
                            this->MenuType = 0;
                        else{
                            //Close the window from the Menu
                            this->MenuIsRunning = false;
                            window.close();
                        }

                        break;
                    }
                    //Move up in Menu
                    if (this->ev.key.code == Keyboard::Up and this->MenuType == 0) {
                        this->MoveUp();
                        break;
                    }
                    //Move down in Menu
                    if (this->ev.key.code == Keyboard::Down and this->MenuType == 0) {
                        this->MoveDown();
                        break;
                    }
                    if (this->ev.key.code == Keyboard::Enter and this->MenuType == 0) {
                        switch (this->MainMenuSelected) {
                            //Start
                            case 0:
                                window.setTitle("The Binding of Isaac");
                                this->MenuIsRunning = false;
                                break;
                                //Commands
                            case 1:
                                this->MenuType = 1;
                                break;
                                //Quit
                            case 2:
                                window.close();
                                this->MenuIsRunning = false;
                                break;
                            default:
                                break;
                        }
                        break;
                    }
                default:
                    break;
            }
        }
        //Draw
        window.draw(this->MainBackGround);
        if (this->MenuType == 0) {
            this->DrawMenu(window);
        }
        if (this->MenuType == 1) {
            window.draw(this->Commands);
        }
        window.display();
        window.clear();
    }
}
