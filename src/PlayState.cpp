#include "PlayState.h"

/**
 * \brief Initializes important gameplay variables needed for the game to run correctly
 */
void PlayState::initVariables() {

    this->waves[0] = 12/2;
    this->waves[1] = 12/2;
    this->waves[2] = 12/2;
    this->waves[3] = 12/2;
    this->waves[4] = 12/2;

    this->endGame = false;
    this->maxEnemiesSpawnTimer = this->waves[0] + 10;
    this->enemiesSpawnTimer = this->maxEnemiesSpawnTimer;
    this->maxEnemies = 10;
    this->points = 0;
}

/**
 * \brief Initializes the App's render window
 */
void PlayState::initWindow() {

    this->videoMode = sf::VideoMode(800, 600);
    this->window = new sf::RenderWindow(this->videoMode, "Space Wars", sf::Style::Close | sf::Style::Titlebar);
    this->window->setFramerateLimit(60);
}

// Constructors and Destructors
/**
 * \brief Class that handles all of the game's logic
 */
PlayState::PlayState(){

    this->initVariables();
    this->initWindow();
}

PlayState::~PlayState(){

    delete this->window;
}

/**
 * \brief Returns the value true if the game is running. Used for the game's while loop
 *
 * @return bool
 */
const bool PlayState::running() const {

    return this->window->isOpen();
}

/**
 * \brief Made to handle SFML's Event system. Is in charge of checking if you exit the program
 */
void PlayState::pollEvents() {

    while (this->window->pollEvent(this->ev)){

        switch(this->ev.type){

            case sf::Event::Closed:
                this->window->close();
                break;

            case sf::Event::KeyPressed:
                if (this->ev.key.code == sf::Keyboard::Escape){
                    this->window->close();
                }

                break;

        }
    }
}

void PlayState::spawnEnemies() {

   //timer shenanigans
   if (this->enemiesSpawnTimer < this->maxEnemiesSpawnTimer){

       this->enemiesSpawnTimer += 1.f;
   }
   else{
       if (this->curWave.getSize() < this->maxEnemies){

           this->curWave.insertNode(*new Enemy());
           this->enemiesSpawnTimer = 0.f;
       }
   }
}

void PlayState::updateEnemies() {


}

void PlayState::updateBullets() {

    // Using the Linked List/Garbage Collector check if the player's bullets exit the screen and add it to the garbage collector
}

/**
 * Updates values at runtime. Is in charge of input and changing positions to sprites as well as dealing
 * with the game's logic in it's entirety
 */
void PlayState::update() {

    this->pollEvents();
    this->spawnEnemies();

    for (int i = 0 ; i < this->curWave.getSize() ; i++){

        // std::cout << *this->curWave.inPosition(i)->data << std::endl;
        this->curWave.inPosition(i)->data.update();
    }

    this->player.update(this->window);
    // this->updateCollisions();

}

/**
 * \brief Handles the rendering of the entire game displaying each sprite after being updated
 *
 */
void PlayState::render() {

    // Clears previous frame
    this->window->clear();

    //Render stuff
    this->player.render(this->window);

    for (int i = 0 ; i < this->curWave.getSize() ; i++){

        this->curWave.inPosition(i)->data.render(this->window);
    }

    //Displays frame
    this->window->display();
}
