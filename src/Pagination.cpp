//
// Created by jose on 4/16/23.
//

#include "Pagination.h"

void Pagination::set() {
    int value;
    cout << "Ingrese un valor: ";
    cin >> value;
    if(value == 1){
        this->load(Stg_1);
    } else if(value == 2){
        this->load(Stg_2);
    } else if(value == 3){
        this->load(Stg_3);
    } else if(value == 4) {
        this->load(Stg_4);
    } else{
        cout << "No se admite el valor ingresado\n\n";
        this->set();
    }
}

/**
 * \brief The algorithm allocate a page, Strategy, in a memory space; only if a memory space is empty.
 * If both memory space are occupied, it calls swap() method
 *
 * @param string
 * @return string
 */
void Pagination::load(string stg) {
    if (inMemory_1 == nullptr){
        *inMemory_1 = stg;
    } else if (inMemory_2 == nullptr){
        *inMemory_2 = stg;
    } else { this->swap(stg); }

    *inUse = stg;
    //this->printState();
}

/**
 * \brief Verifies that the page entered is different from the one that is in use. If the condition is met,
 * checks the memory space is being used, to empty free memory space. This action causes a delay in the operation.
 * Once the memory space is freed, it returns to the load() method.
 *
 * @param string
 */
void Pagination::swap(string stg) {
    if(*inUse != stg){
        if(*inUse == *inMemory_1 && stg != *inMemory_2) {
            inMemory_2 = nullptr;
            delay(2);
        } else if(inUse == inMemory_2&& stg != *inMemory_1) {
            inMemory_1 = nullptr;
            delay(2);
        }
        *inUse = stg;
        this->load(stg);
    }
}

string Pagination::getPage(){
    return *inUse;
}

void Pagination::delay(int secs){
    for(int i = (time(NULL)+secs); time(NULL) != i; time(NULL));
}

void Pagination::printState() {
    cout << "In disk: \n\t" << Stg_1 << ", " << Stg_2 << ", "<< Stg_3 << ", " << Stg_4 << "\n";
    cout << "In Memory:\n\t" << inMemory_1 << ", " << inMemory_2 << endl;
}
