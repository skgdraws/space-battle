#ifndef SPACE_BATTLE_ENEMY_H
#define SPACE_BATTLE_ENEMY_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

enum EnemyTypes{

    REGULAR = 0,
    MOVING,
    TANK
};

class Enemy {

private:

    sf::RectangleShape shape;
    int type;

    void initShape();

public:

    // Constructor and Destructor
    Enemy();
    virtual ~Enemy();

    // Accessors

    // Functions
    void draw(sf::RenderWindow* target);
    void update();

};


#endif //SPACE_BATTLE_ENEMY_H
