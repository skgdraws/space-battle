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

string Pagination::load(string stg) {
    if (inMemory_1.empty()){
        inMemory_1 = stg;
    } else if (inMemory_2.empty()){
        inMemory_2 = stg;
    } else { this->swap(stg); }

    lastLoaded = stg;
    this->printState();
    return stg;
}

void Pagination::swap(string stg) {
    if(lastLoaded != stg){
        if(lastLoaded == inMemory_1 && stg != inMemory_2) {
            inMemory_2.clear();
            delay(2);
        } else if(lastLoaded == inMemory_2&& stg != inMemory_1) {
            inMemory_1.clear();
            delay(2);
        }
        lastLoaded = stg;
        this->load(stg);
    }
}

void Pagination::delay(int secs){
    for(int i = (time(NULL)+secs); time(NULL) != i; time(NULL));
}

void Pagination::printState() {
    cout << "In disk: \n\t" << Stg_1 << ", " << Stg_2 << ", "<< Stg_3 << ", " << Stg_4 << "\n";
    cout << "In Memory:\n\t" << inMemory_1 << ", " << inMemory_2 << endl;
}
