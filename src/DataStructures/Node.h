/*
╔═╗─╔╗────╔╗
║║╚╗║║────║║
║╔╗╚╝╠══╦═╝╠══╗
║║╚╗║║╔╗║╔╗║║═╣
║║─║║║╚╝║╚╝║║═╣
╚╝─╚═╩══╩══╩══╝
 */

#ifndef SPACE_BATTLE_NODE_H
#define SPACE_BATTLE_NODE_H


template <class T> class Node {
public:
    T data;
    Node<T>* next;

    explicit Node(T data){
        this->data = data;
        this->next = nullptr;
    }
};

#endif //SPACE_BATTLE_NODE_H
