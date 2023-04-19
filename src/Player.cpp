#include "Player.h"

/**
 * \brief Initialize the variables of the player
 *
 * @param
 * @return
 */
void Player::initVariables() {

    this->movementSpeed = 5.f;
    this->hpMax = 10;
    this->hp = this->hpMax;
}

/**
 * \biref Set player shape
 *
 * @param
 * @return
 */
void Player::initShape() {

    this->shape.setFillColor(sf::Color::Blue);
    this->shape.setSize(sf::Vector2f(50.f, 50.f));

}

// Constructor and Destructor
/**
 * \brief Class that handles all the player's logic
 *
 * @param x
 * @param y
 */
Player::Player(float x, float y){

    this->shape.setPosition(x, y);

    this->initVariables();
    this->initShape();
}

Player::~Player() {


}

// Accessors
/**
 * \brief Returns the player's shape
 *
 * @param
 * @return RectangleShape
 */
sf::RectangleShape Player::getShape() const {

    return this->shape;
}

/**
 * \brief Returns the player's health
 *
 * @param
 * @return int
 */
const int & Player::getHP() const {

    return this->hp;
}

/**
 * \brief Return the player's max health
 *
 * @param
 * @return int
 */
const int & Player::getHPMax() const {

    return this->hpMax;
}

// Functions
/**
 * \brief Is responsable for reducing the player's health for each collision
 *
 * @param damage
 * @return
 */
void Player::takeDamage(const int damage) {

    if (this->hp > 0){

        this->hp -= damage;
    }

    if (this->hp < 0){

        this->hp = 0;
    }
}

/**
 * \brief Is responsable for healing the player's life
 *
 * @param health
 */
void Player::healHP(const int health) {

    if (this->hp < this->hpMax){

        this->hp += health;
    }

    if (this->hp > this->hpMax){

        this->hp = this->hpMax;
    }
}

/**
 * \brief Allows player movement along the y axis
 *
 * @param
 * @return
 */
void Player::updateInput(char up, char down) {

    // Vertical movement
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) || up == 'u' ){

        this->shape.move(0.f, -this->movementSpeed);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) || down == 's'){

        this->shape.move(0.f, this->movementSpeed);
    }
}

/**
 * \brief detects collisions between player and enemies
 *
 * @param target
 * @return
 */
void Player::windowBoundsCollision(const sf::RenderTarget *target) {

    // Up side of the window

    if (this->shape.getGlobalBounds().top <= 0.f){

        this->shape.setPosition(this->shape.getPosition().x, 0.f);
    }
        // Down side of the window
    else if (this->shape.getGlobalBounds().top + this->shape.getGlobalBounds().height >= target->getSize().y){

        this->shape.setPosition(this->shape.getPosition().x, target->getSize().y - this->shape.getGlobalBounds().width);
    }

}
/**
 * \brief Allows to update player values at runtime
 *
 * @param target
 * @return
 */
void Player::update(const sf::RenderTarget * target, char up, char down){

    //Keyboard Input
    this->updateInput(up, down);

    // Window Bounds Collision
    this->windowBoundsCollision(target);

}

/**
 * \brief Handles the rendering of player display sprite
 *
 * @param target
 * @return
 */
void Player::render(sf::RenderTarget *target) {

    target->draw(this->shape);
}