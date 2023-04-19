#include "Bullet.h"

Bullet::Bullet() {
    initShape();
    initVariables();
}

Bullet::~Bullet() {

}

void Bullet::initShape() {
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
