#include <iostream>

int main(){

    // && check if two conditions are true 
    //||check if at least one of two conditions is true
    //! reverses the logitcal state of its operand

   /* int temp;
    std::cout <<"Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temp is good!";
    }
    else{
        std::cout << "The temp is bad!";
    } */

    int speedlimit;
    std::cout <<"Enter the speed of your car! ";
    std::cin >> speedlimit;

    if(speedlimit >= 30 && speedlimit <= 60){
        std::cout <<"You are at the speed limit";
    }
    else if(speedlimit>60){
        std::cout <<"You are above the speed limit";
    }
    else{
        std::cout <<"You are very slow";
    }
    return 0;
}