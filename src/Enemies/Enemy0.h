//
// Created by jose on 4/5/23.
//

#ifndef SPACE_BATTLE_ENEMY0_H
#define SPACE_BATTLE_ENEMY0_H

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

class Enemy0 {
    // Display
    sf::RenderWindow window;

    // Stats
    int hp;
    int speed;
    int posY;
    sf::RectangleShape enemy;
    int spawnTimer = 0;

    Enemy0();

    void movement();

    void draw();

    void update();

};


#endif //SPACE_BATTLE_ENEMY0_H
