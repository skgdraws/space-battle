//
// Created by jose on 4/6/23.
//

#include "Enemy_4.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

Enemy_4::Enemy_4() {
    this->setHp(150);
    this->setSpeed(10);
    this->setColor(sf::Color::Magenta);
    this->setDimensions(Vector2f(45.f,45.f));
}