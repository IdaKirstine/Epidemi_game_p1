#include <stdio.h>
#include "Player.h"


//1. Player start-position, ask group next time
//2. Player symbol displayed by "P"
//3. Transmitting radius towards NPC's



//example on current_player creation, starts in the top left corner of map, displayed by P, transmission radius 3
Player create_player(void) {
    Player current_player={'P',0,0,3};//tells current position of player

    return current_player;
}

