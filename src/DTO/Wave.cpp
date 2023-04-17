#include "Wave.h"

Wave::Wave() {// For now, when the difficulty sets in, rewrite the constructor.
    this->spawnTimer = 30;

    this->waves.push_back(30);
    this->waves.push_back(35);
    this->waves.push_back(40);
    this->waves.push_back(45);
    this->waves.push_back(50);
}

void Wave::display() {

}
