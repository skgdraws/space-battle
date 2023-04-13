#ifndef DRAGGINGBALLS_GAME_H
#define DRAGGINGBALLS_GAME_H

#include <ctime>
#include "Player.h"

class PlayState {

private:

    sf::VideoMode videoMode;
    sf::RenderWindow* window;
    bool endGame;

    sf::Event ev;

    Player player;

    // Enemy logic
    float spawnTimerMax;
    float spawnTimer;
    int waveNumber;

    int points;
    sf::Font font;
    sf::Text guiText;

    void initVariables();
    void initWindow();

public:

    // Constructors and Destructors
    PlayState();
    ~PlayState();

    // Accessors
    const bool running() const;

    // Modifiers

    // Functions
    void pollEvents();
    void spawnSwagBalls();
    void updateCollisions();
    void update();
    void render();
};


#endif //DRAGGINGBALLS_GAME_H
