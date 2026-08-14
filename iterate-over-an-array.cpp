#include <iostream>

int main(){

    /*
    you dont have to write out each element you can use a for loop.

    */

    std::string students[] = {"spongebob", "patrick", "sqiodward"};
    
          //counter           // array name         data type 
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
                   //condition                               increment  for increments of 2 do i += 2 
        std::cout << students[i] << '\n';
    }






    return 0;
}