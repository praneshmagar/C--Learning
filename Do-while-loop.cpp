#include <iostream>

int main()
{
    /*
    Does some block of code first then 
    repeat again if condition is true
    */

    int number;

    do{ // do the code once then check condition if not true run again till condition is true
        std::cout <<"Enter a positive #";
        std::cin >> number;
    }while(number < 0); //once condition is true it will continue

    std::cout << "The number is " << number;


    /*
    while user is playing a game
    and they want to play the game once the code is done
    if the user wants to play one more time
    do the code again
    */



    return 0;
}