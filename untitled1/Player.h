//
// Created by danie on 27/11/2026.
//

#ifndef EPIDEMI_GAME_P1_PLAYER_H
#define EPIDEMI_GAME_P1_PLAYER_H
//struct is placed here available for both .c files
typedef struct {              //we write typedef so we dont need struct before calling player
    char player_symbol;       //"P"
    int row_y;                //y coordinate in arena
    int column_x;             //x coordinate inn arena
    int transmission_radius;
}Player;                      //called it player so we can use this alias moving forward

//we also have the function create_player and player_movement so main can call this:
Player create_player(void);
void move_player(Player *p,char movement_input);

#endif //EPIDEMI_GAME_P1_PLAYER_H
