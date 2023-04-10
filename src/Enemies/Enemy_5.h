//
// Created by jose on 4/6/23.
//

#ifndef SPACE_BATTLE_ENEMY_5_H
#define SPACE_BATTLE_ENEMY_5_H

#include "Enemy.h"

/*
 * Concrete Class
 */

class Enemy_5 : public Enemy {
/*
    hp = 150
    speed = 10
    Color: Cyan
    Dimensions: 30.f, 25.f
 */
public:
    void draw() override;
};

#endif //SPACE_BATTLE_ENEMY_5_H
