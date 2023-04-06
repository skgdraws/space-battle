//
// Created by jose on 4/5/23.
//

#include "Enemy.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy::setHp(int i) {
    this->hp = i;
}

void Enemy::setSpeed(int i) {
    this->speed = i;
}

void Enemy::setColor(sf::Color color) {
    this->enemy.setFillColor(color);
}

void Enemy::setDimensions(Vector2f dimension) {
    this->enemy.setSize(dimension);
}