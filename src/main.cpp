#include <iostream>
#include "stdio.h"
#include "../DataStructures/List.cpp"
using namespace std;

int main(){
    cout << "Hello, World!" << endl;

    List lista = *new List();
    lista.insertNode(1);
    lista.insertNode(2);
    lista.insertNode(3);
    lista.insertNode(4);
    lista.insertNode(5);
    lista.insertNode(6);
    lista.insertNode(7);
    lista.insertNode(8);
    lista.insertNode(9);
    lista.insertNode(0);

    lista.printList();
    lista.deleteFirstNode();
    lista.printList();
    lista.deleteFirstNode();
    lista.printList();
    lista.deleteFirstNode();
    lista.printList();
    return 0;
}