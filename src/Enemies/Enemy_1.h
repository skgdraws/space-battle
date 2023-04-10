//
// Created by jose on 4/6/23.
//

#ifndef SPACE_BATTLE_ENEMY_1_H
#define SPACE_BATTLE_ENEMY_1_H

#include "Enemy.h"

/*
 * Concrete Class
 */

class Enemy_1 : public Enemy {
/*
    hp = 200
    speed = 10
    Color: Red
    Dimensions: 50.f, 40.f
 */
public:
    void draw() override;
};


#endif //SPACE_BATTLE_ENEMY_1_H
