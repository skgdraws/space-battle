//
// Created by jose on 4/5/23.
//

#include "Enemy0.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>


using namespace sf;
using namespace std;

/*
    Constructor
 */
Enemy0::Enemy0() {

}

/*
    Internal function
 */

void Enemy0::movement() {
    while(this->enemy.getPosition().x > 0){
        this->enemy.move(Vector2f(-10, 0));
    }
}

void Enemy0::draw() {

}

void Enemy0::update() {
    if(spawnTimer < 30){
        spawnTimer++;
    }
    if(spawnTimer >= 30) {
        //Generate enemies
        spawnTimer = 0;
    }

    movement();
}