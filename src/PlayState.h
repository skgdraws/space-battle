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

    // Screen Variables
    sf::VideoMode videoMode;
    sf::RenderWindow* window;
    sf::Event ev;

    // Ending game
    bool endGame;

    // Player Variables
    Player player;
    int points;
    // Add Garbage collector here

    // Enemy variables
    int waves[5];
    LinkedList<Enemy> curWave;
    int maxEnemies;
    int enemiesSpawnTimer;
    int maxEnemiesSpawnTimer;

    // GUI Stuff
    sf::Font font;
    sf::Text guiText;

    // Private Functions
    void initVariables();
    void initWindow();

public:

    // Constructors and Destructors
    PlayState();
    ~PlayState();

    // Accessors
    const bool running() const;

    // Input
    void pollEvents();

    // Entity Updating
    void spawnEnemies();
    void updateEnemies();
    void updateBullets();

    // Game running
    void update();
    void render();
};


#endif //SPACE_BATTLE_GAME_H