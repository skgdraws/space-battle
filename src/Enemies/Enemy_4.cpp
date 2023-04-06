//
// Created by jose on 4/6/23.
//

#include "Enemy_4.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_4::movement(){
    enemy.move(speed, speed);
    if(enemy.getPosition().x < 0){
        window.clear();
    }
}