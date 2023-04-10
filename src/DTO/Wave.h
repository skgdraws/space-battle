//
// Created by jose on 4/9/23.
//

#ifndef SPACE_BATTLE_WAVW_H
#define SPACE_BATTLE_WAVW_H


#include <vector>
#include "../Enemies/Enemy.h"
#include "../DataStructures/LinkedList.h"

class Wave {
private:
    int spawnTimer;

public:
    std::vector<int> waves;
    LinkedList<Enemy> enemies;

    Wave();
    void display();

};


#endif //SPACE_BATTLE_WAVW_H
