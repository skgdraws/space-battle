#ifndef SPACE_BATTLE_SWAGBALL_H
#define SPACE_BATTLE_SWAGBALL_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <iostream>

enum enemyTypes{

    DEFAULT = 0,
    DAMAGING,
    HEALING,
    NROFTYPES
};

class Enemy {

private:

    // Sprites and Type
    sf::CircleShape shape;
    sf::Texture texture;
    sf::Sprite sprite;
    int type;

    // Health
    int health;
    int difficulty;
    int movementSpeed;

    // Private Functions
    void initShape();

public:

    // Constructor and Destructor
    Enemy();
    virtual ~Enemy();

    sf::CircleShape getShape() const;
    const int& getType() const;

    // Functions
    void setDifficulty(int diff);
    void update();
    void render(sf::RenderTarget * target);
};


#endif //SPACE_BATTLE_SWAGBALL_H