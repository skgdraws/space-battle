#ifndef DRAGGINGBALLS_PLAYER_H
#define DRAGGINGBALLS_PLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Player {

private:

    sf::RectangleShape shape;
    float movementSpeed;

    int hp;
    int hpMax;

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

    // Functions
    void takeDamage(const int damage);
    void healHP(const int health);

    void updateInput();
    void windowBoundsCollision(const sf::RenderTarget * target);
    void update(const sf::RenderTarget * target);
    void render(sf::RenderTarget * target);
};


#endif //DRAGGINGBALLS_PLAYER_H
