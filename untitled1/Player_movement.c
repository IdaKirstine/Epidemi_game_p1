#include "Player.h"
#include <stdio.h>
//we include player_creations


// 1. Recieve user_input towards movements "WASD"(in main)
// 2. Detect which direction p moves based on input (maybe switch)
// 3. Calculate new position in arena
// 4. Control position, see if its correct
// 5. Update players position and send to arena











void move_player(Player *p,char movement_input) {  //Player *p is a pointer to current player
    int row_y_change =0;     //player position change y coordinates
    int column_x_change =0;  //player position change x coordinate

    //2. the following switch takes input in char, and returns changes in either row_y_change or columns_x_change
    switch (movement_input) {
        case 'w':  //up
            row_y_change=-1;
            break;
        case 's':  //down
            row_y_change=+1;
            break;
        case 'a':  //left
            column_x_change=-1;
            break;
        case 'd':  //right
            column_x_change=+1;
            break;
    } //returns changes



    //3. now this will calculate the new position
    int new_row=p->row_y + row_y_change;              //calculates new row position for player, stores in new_row
    int new_column=p->column_x + column_x_change;     //calculates new column position for player, stores in new_column

    //4. control player position is inside arena

    //5.if control is good, then update player position


    p->row_y=new_row;      //saves the new y-coordinate in player row_y
    p->column_x=new_column;//saves the new x-coordinate in player column_x


}
