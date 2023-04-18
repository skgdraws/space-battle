#include "Enemy.h"

// Private functions
void Enemy::initShape() {

    this->shape.setRadius(static_cast<float>(rand()%10+10));
    this->type = static_cast<int>(rand() % enemyTypes::NROFTYPES);
    sf::Color color;

    switch(this->type){

        case DEFAULT:
            color = sf::Color::Yellow;
            break;

        case DAMAGING:
            color = sf::Color::Red;
            this->shape.setOutlineColor(sf::Color::White);
            this->shape.setOutlineThickness(2.f);
            break;

        case HEALING:
            color = sf::Color::Green;
            this->shape.setOutlineColor(sf::Color::White);
            this->shape.setOutlineThickness(2.f);
            break;
    }

    this->shape.setFillColor(color);

    this->shape.setPosition(sf::Vector2f(
            800 - this->shape.getGlobalBounds().width/2,
            static_cast<float>(rand()%600 - this->shape.getGlobalBounds().height)
    ));
}

// Constructor and Destructor
/**
 * \brief Class that handles all of the enemy's logic
 *
 * @param
 * @return
 */
Enemy::Enemy(){

    initShape();
}

Enemy::~Enemy() {


}

/**
 * \brief Returns the enemy's shape
 *
 * @param
 * @return CircleShape
 */
sf::CircleShape Enemy::getShape() const {

    return this->shape;
}

/**
 * \brief Returns the enemy's type
 *
 * @param
 * @return
 */
const int & Enemy::getType() const {

    return this->type;
}

// Functions
void Enemy::setDifficulty(int diff) {

    this->difficulty = diff;

    switch (this->type) {

        case DEFAULT:
            this->health = 2 * this->difficulty;
            this->movementSpeed = 3.f * this->difficulty;
            break;

        case DAMAGING:
            this->health = 3 * this->difficulty;
            this->movementSpeed = 2.f * this->difficulty;
            break;

        case HEALING:
            this->health = 1 * this->difficulty;
            this->movementSpeed = 3.5f * this->difficulty;
            break;
    }


}

/**
 * \brief Allows to update enemy values at runtime
 *
 * @param
 * @return
 */
void Enemy::update(){

    // std::cout << "we're moving" << std::endl;
    this->shape.move(-this->movementSpeed, 0.f);
    // this->shape.move(sf::Vector2f(-10.f, 0.f));
}

/**
 * \brief Handles the rendering of player display sprite
 *
 * @param
 * @return
 */
void Enemy::render(sf::RenderTarget *target) {

    target->draw(this->shape);
}