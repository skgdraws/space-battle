//
// Created by skgart on 31/03/23.
//

#ifndef SPACE_BATTLE_PLAYSTATE_H
#define SPACE_BATTLE_PLAYSTATE_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include<cstdlib>
#include "Enemies/Enemy_1.h"

class PlayState {
private:

    // Rendering Variables
    sf::RenderWindow* window;
    sf::Event ev;

    void initVariables();

    void initWindow();

    // Player
    // Waves and Settings
    // Enemies
    // Arduino
    // Skills
    // Score

public:

    PlayState();

    virtual ~PlayState();

    const bool running() const;

    void render();

    void pollEvents();

    void update();
};


#endif //SPACE_BATTLE_PLAYSTATE_H
