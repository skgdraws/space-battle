//
// Created by jose on 4/6/23.
//

#ifndef SPACE_BATTLE_ENEMY_2_H
#define SPACE_BATTLE_ENEMY_2_H

#include "Enemy.h"

/*
 * Concrete Class
 */

class Enemy_2 : public Enemy {
/*
    hp = 150
    speed = 15
    Color: Blue
    Dimensions: 40.f, 50.f
 */
public:
    void movement() override;

};


#endif //SPACE_BATTLE_ENEMY_2_H
