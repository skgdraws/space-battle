//
// Created by jose on 4/5/23.
//

#include "Enemy.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include<cstdlib>

using namespace sf;
using namespace std;

void Enemy::setHp(int h) {
    this->hp = h;
}

void Enemy::draw(sf::Color color, sf::Vector2f dimension) {
    enemy.setFillColor(color);
    enemy.setSize(dimension);

    spawnTimer++;

    if(this->spawnTimer >= 30){
        enemy.setPosition(float(window.getSize().x), float(rand()%(window.getSize().y)));
        spawnTimer = 0;
    }

}

void Enemy::movement(){
    enemy.move(speed, 0);
    if(enemy.getPosition().x < 0){
        window.clear();
    }
}
