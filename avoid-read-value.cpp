#include <cstdlib>    // rand
#include <iostream>   // cout, cin
#include <thread>     // sleep
#include <chrono>     // literals

int main() {

    /* -> Initialising and declaring variables  */

    int guess;
    srand(static_cast<unsigned int>(time(0))); 
    int randNumber1 = rand()  % 50 + 1;
    int randNumber2 = rand()  % 50 + 1;

    /* --> 'Encrypting' the number by dividing it by 420 */
    float encodedNumber = ((static_cast<float>(randNumber1)  + static_cast<float>(randNumber2)) / 420);
    
    /* -> Main game */
    do {
    
        std::cout << "Enter a number: ";
        std::cin >> guess;
        std::cout << "\n";
        
        if ((randNumber1 + randNumber2) > guess) {
            std::cout << "Guess higher \n";
        } else if ((randNumber1 + randNumber2) < guess) {
            std::cout << "Guess lower \n";
        }
        
    } while ((randNumber1 + randNumber2) != guess);


    /* -> Decrypt the number by multipling it by 420 */
    encodedNumber = encodedNumber * 420;

    /* -> Check whether the copy matches the guess */

    if ((randNumber1 + randNumber2) != static_cast<int>(encodedNumber)) {
        std::cout << (randNumber1 + randNumber2) << " , " << encodedNumber << "\n";
        std::cout << "Memory change detected.";
        std::this_thread::sleep_for(std::chrono::seconds(3));  

    } else {
        std::cout << "Well done, you won without cheating.";
        std::this_thread::sleep_for(std::chrono::seconds(3));  
    }

}
