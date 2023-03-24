//
// Created by jose on 3/23/23.
//

#include "List.h"
#include <iostream>
#include "stdio.h"
using namespace std;

template<class T>
void List<T>::insertNode(T data) {
    Node<T>* node = new Node<T>(data);
    insertNode(node);
}

template<class T>
void List<T>::insertNode(Node<T> *_node) {
    if(head != nullptr){
        tail->next = _node;
        tail = _node;
    }else{
        head = _node;
        tail = _node;
    }
}

template<class T>
Node<T> *List<T>::deleteFirstNode() {
    Node<T>* temp = head;
    head = head->next;
    return temp;
}

template<class T>
void List<T>::printList() {
    Node<T>* node = head;
    cout << "\nLinked List: \n\t";

    while(node != nullptr){
        cout << node->data << ", ";
        node = node->next;
    }
    cout << endl;
}
