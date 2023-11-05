#include <array>
#include <string>
#include <iostream>


void welcome(){

    for ( int i = 0; i < 10; i++){
        if (  (i == 0) || (i== 9)  )
        {
            std::cout << "**************************************\n";
        }
        
        else{
            if (i == 4)
            {
                std::cout << "*     Welcome to the game dawg       *\n";
            }
            
            std::cout << "*                                    *\n";
        }
    }

    // std::cout << "   \n";
    // std::cout << "^^@\n";
    // std::cout << "+ +\n";
    
    
}


