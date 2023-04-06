//
// Created by jose on 4/5/23.
//

#ifndef SPACE_BATTLE_ENEMY_H
#define SPACE_BATTLE_ENEMY_H

#include <iostream>
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
    Enemy();
    // Set parameters
    void setHp(int i);
    void setSpeed(int i);
    void setColor(sf::Color color);
    void setDimensions(sf::Vector2f dimension);



};


#endif //SPACE_BATTLE_ENEMY_H
