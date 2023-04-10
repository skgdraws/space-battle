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

void Enemy::draw() {
    hp = 0;
    speed = 10.f;
    enemy.setFillColor(Color::Black);
    enemy.setSize(sf::Vector2f(50.f, 50.f));

//    spawnTimer++;
//
//    if(this->spawnTimer >= 30){
//        enemy.setPosition(float(window.getSize().x), float(rand()%(window.getSize().y)));
//        spawnTimer = 0;
//    }

}

void Enemy::movement(){
    enemy.move(speed, 0);
    if(enemy.getPosition().x < 0){
        window.clear();
    }
}
