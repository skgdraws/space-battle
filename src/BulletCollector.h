/*
╔══╗───╔╗╔╗───╔╗╔═══╗──╔╗╔╗──────╔╗
║╔╗║───║║║║──╔╝╚╣╔═╗║──║║║║─────╔╝╚╗
║╚╝╚╦╗╔╣║║║╔═╩╗╔╣║─╚╬══╣║║║╔══╦═╩╗╔╬══╦═╗
║╔═╗║║║║║║║║║═╣║║║─╔╣╔╗║║║║║║═╣╔═╣║║╔╗║╔╝
║╚═╝║╚╝║╚╣╚╣║═╣╚╣╚═╝║╚╝║╚╣╚╣║═╣╚═╣╚╣╚╝║║
╚═══╩══╩═╩═╩══╩═╩═══╩══╩═╩═╩══╩══╩═╩══╩╝
 */

#ifndef SPACE_BATTLE_BULLETCOLLECTOR_H
#define SPACE_BATTLE_BULLETCOLLECTOR_H

#include "DataStructures/LinkedList.h"
#include "DataStructures/LinkedList.cpp"
#include <vector>
#include <iostream>
#include "Bullet.h"

/**
 * \brief Maneja las direcciones de memorias asignadas dentro de Lista
 *
 */
class BulletCollector {

    private:
        LinkedList<Node<Bullet>*> memoryList;


    public:
    LinkedList<Bullet*> list;

    void New(Bullet *data);

    void New(Bullet *data, int size);

    void Delete(int pos);

    void print();
};


#endif //SPACE_BATTLE_BULLETCOLLECTOR_H