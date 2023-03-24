//
// Created by jose on 3/23/23.
//

#ifndef SPACE_BATTLE_NODE_H
#define SPACE_BATTLE_NODE_H


template <class T> class Node {
public:
    T data;
    Node<T>* next;

    explicit Node(T _data){
        this->data = _data;
        this->next = nullptr;
    }
};


#endif //SPACE_BATTLE_NODE_H
