#include <iostream>
#include "stdio.h"
#include "PlayState.h"

using namespace std;
using namespace sf;

int main() {

    //Game init
    PlayState playstate;

    // while loop to let the game run
    while (playstate.running()) {

        // Update
        playstate.update();

        // Rendering
        playstate.render();
    }

    return 0;
}
