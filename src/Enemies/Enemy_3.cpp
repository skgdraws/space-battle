//
// Created by jose on 4/6/23.
//

#include "Enemy_3.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_3::draw(){
    hp = 400;
    speed = 5.f;
    enemy.setFillColor(Color::Green);
    enemy.setSize(sf::Vector2f(70.f, 60.f));
}