//
// Created by skgart on 17/04/23.
//

#ifndef SPACE_BATTLE_BULLETCOLLECTOR_H
#define SPACE_BATTLE_BULLETCOLLECTOR_H

#include "DataStructures/LinkedList.h"
#include <vector>
#include <iostream>
#include "Bullet.h"

/**
 * \brief Maneja las direcciones de memorias asignadas dentro de Lista
 *
 */
class BulletCollector {

    private:
        std::vector<Node<Bullet>*> memoryVector;
        LinkedList<Bullet*> list;

    public:


    void New(Bullet *data);

    void New(Bullet *data, int size);

    void Delete(int data);

    Bullet *print();
};


#endif //SPACE_BATTLE_BULLETCOLLECTOR_H