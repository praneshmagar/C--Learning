#include <iostream>

int main()
{
    /*
    an array is a data strucutre that can hold multiple values
    values are accessed by an index number 
    kind of like a variable that holds multiple values
    
    
                            0           1         2 */ 
    std::string cars[]= {"Porsche", "Mercedes", "Supra"};
              //^array   <- found in ^elements
    
    car[0] = "lambo";          



    std::cout << car[0] << '\n'; // first element in array stars at 0
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';    
    //^to access array to an array add [] then index number 


    return 0;
}