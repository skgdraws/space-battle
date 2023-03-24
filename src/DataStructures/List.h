//
// Created by jose on 3/23/23.
//

#ifndef SPACE_BATTLE_LIST_H
#define SPACE_BATTLE_LIST_H


#include "Node.h"

template <class T> class List {
Node<T>* head;
Node<T>* tail;

public:
    List(){
        head = nullptr;
        tail = nullptr;
    }
    void insertNode(T data);
    void insertNode(Node<T>* _node);
    Node<T>* deleteFirstNode();
    void printList();
};


#endif //SPACE_BATTLE_LIST_H
