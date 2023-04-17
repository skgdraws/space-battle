//
// Created by jose on 4/16/23.
//

#ifndef SPACE_BATTLE_PAGINATION_H
#define SPACE_BATTLE_PAGINATION_H

#include <iostream>
#include "stdio.h"
#include "Libs/pugixml/src/pugiconfig.hpp"
#include "Libs/pugixml/src/pugixml.hpp"
#include <ctime>

using namespace std;

class Pagination {
private:
    string inUse;

    //Cambiar por archivos XML
    string Stg_1 = "Strategy_1";
    string Stg_2 = "Strategy_2";
    string Stg_3 = "Strategy_3";
    string Stg_4 = "Strategy_4";

    void swap(string std);
    void delay(int secs);

public:
    string inMemory_1;
    string inMemory_2;

    //Functions to test the pagination
    void set();
    void printState();

    string load(string stg);

};


#endif //SPACE_BATTLE_PAGINATION_H
