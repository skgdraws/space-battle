//
// Created by jose on 4/6/23.
//

#include "Enemy_1.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_1::draw() {
    hp = 200;
    speed = 10.f;
    enemy.setFillColor(Color::Red);
    enemy.setSize(sf::Vector2f(50.f, 40.f));
}
