//
// Created by jose on 4/6/23.
//

#include "Enemy_4.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_4::draw() {
    hp = 150;
    speed = 10.f;
    enemy.setFillColor(Color::Magenta);
    enemy.setSize(sf::Vector2f(50.f, 40.f));
}

void Enemy_4::movement(){
    enemy.move(speed, speed);
    if(enemy.getPosition().x < 0){
        window.clear();
    }
}