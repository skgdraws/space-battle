

#include "BulletCollector.h"

/**
 * \brief Allocate the value in a previously freed memory space
 *
 * @param data
 * @return
 */
void BulletCollector::New(Bullet *data) {

    auto* ptr = this->memoryList.inPosition(0);
    std::cout << "MEMORY HAS BEEN ALLOCATED" << std::endl;

    this->list.reinsertNode(data, (Node<Bullet*>*) ptr);

}

/**
 * \brief Allocate the value in a new memory space
 *
 * @param data
 * @param size
 * @return
 */
void BulletCollector::New(Bullet *data, int size) {

    auto* ptr = malloc(size * sizeof(Node<Bullet>));
    std::cout << "MEMORY HAS BEEN ALLOCATED" << std::endl;

    this->list.reinsertNode(data, (Node<Bullet*>*) ptr);
}

/**
 * \brief Takes the deleted node and saves it to the garbage collector
 *
 * @param data
 * @return
 */
void BulletCollector::Delete(int pos){

    auto* dir = list.deleteNode(pos);
    this->memoryList.insertNode( (Node<Bullet>*) (dir));
    std::cout <<"the node in " << dir << " has been trashed" << std::endl;
}

void BulletCollector::print(){

    list.printList();

    std::cout << '[';
    for(int i = 0; i < memoryList.getSize(); i++){

        std::cout << memoryList.inPosition(i) << ', ';
    }

    std::cout << ']' << std::endl;
}