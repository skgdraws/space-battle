//
// Created by jose on 4/5/23.
//

#ifndef SPACE_BATTLE_ENEMY_H
#define SPACE_BATTLE_ENEMY_H

#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

using namespace sf;
/*
 * Abstract Class
 */
class Enemy {
public:
    // Display
    sf::RenderWindow window;

    RectangleShape enemy;

    // Stats
    int hp;
    float speed;

    // Set parameters
    void setHp(int h);

    virtual void draw();
    virtual void movement();

};


#endif //SPACE_BATTLE_ENEMY_H
