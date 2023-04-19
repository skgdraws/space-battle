#include "PlayState.h"

/**
 * \brief Initializes important gameplay variables needed for the game to run correctly
 */
void PlayState::initVariables(int diff) {

    // Wave Setup
    this->waves[0] = 10;
    this->waves[1] = 12;
    this->waves[2] = 14;
    this->waves[3] = 16;
    this->waves[4] = 18;

    this->endGame = false;
    this->difficulty = diff;
    this->wave = 0;
    this->maxEnemiesSpawnTimer = this->waves[0] * 15 / diff;
    this->enemiesSpawnTimer = this->maxEnemiesSpawnTimer;
    this->maxEnemies = 10;
    this->numEnemies = -1;
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
PlayState::PlayState(int diff){
    if(diff <= 3 && diff > 0){

        this->initVariables(diff);
        this->initWindow();
    }
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

    if (wave <= 4){

        if (this->numEnemies == 0 && this->maxEnemies == 0){

            wave++;
            this->maxEnemies = this->waves[wave];

            std::cout << "Current Wave: " << wave << "/5\n" << std::endl;
        }
    }
    else{

        this->window->close();
    }

   //timer shenanigans
   if (this->enemiesSpawnTimer < this->maxEnemiesSpawnTimer){

       this->enemiesSpawnTimer += 1.f;
   }
   else{
       if (this->curWave.getSize() < this->maxEnemies){

           this->curWave.insertNode(*new Enemy());
           this->enemiesSpawnTimer = 0.f;

           if (numEnemies <= 0)
               this->numEnemies = 1;
           else
               this->numEnemies++;
       }
   }
}

void PlayState::updateEnemies() {

    for (int i = 0 ; i < this->curWave.getSize() ; i++){

        if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().top <= 0){

            this->curWave.inPosition(i)->data.getShape().setPosition(this->curWave.inPosition(i)->data.getShape().getPosition().x, 0);
        }
        else if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().top + this->curWave.inPosition(i)->data.getShape().getGlobalBounds().height >= 600){

            this->curWave.inPosition(i)->data.getShape().setPosition(this->curWave.inPosition(i)->data.getShape().getPosition().x, 600 - this->curWave.inPosition(i)->data.getShape().getGlobalBounds().height);
        }

        if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().left <= 0){

            // std::cout << "Enemy " << i << " is wrapping" << std::endl;
            std::cout << "You got hurt" << endl;

            std::cout << "Enemy " << i << " Positions: ";
            std::cout << this->curWave.inPosition(i)->data.getShape().getPosition().x << ", " << this->curWave.inPosition(i)->data.getShape().getPosition().y << std::endl;

            this->numEnemies--;
            this->maxEnemies--;

            this->curWave.deleteNode(i);
            std::cout << "Current ammount of enemies: " << this->maxEnemies << std::endl;
        }
    }
}

void PlayState::updateBullets() {

    // Using the Linked List/Garbage Collector check if the player's bullets exit the screen and add it to the garbage collector
}

/**
 * \brief Detects collisions between player and enemies
 *
 */
void PlayState::playerCollisions() {
    for (int i = 0; i < this->curWave.getSize(); i++){
        if(this->curWave.inPosition(i)->data.getShape().getGlobalBounds().intersects(this->player.getShape().getGlobalBounds())){
            this->player.takeDamage(2);

            this->numEnemies--;
            this->maxEnemies--;

            this->curWave.deleteNode(i);

            std::cout << this->player.getHP();
        }
    }
}

/**
 * Updates values at runtime. Is in charge of input and changing positions to sprites as well as dealing
 * with the game's logic in it's entirety
 */
void PlayState::update() {

    this->pollEvents();
    this->spawnEnemies();

    for (int i = 0 ; i < this->curWave.getSize() ; i++){

        this->curWave.inPosition(i)->data.setDifficulty(this->difficulty);
        this->curWave.inPosition(i)->data.update();
    }

    this->player.update(this->window);

    this->updateEnemies();
    this->playerCollisions();
    this->updateBullets();

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
