#ifndef SPACE_BATTLE_PLAYER_H
#define SPACE_BATTLE_PLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Player {

private:

    // Sprites and Textures
    sf::RectangleShape shape;

    // Player Variables
    int hpMax;
    int hp;
    float movementSpeed;

    // Private Functions
    void initVariables();
    void initShape();

public:

    // Constructor and Destructor
    Player(float x = 0.f, float y = 0.f);
    virtual ~Player();

    // Accessors
    sf::RectangleShape getShape() const;
    const int& getHP() const;
    const int& getHPMax() const;

    // Health checks and changers
    void takeDamage(const int damage);
    void healHP(const int health);

    // Inputs
    void updateInput();

    // Checks collisions
    void windowBoundsCollision(const sf::RenderTarget * target);

    // Updating and Rendering process
    void update(const sf::RenderTarget * target);
    void render(sf::RenderTarget * target);
};


#endif //SPACE_BATTLE_PLAYER_H