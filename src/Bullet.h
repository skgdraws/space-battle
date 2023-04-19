/*
╔══╗───╔╗╔╗───╔╗
║╔╗║───║║║║──╔╝╚╗
║╚╝╚╦╗╔╣║║║╔═╩╗╔╝
║╔═╗║║║║║║║║║═╣║
║╚═╝║╚╝║╚╣╚╣║═╣╚╗
╚═══╩══╩═╩═╩══╩═╝
 */

#ifndef SPACE_BATTLE_BULLET_H
#define SPACE_BATTLE_BULLET_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <iostream>

class Bullet {

private:

    sf::RectangleShape rect;
    int damage;

    void initShape();
    void initVariables();

public:

    // funni constructor
    Bullet();
    virtual ~Bullet();

    void update ();
    void render (sf::RenderTarget *target);

    // functions
};


#endif //SPACE_BATTLE_BULLET_H
