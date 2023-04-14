#include "PlayState.h"

int main() {

    // Initialize Random Seed
    srand(static_cast<unsigned>(time(0)));

    // Initialize Game Obj
    PlayState playstate;

    // Game Loop
    while (playstate.running()){

        playstate.update();
        playstate.render();
    }

    // End of Application
    return 0;
}