
// including libraries
#include <iostream>
#include <string>

//including self created header files
//no need to include .h files when compiling if included here
#include "display.hpp" //alows me to call functions from display.hpp 
#include "tile.hpp"
#include "map.hpp"
#include "controls.hpp"
#include "lizard.hpp"

void initializeGame(){
    welcome();
}


int main(){

    initializeGame();
    Map mymap;
    //std::cin >> name; //input

    mymap.printMap();
    Tile player_tile("     "," ^^@"," ++ ");
    Lizard player(&player_tile);

    int run = 18;
    int x = 0;
    char input = 0;
    while(run){

        mymap.tiles[3][x] = *(player.getTile());


        input = checkInput();
        //gaming

        //display
        mymap.printMap();
        x++;
        run--;
        
       }

    return 0;
}