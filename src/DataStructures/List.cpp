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

template <class T> class List{
    /*
     * La clase lista define una lista enlazada simple que puede admitir cualquier tipo de dato
     * Al mismo tiempo, tiene un comportamiento de cola, FIFO: First In First Out
     */
    Node<T>* head;
    Node<T>* tail;

public:
    List(){
        head = nullptr;
        tail = nullptr;
    }

    void insertNode(T data){//Generar un metodo para insertar nodos
        /**
         * Inserta un elemento al final de la lista
         *
         * @param: data
         * @return: null
         */
        Node<T>* node = new Node<T>(data);
        insertNode(node);
    }

    void insertNode(Node<T>* _node){
        /**
         * Inserta un elemento al final de la lista
         * Metodo sobrecargado
         *
         * @param: Node
         * @return: null
         */
        if(head != nullptr){
            tail->next = _node;
            tail = _node;
        }else{
            head = _node;
            tail = _node;
        }
        cout << "Inserted element: " << _node->data << "\n\t in: " << _node << endl;
    }

    Node<T>* deleteFirstNode(){ //Elimina el primer elemento y lo devuelve
        /**
         * Elimina el primer elemento de la lista
         *
         * @param: null
         * @return: Node*
         */
        Node<T>* temp = head;
        head = head->next;
        return temp;
    }

    void printList(){
        Node<T>* node = head;
        cout << "\nLinked List: \n\t";

        while(node != nullptr){
            cout << node->data << ", ";
            node = node->next;
        }
        cout << endl;
    }
};