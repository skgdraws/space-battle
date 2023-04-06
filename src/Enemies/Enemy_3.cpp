//
// Created by jose on 4/6/23.
//

#include "Enemy_3.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

Enemy_3::Enemy_3() {
    this->setHp(500);
    this->setSpeed(10);
    this->setColor(sf::Color::Green);
    this->setDimensions(Vector2f(75.f,75.f));
}