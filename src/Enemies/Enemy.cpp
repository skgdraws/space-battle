//
// Created by jose on 4/5/23.
//

#include "Enemy.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy::setHp() {
    this->hp = 100;
}

void Enemy::setSpeed() {
    this->speed = 10;
}

void Enemy::setColor() {
    this->enemy.setFillColor(Color::Black);
}

void Enemy::setDimensions() {
    this->enemy.setSize(Vector2f(50.f,50.f));
}