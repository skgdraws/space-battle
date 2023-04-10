//
// Created by jose on 4/6/23.
//

#ifndef SPACE_BATTLE_ENEMY_4_H
#define SPACE_BATTLE_ENEMY_4_H

#include "Enemy.h"

/*
 * Concrete Class
 */

class Enemy_4 : public Enemy {
/*
    hp = 150
    speed = 10
    Color: Magenta
    Dimensions: 50.f, 40.f
 */
public:
    void draw() override;
    void movement() override;

};


#endif //SPACE_BATTLE_ENEMY_4_H
