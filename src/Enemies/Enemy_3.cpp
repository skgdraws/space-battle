//
// Created by jose on 4/6/23.
//

#include "Enemy_3.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

void Enemy_3::movement(){
    enemy.move(speed - 5.f, 0.f);
    if(enemy.getPosition().x < 0){
        window.clear();
    }
}