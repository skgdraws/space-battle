#include "PlayState.h"

/**
 * \brief Initializes important gameplay variables needed for the game to run correctly
 */
void PlayState::initVariables(int diff) {

//    openSerialPort();

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
    this->maxBullets = 100 / this->difficulty;
    this->curBullets = this->maxBullets;
    this->bulletSpeed = 1;
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
/**
 * \brief Is in charge of spawning enemies.
 */
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

/**
 * \brief Takes care of the movement of enemies
 */
void PlayState::updateEnemies() {

    for (int i = 0 ; i < this->curWave.getSize() ; i++){
        bool isDeleted = false;

        if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().top <= 0){

            this->curWave.inPosition(i)->data.getShape().setPosition(this->curWave.inPosition(i)->data.getShape().getPosition().x, 0);
        }
        else if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().top + this->curWave.inPosition(i)->data.getShape().getGlobalBounds().height >= 600){

            this->curWave.inPosition(i)->data.getShape().setPosition(this->curWave.inPosition(i)->data.getShape().getPosition().x, 600 - this->curWave.inPosition(i)->data.getShape().getGlobalBounds().height);
        }

        if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().left <= 0 && !isDeleted){

            // std::cout << "Enemy " << i << " is wrapping" << std::endl;
            std::cout << "You got hurt" << endl;

            std::cout << "Enemy " << i << " Positions: ";
            std::cout << this->curWave.inPosition(i)->data.getShape().getPosition().x << ", " << this->curWave.inPosition(i)->data.getShape().getPosition().y << std::endl;

            this->numEnemies--;
            this->maxEnemies--;

            this->curWave.deleteNode(i);
            std::cout << "Current ammount of enemies: " << this->maxEnemies << std::endl;
        }
        for(int j =0; j < this->bullets.list.getSize(); j++){

            if (this->curWave.inPosition(i)->data.getShape().getGlobalBounds().intersects(this->bullets.list.inPosition(j)->data->getShape().getGlobalBounds()) && !isDeleted){
                this->numEnemies--;
                this->maxEnemies--;

                this->curWave.deleteNode(i);
            }
        }
    }
}

void PlayState::updateBullets() {

    for (int i = 0 ; i < this->bullets.list.getSize() ; i++){

        if (this->bullets.list.inPosition(i)->data->getShape().getGlobalBounds().left >= this->window->getSize().x){

            // std::cout << "Enemy " << i << " is wrapping" << std::endl;
            std::cout << "Bullet has been recycled" << endl;

            this->bullets.Delete(i);

        }
    }
}

/**
 * \brief Detects collisions between player and enemies
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
    this->spawnBullets();

    for (int i = 0 ; i < this->curWave.getSize() ; i++){

        this->curWave.inPosition(i)->data.setDifficulty(this->difficulty);
        this->curWave.inPosition(i)->data.update();
    }

    this->player.update(this->window, this->up, this->down);

//    this->sendToArduino(this->wave);

    this->updateEnemies();
    this->playerCollisions();

    for (int j = 0; j < this->bullets.list.getSize(); j++){
        this->bullets.list.inPosition(j)->data->update();
    }

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

    for (int j = 0 ; j < this->bullets.list.getSize() ; j++){

        this->bullets.list.inPosition(j)->data->render(this->window);
    }

    //Displays frame
    this->window->display();
}

///**
// * \brief Establish the communication between the arduino and c++
// */
//void PlayState::openSerialPort(){
//
//    this->serialStream.Open("/dev/ttyACM0");
//
//    try {
//        this->serialStream.SetBaudRate(LibSerial::BaudRate::BAUD_9600);
//    }
//    catch (const LibSerial::OpenFailed &) {
//
//        std::cerr << "The Port did not open correctly" << std::endl;
//    }
//
//    this->serialStream.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);
//    this->serialStream.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);
//    this->serialStream.SetParity(LibSerial::Parity::PARITY_NONE);
//    this->serialStream.SetStopBits(LibSerial::StopBits::STOP_BITS_1);
//
//    while (this->serialStream.rdbuf()->in_avail() == 0){
//        usleep(2000);
//        std::cout << "Waiting for arduino connection" << std::endl;
//    }
//
//    while(this->serialStream.IsDataAvailable()){
//
//        char data_byte;
//
//        this->serialStream.get(data_byte);
//        if(data_byte == 'C'){
//
//            std::cout << "system running \n";
//        }
//    }
//
//    std::cout << "Connected Arduino succesfully" << std::endl;
//}
//
///**
// * \brief Allows to send data from c++ to the arduino
// *
// * @param data
// */
//void PlayState::sendToArduino(int data) {
//
//    this->serialStream << data + 1 << std::endl;
//    this->serialStream.DrainWriteBuffer();
//}
//
///**
// * \brief receive parameters from arduino
// */
//void PlayState::recieveFromArduino() {
//
//    if(serialStream.rdbuf()->in_avail() != 0) {
//
//        usleep(100);
//        int dato = 0;
//
//        while (this->serialStream.rdbuf()->in_avail() != 0){
//
//            char data_byte;
//            serialStream.get(data_byte);
//
//            std::cout << "char pressed: " << data_byte << std::endl;
//
//            if (data_byte == 'u'){
//
//                this->up = data_byte;
//            }
//            else if (data_byte == 'd'){
//
//                this->down = data_byte;
//            }
//            if (int(data_byte) >= 0){
//
//                this->bulletSpeed = int(data_byte);
//            }
//        }
//    }
//}

void PlayState::spawnBullets() {
    //timer shenanigans
    if (this->curBulletsSpeed < this->bulletSpeed){

        this->curBulletsSpeed += 1.f;
    }
    else{
        if (this->bullets.list.getSize() > 0 && this->curBullets != 0){

            this->bullets.New(new Bullet(this->player.getShape().getPosition()), 1);
            this->curBulletsSpeed = 0.f;
            this->curBullets--;
        }
//        else {
//            this->bullets.New(new Bullet(this->player.getShape().getPosition()));
//            this->curBulletsSpeed = 0.f;
//        }
    }
}
