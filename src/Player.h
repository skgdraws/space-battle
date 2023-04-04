//
// Created by skgart on 31/03/23.
//

#ifndef SPACE_BATTLE_PLAYER_H
#define SPACE_BATTLE_PLAYER_H

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

class Player {

public:

    // Display
    sf::RenderWindow window;

    // skills

    // controls
    bool pressUp;
    bool pressDown;
    int speedMultiplier;

    // Stats
    int curHealth;
    int speed;
    sf::RectangleShape hitbox;

    // Bullets (using garbage collector)

    Player();

    void getSkills();

    void checkInputs();

    void movement();

    void shoot();

    void draw();

    void update();

};


#endif //SPACE_BATTLE_PLAYER_H
