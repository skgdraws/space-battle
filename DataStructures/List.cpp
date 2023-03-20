#include "Node.cpp"
#include <iostream>
#include "stdio.h"
using namespace std;

/*
╔╗──────╔╗
║║─────╔╝╚╗
║║──╔╦═╩╗╔╝
║║─╔╬╣══╣║
║╚═╝║╠══║╚╗
╚═══╩╩══╩═╝
 */

class List{ //La clase tiene una funcion de cola, FIFO: First In First Out
    Node* head;
    Node* tail;

public:
    List(){
        head = nullptr;
        tail = nullptr;
    }

    void insertNode(int data){
        /**
         * Inserta un elemento al final de la lista
         *
         * @param: data
         * @return: null
         */
        Node* node = new Node(data);
        if(head != nullptr){
            tail->next = node;
            tail = node;
        }else{
            head = node;
            tail = node;
        }
        cout << "Inserted element: " << node->data << "\n\t in: " << node << endl;
    }

    Node* deleteFirstNode(){ //Elimina el primer elemento y lo devuelve
        /**
         * Elimina el primer elemento de la lista
         *
         * @param: null
         * @return: Node*
         */
        Node* temp = head;
        head = head->next;
        return temp;
    }

    void printList(){
        Node* node = head;
        cout << "\nLinked List: \n\t";

        while(node != nullptr){
            cout << node->data << ", ";
            node = node->next;
        }
        cout << endl;
    }
};