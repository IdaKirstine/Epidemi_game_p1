#include <stdio.h>
#include <stdlib.h>
#include "Player.h"


int main(void) {


    //til PLayer_creation:
    Player current_player=create_player(); //current_player is set to create_player from Player_creation

    //til Player_movement, nix pille:
    char movement_input;     //variable for input
    scanf(" %c", &movement_input); //input is scanned and is saved in input, space eliminates possible whitespace
    move_player(&current_player,movement_input);//move_player funktion,input and current player send with



    return 0;
}
