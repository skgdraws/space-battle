//
// Created by jose on 4/6/23.
//

#ifndef SPACE_BATTLE_ENEMY_3_H
#define SPACE_BATTLE_ENEMY_3_H

#include "Enemy.h"

/*
 * Concrete Class
 */

class Enemy_3 : public Enemy {
/*
    hp = 400
    speed = 5
    Color: Green
    Dimensions: 75.f, 60.f
 */
public:
    void movement() override;

};


#endif //SPACE_BATTLE_ENEMY_3_H
