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
private:
    int spawnTimer = 0;
public:
    // Display
    sf::RenderWindow window;

    RectangleShape enemy;

    // Stats
    int hp = 0;
    float speed = 10.f;

    // Set parameters
    void setHp(int h);

    void draw(sf::Color color, sf::Vector2f dimension);
    virtual void movement();

};


#endif //SPACE_BATTLE_ENEMY_H
