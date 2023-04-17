#ifndef SPACE_BATTLE_GAME_H
#define SPACE_BATTLE_GAME_H

#include <ctime>
#include <iostream>
#include <vector>
#include "DataStructures/LinkedList.h"
#include "DataStructures/LinkedList.cpp"
#include "Player.h"
#include "Enemy.h"

class PlayState {

private:

    sf::VideoMode videoMode;
    sf::RenderWindow* window;
    bool endGame;

    sf::Event ev;

    Player player;

    LinkedList<Enemy> enemies;
    float spawnTimerMax;
    float spawnTimer;
    int maxEnemies;

    int points;
    //sf::Font font;
    //sf::Text guiText;

    void initVariables();
    void initWindow();

public:

    // Constructors and Destructors
    PlayState();
    ~PlayState();

    // Accessors
    const bool running() const;

    // Modifiers

    // Functions
    void pollEvents();
    void spawnEnemies();
    void updateCollisions();
    void update();
    void render();
};


#endif //SPACE_BATTLE_GAME_H