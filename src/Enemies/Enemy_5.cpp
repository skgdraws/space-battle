//
// Created by jose on 4/6/23.
//

#include "Enemy_5.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

Enemy_5::Enemy_5() {
    this->setHp(100);
    this->setSpeed(10);
    this->setColor(sf::Color::Cyan);
    this->setDimensions(Vector2f(25.f,25.f));
}