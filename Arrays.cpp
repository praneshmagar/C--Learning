#include <iostream>

int main()
{
    /*
    an array is a data strucutre that can hold multiple values
    values are accessed by an index number 
    kind of like a variable that holds multiple values
    
    
                            0           1         2 */ 
    std::string cars[]= {"Porsche", "Mercedes", "Supra"};   // arrays must contain same data types
              //^array   <- found in ^elements
    
    cars[0] = "lambo";          



    std::cout << cars[0] << '\n'; // first element in array stars at 0
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';    
    //^to access array to an array add [] then index number 


    return 0;
}