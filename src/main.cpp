#include <iostream>
#include "stdio.h"
#include "DataStructures/List.cpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

using namespace std;
using namespace sf;

int main() {

    // Window setup
//    RenderWindow window(VideoMode(960, 720), "Screen Setup", Style::Default);
//    window.setFramerateLimit(60);
//
//    // while loop for rendering
//    while (window.isOpen()) {
//
//        Event event;
//
//        while (window.pollEvent(event)) {
//
//            if (event.type == Event::Closed) {
//                window.close();
//            }
//            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape){
//                window.close();
//            }
//
//        }
//
//        // You should Update Values first
//
//        //Then you draw/render (it first clears the screen so that we can update the sprites)
//        window.clear();
//
//        //Displays everything in the window
//        window.display();
//    }
    List<int> lista = *new List<int>;
    lista.insertNode(5);
    Node<int> node1 = *new Node<int>(5);
    lista.insertNode(&node1);
    lista.printList();

    return 0;
}
