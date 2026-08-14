#include <iostream>

int main(){

    /*
    you dont have to write out each element you can use a for loop.

    */

    std::string students[] = {"spongebob", "patrick", "sqiodward"};
    
    
    for(int i = 0; i < sizeof(students)/sizeof(students); i++){
        std::cout << students[i] << '\n';
    }






    return 0;
}