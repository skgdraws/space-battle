//
// Created by jose on 4/6/23.
//

#include "Enemy_2.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

Enemy_2::Enemy_2() {
    this->setHp(150);
    this->setSpeed(5);
    this->setColor(sf::Color::Blue);
    this->setDimensions(Vector2f(45.f,45.f));
}