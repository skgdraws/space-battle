//
// Created by jose on 4/16/23.
//

#ifndef SPACE_BATTLE_PAGINATION_H
#define SPACE_BATTLE_PAGINATION_H

#include <iostream>
#include "stdio.h"
#include <ctime>

using namespace std;

class Pagination {
private:
    string lastLoaded;

    string Stg_1 = "Strategy 01";
    string Stg_2 = "Strategy 02";
    string Stg_3 = "Strategy 03";
    string Stg_4 = "Strategy 04";

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
