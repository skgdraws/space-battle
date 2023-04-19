#include "PlayState.h"
#include <iostream>

int main() {

    // Initialize Random Seed
    srand(static_cast<unsigned>(time(0)));

    // Checking difficulty options
    int difficulty;

    std::cout << "Select Difficulty \n"
                 "1 - Easy\n"
                 "2 - Medium\n"
                 "3 - Expert" << std::endl;

    std::cin >> difficulty;

    // Initialize Game Obj
    PlayState playstate(difficulty);

    // Game Loop
    while (playstate.running()) {

        playstate.update();
        playstate.render();
    }

    // End of Application
    return 0;
}