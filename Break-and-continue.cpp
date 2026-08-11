#include <iostream>

int main(){
     /* 
    break = break out of a loop
    Continue = skip current iteration
    */

    for(int i = 1; i <= 20; i+=2){
        if(i == 13){
            continue; // if you break it will stop the for loop if you continue it will continue without the i == 
        }
        std::cout << i << '\n';
    }



    return 0;
}