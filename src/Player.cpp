#include "Player.h"

void Player::initVariables() {

    this->movementSpeed = 5.f;
    this->hpMax = 10;
    this->hp = this->hpMax;
}

void Player::initShape() {

    this->shape.setFillColor(sf::Color::Blue);
    this->shape.setSize(sf::Vector2f(50.f, 50.f));

}

// Constructor and Destructor
Player::Player(float x, float y){

    this->shape.setPosition(x, y);

    this->initVariables();
    this->initShape();
}

Player::~Player() {


}

// Accessors
sf::RectangleShape Player::getShape() const {

    return this->shape;
}

const int & Player::getHP() const {

    return this->hp;
}

const int & Player::getHPMax() const {

    return this->hpMax;
}

// Functions
void Player::takeDamage(const int damage) {

    if (this->hp > 0){

        this->hp -= damage;
    }

    if (this->hp < 0){

        this->hp = 0;
    }
}

void Player::healHP(const int health) {

    if (this->hp < this->hpMax){

        this->hp += health;
    }

    if (this->hp > this->hpMax){

        this->hp = this->hpMax;
    }
}

void Player::updateInput() {

    // Vertical movement
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){

        this->shape.move(0.f, -this->movementSpeed);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){

        this->shape.move(0.f, this->movementSpeed);
    }
}

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

void Player::update(const sf::RenderTarget * target){

    //Keyboard Input
    this->updateInput();

    // Window Bounds Collision
    this->windowBoundsCollision(target);

}

void Player::render(sf::RenderTarget *target) {

    target->draw(this->shape);
}