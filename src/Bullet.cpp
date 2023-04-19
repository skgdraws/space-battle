#include "Bullet.h"

/**
 * \brief Is the constructor of the class
 */
Bullet::Bullet(sf::Vector2f pos) {
    initShape(pos);
    initVariables();
}

Bullet::~Bullet() {

}

/**
 * \brief Return the shape of the bullet
 *
 * @return RectangleShape
 */
const sf::RectangleShape Bullet::getShape() const{

    return this->rect;
}

/**
 * \brief Initialize the shape of the bullets
 */
void Bullet::initShape(sf::Vector2f pos) {
    this->rect.setSize(sf::Vector2f(20.f, 10.f));
    this->rect.setFillColor(sf::Color::White);
    this->rect.setPosition(pos);
}

/**
 * \brief Initialize the variables of the bullets
 */
void Bullet::initVariables() {
    this->damage = 5;
}

/**
 * \brief It's responsible form the movement of the bullet
 */
void Bullet::update() {
    this->rect.move(1.f, 0.f);
}

/**
 * \brief It's responsible from the draw of the bullet
 *
 * @param target
 */
void Bullet::render(sf::RenderTarget *target) {
    target->draw(this->rect);
}
/**
 * \brief Set the damage of the bullet impact
 */
void Bullet::setDamage(){

    this->damage /= 2;
}

/**
 * \brief Return the attribute damage of the bullet
 *
 * @return int
 */
const int Bullet::getDamage() const {
    return this->damage;
}
