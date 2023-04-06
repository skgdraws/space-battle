//
// Created by jose on 4/5/23.
//

#ifndef SPACE_BATTLE_ENEMY_H
#define SPACE_BATTLE_ENEMY_H

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
/*
 * Abstract Class
 */
class Enemy {
protected:
    // Display
    sf::RenderWindow window;

    sf::RectangleShape enemy;

    // Stats
    int hp;
    int speed;
    int posY;
    int spawnTimer = 0;

public:
    // Set parameters
    void setHp();
    void setSpeed();
    void setColor();
    void setDimensions();



};


#endif //SPACE_BATTLE_ENEMY_H
