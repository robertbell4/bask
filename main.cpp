

#include <iostream>

void initializeGame();
void refreshVis();



void initializeGame(){


}



void refreshVis(){

    for ( int i = 0; i < 10; i++){
        if (  (i == 0) || (i== 9)  )
        {
            std::cout << "*********************************\n";
        }
        
        else{
            std::cout << "*                               *\n";
        }
    }
    
    
}




int main(){

    //initializeGame();


    int run = 1;
    while(run){

        //timing

        //gaming

        //display
        refreshVis();
        run--;
        
       }

    std::cout << "              ^ ^ ^@  \n";
    std::cout << "              ++  ++  \n";

    return 0;
}