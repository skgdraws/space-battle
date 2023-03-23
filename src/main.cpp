#include <iostream>
#include "stdio.h"
#include "DataStructures/List.cpp"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main(){

    // Window setup
    RenderWindow window(VideoMode(1280, 720), "Screen Setup", Style::Default);
    window.setFramerateLimit(60);

    // while loop for rendering
    while (window.isOpen()){

        Event event;

        while (window.pollEvent(event)){
            if (event.type == Event::Closed){
                window.close();
            }
        }

        // You should Update Values first

        //Then you draw/render (it first clears the screen so that we can update the sprites)
        window.clear();

        //Displays everything in the window
        window.display();
    }

    return 0;
}

/*
int main(){
    cout << "Hello, World!" << endl;

    List<int> lista = *new List<int>();
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
}*/
