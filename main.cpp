#include <cstdlib>    // rand
#include <iostream>   // cout, cin
#include <thread>     // sleep
#include <chrono>     // literals

int main() {

    /* Initialising and declaring variables */
    int guess;

    srand(static_cast<unsigned int>(time(0))); 
    int randNumber = rand()  % 100 + 1;

    float encodedNumber;

    /* Making a encrypted copy of the number */
    encodedNumber = static_cast<float>(randNumber) / 10;

    std::cout << randNumber << "\n";

    /* Main game */
    do {
    
        std::cout << "Enter a number: ";
        std::cin >> guess;
        std::cout << "\n";
        
        if (randNumber > guess) {
            std::cout << "Guess higher \n";
        } else if (randNumber < guess) {
            std::cout << "Guess lower \n";
        }
        
    } while (randNumber != guess);

    encodedNumber = encodedNumber * 10;

    if (randNumber != static_cast<int>(encodedNumber)) {
        std::cout << randNumber << " , " << encodedNumber << "\n";
        std::cout << "Memory change detected.";
        std::this_thread::sleep_for(std::chrono::seconds(3));  

    } else {
        std::cout << "Well done, you won without cheating.";
        std::this_thread::sleep_for(std::chrono::seconds(3));  
    }

}
