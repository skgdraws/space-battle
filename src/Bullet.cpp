#include "Bullet.h"

Bullet::Bullet() {
    initShape();
    initVariables();
}

Bullet::~Bullet() {

}

const sf::RectangleShape Bullet::getShape() const{

    return this->rect;
}

void Bullet::initShape() {
    this->rect.setSize(sf::Vector2f(20.f, 10.f));
    this->rect.setFillColor(sf::Color::White);
}

void Bullet::initVariables() {
    this->damage = 2;
}

void Bullet::update() {
    this->rect.move(1.f, 0.f);
}

void Bullet::render(sf::RenderTarget *target) {
    target->draw(this->rect);
}

void Bullet::setDamage(){

    this->damage /= 2;
}

const int Bullet::getDamage() const {
    return this->damage;
}
