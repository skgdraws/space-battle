//
// Created by skgart on 31/03/23.
//

#include "PlayState.h"

void PlayState::initVariables() {

    this->window = nullptr;

}

void PlayState::initWindow() {

    this->window = new sf::RenderWindow(sf::VideoMode(960, 720), "Space Wars", sf::Style::Titlebar | sf::Style::Close);
}

// Constructor
PlayState::PlayState() {

    this->initVariables();
    this->initWindow();
}

PlayState::~PlayState() {

    delete this->window;
}

// Accessors ???
const bool PlayState::running() const {

    return this->window->isOpen();
}

// Functions
void PlayState::pollEvents() {

    // Polling Events
    while (this->window->pollEvent(this->ev)) {

        // Cases we want to check
        switch (this->ev.type) {
            case sf::Event::Closed:
                window->close();
                break;

            case sf::Event::KeyPressed:
                if (this->ev.key.code == sf::Keyboard::Escape){
                    this->window->close();
                }
                break;
        }

    }
}

void PlayState::update() {

    this->pollEvents();
}

void PlayState::render() {

    // Clears Screen
    this->window->clear();

    // Finishes the rendering
    this->window->display();
}
