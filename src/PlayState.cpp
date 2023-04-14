#include "PlayState.h"

void PlayState::initVariables() {

    this->endGame = false;
    this->spawnTimerMax = 10.f;
    this->spawnTimer = this->spawnTimerMax;
    this->maxEnemies = 10;
    this->points = 0;
}

void PlayState::initWindow() {

    this->videoMode = sf::VideoMode(800, 600);
    this->window = new sf::RenderWindow(this->videoMode, "Space Wars", sf::Style::Close | sf::Style::Titlebar);
    this->window->setFramerateLimit(60);
}

// Constructors and Destructors
PlayState::PlayState(){

    this->initVariables();
    this->initWindow();
}

PlayState::~PlayState(){

    delete this->window;
}

// Functions
const bool PlayState::running() const {

    return this->window->isOpen();
}

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

void PlayState::spawnSwagBalls() {

    //timer shennanigans
    if (this->spawnTimer < this->spawnTimerMax){

        this->spawnTimer += 1.f;
    }
    else{

        if (this->enemies.size() < this->maxEnemies){

            this->enemies.push_back(SwagBall(*this->window, rand()%SwagBallTypes::NROFTYPES));
            this->spawnTimer = 0.f;
        }
    }
}

void PlayState::updateCollisions() {

    for (int i = 0; i < enemies.size(); i++){

        if (this->player.getShape().getGlobalBounds().intersects(this->enemies[i].getShape().getGlobalBounds())){

            switch(this->enemies[i].getType()) {

                case SwagBallTypes::DEFAULT:
                    // Adds the point
                    this->points++;
                    std::cout << this->points << std::endl;
                    break;

                case SwagBallTypes::DAMAGING:
                    this->player.takeDamage(1);
                    break;

                case SwagBallTypes::HEALING:
                    // Adds the point
                    this->points++;
                    this->player.healHP(1);
                    break;
            }

            // Removes the ball
            this->enemies.erase(this->enemies.begin() + i);
        }
    }
}

void PlayState::update() {

    this->pollEvents();
    this->spawnSwagBalls();

    for (auto i : this->enemies){

        i.update();
    }

    this->player.update(this->window);
    // this->updateCollisions();

}

void PlayState::render() {

    this->window->clear();

    //Render stuff
    this->player.render(this->window);

    for (auto i : this->enemies){


        i.render(this->window);
    }

    //Displays frame
    this->window->display();
}
