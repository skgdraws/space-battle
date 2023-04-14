#include "Enemy.h"

// Private functions
void SwagBall::initShape(const sf::RenderWindow & window) {

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
SwagBall::SwagBall(const sf::RenderWindow& window, int type)
        : type(type)
{

    initShape(window);
}

SwagBall::~SwagBall() {


}

sf::CircleShape SwagBall::getShape() const {

    return this->shape;
}

const int & SwagBall::getType() const {

}

// Functions
void SwagBall::update(){

    this->shape.move(sf::Vector2f(-10.f, 0.f));
}

void SwagBall::render(sf::RenderTarget *target) {

    target->draw(this->shape);
}