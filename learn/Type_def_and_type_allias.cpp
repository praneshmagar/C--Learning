#include <iostream>
#include <vector>

typedef std::string text_t;
typedef int number_t;
// you can use "using" instead of typedef
// using text_t = std::string;
using food_t = std::string;

int main(){
    //instead of writing std::string firstName; you can write text_t 
    text_t firstName = "Pranesh";
    //instead of writing int age; you can write number_t  
    number_t age = 21;
    food_t food = "wings";
    
    std::cout << food << '\n';
    std::cout << age <<'\n';
    std::cout << firstName << '\n';
    return 0;
}


/// basically a new identifier for an existing type only use when there is clearly a benefit