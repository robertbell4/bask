#include <iostream>

void checkInput(void) {

    char myChar;

    std::cout << "Please enter a single character: ";
    
    // Read a single character
    std::cin >> myChar;

    // Output the character
    std::cout << "You entered: " << myChar << " \n";

    return ;//  myChar;
}