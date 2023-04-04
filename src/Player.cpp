//
// Created by skgart on 31/03/23.
//

#include "Player.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

/*
    Constructor
 */
Player::Player() {


}


/*
    Internal Functions
 */
void Player::getSkills(){

    // Paging is fun /s
}

/**
 * \brief function in charge of monitoring inputs from the keyboard.
 * Updates the internal values of the class to check
 *
 */
void Player::checkInputs() {

    // Checks inputs when pressing Up
    if (Keyboard::isKeyPressed(Keyboard::S)){

        this->pressDown = true;
        cout << "the down button is pressed" << endl;
    }
    else{
        this->pressDown = false;
    }

    // Checks inputs when pressing Down
    if (Keyboard::isKeyPressed((Keyboard::W))){

        this->pressUp = true;
        cout << "the up button is pressed" << endl;
    }
    else{
        this->pressUp = false;
    }
}

void Player::movement() {

    if (this->pressDown){

        this->hitbox.move(Vector2f(0, 10));
    }

    if (this->pressUp){

        this->hitbox.move(Vector2f(0, -10));
    }
}

void Player::draw() {


}

/**
 * \brief Function in charge of updating values repeatedly.
 * It should only be called during the rendering process
 */
void Player::update() {

    checkInputs();
    movement();
}