#include "Enemy.h"

// Private functions
void Enemy::initShape(const sf::RenderWindow & window) {

    this->shape.setRadius(static_cast<float>(rand()%10+10));
    sf::Color color;

    switch(this->type){

        case DEFAULT:
            color = sf::Color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1);
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
            window.getSize().x - this->shape.getGlobalBounds().width/2,
            static_cast<float>(rand()%window.getSize().y - this->shape.getGlobalBounds().height)
    ));
}

// Constructor and Destructor
Enemy::Enemy(const sf::RenderWindow& window, int type)
        : type(type)
{

    initShape(window);
}

Enemy::~Enemy() {


}

sf::CircleShape Enemy::getShape() const {

    return this->shape;
}

const int & Enemy::getType() const {

    return this->type;
}

// Functions
void Enemy::update(){

    std::cout << "we're moving" << std::endl;
    this->shape.move(-5.f , 0.f);
    // this->shape.move(sf::Vector2f(-10.f, 0.f));
}

void Enemy::render(sf::RenderTarget *target) {

    target->draw(this->shape);
}