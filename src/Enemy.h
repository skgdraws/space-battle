#ifndef SPACE_BATTLE_SWAGBALL_H
#define SPACE_BATTLE_SWAGBALL_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <iostream>

enum SwagBallTypes{

    DEFAULT = 0,
    DAMAGING,
    HEALING,
    NROFTYPES
};

class Enemy {

private:

    sf::CircleShape shape;
    int type;

    void initShape(const sf::RenderWindow & window);

public:

    // Constructor and Destructor
    Enemy(const sf::RenderWindow & window, int type);
    virtual ~Enemy();

    sf::CircleShape getShape() const;
    const int& getType() const;

    // Functions
    void updateCollision();
    void update();
    void render(sf::RenderTarget * target);
};


#endif //SPACE_BATTLE_SWAGBALL_H