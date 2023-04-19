/*
╔═══╦╗───────╔═══╗╔╗───╔╗
║╔═╗║║───────║╔═╗╠╝╚╗─╔╝╚╗
║╚═╝║║╔══╦╗─╔╣╚══╬╗╔╬═╩╗╔╬══╗
║╔══╣║║╔╗║║─║╠══╗║║║║╔╗║║║║═╣
║║──║╚╣╔╗║╚═╝║╚═╝║║╚╣╔╗║╚╣║═╣
╚╝──╚═╩╝╚╩═╗╔╩═══╝╚═╩╝╚╩═╩══╝
─────────╔═╝║
─────────╚══╝
 */

#ifndef SPACE_BATTLE_GAME_H
#define SPACE_BATTLE_GAME_H

#include <ctime>
#include <iostream>
#include <vector>
#include "DataStructures/LinkedList.h"
#include "DataStructures/LinkedList.cpp"
#include "BulletCollector.h"
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include <cstdlib>
#include <string>
#include <unistd.h>
#include "libserial/SerialStream.h"

class PlayState {

private:

    // Serial Port
    LibSerial::SerialStream serialStream;

    // Screen Variables
    sf::VideoMode videoMode;
    sf::RenderWindow* window;
    sf::Event ev;

    // Ending game
    bool endGame;

    // Player Variables
    Player player;
    char up;
    char down;
    BulletCollector bullets;
    int maxBullets;
    int curBullets;
    int bulletSpeed;
    int points;
    // Add Garbage collector here

    // Enemy variables
    int difficulty;
    int waves[5];
    int wave;
    LinkedList<Enemy> curWave;
    int numEnemies;
    int maxEnemies;
    int enemiesSpawnTimer;
    int maxEnemiesSpawnTimer;

    // GUI Stuff
    sf::Font font;
    sf::Text guiText;

    // Private Functions
    void initVariables(int diff);
    void initWindow();

public:

    // Constructors and Destructors
    PlayState(int diff = 1);
    ~PlayState();

    // Accessors
    const bool running() const;

    // Input
    void pollEvents();

    // Entity Updating
    void spawnEnemies();
    void playerCollisions();
    void updateEnemies();
    void updateBullets();

    // Game running
    void update();
    void render();

    void openSerialPort();
    void sendToArduino(int data);
    void recieveFromArduino();
};


#endif //SPACE_BATTLE_GAME_H