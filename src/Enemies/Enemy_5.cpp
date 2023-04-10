//
// Created by jose on 4/6/23.
//

#include "Enemy_5.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_5::draw() {
    hp = 150;
    speed = 10.f;
    enemy.setFillColor(Color::Cyan);
    enemy.setSize(sf::Vector2f(30.f, 25.f));
}
