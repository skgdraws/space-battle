//
// Created by jose on 4/6/23.
//

#include "Enemy_1.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

Enemy_1::Enemy_1() {
    this->setHp(200);
    this->setSpeed(10);
    this->setColor(sf::Color::Red);
    this->setDimensions(Vector2f(50.f,50.f));
}
