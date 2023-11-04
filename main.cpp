

#include <iostream>

void initializeGame();
void refreshVis();



void initializeGame(){


}



void refreshVis(){

    for ( int i = 0; i < 10; i++){
        if (  (i == 0) || (i== 9)  )
        {
            std::cout << "******************************      \n" << std::endl;
        }
        
        else{
            std::cout << "                                    \n" << std::endl;
        }
    }
    
    
}




int main(){

    initializeGame();


    int run = 10;
    while(run){


        refreshVis();
        run--;
        
       }

    return 0;
}