//
// Created by jose on 4/6/23.
//

#include "Enemy_2.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_2::draw() {
    hp = 150;
    speed = 15.f;
    enemy.setFillColor(Color::Blue);
    enemy.setSize(sf::Vector2f(40.f, 35.f));
}