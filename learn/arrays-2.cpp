#include <iostream>

int main()
{
    /*
    an array is a data strucutre that can hold multiple values
    values are accessed by an index number 
    kind of like a variable that holds multiple values
    */

    std::string cars[4];
    
    cars[0] = "lambo";          
    cars[1] = "porsche";          
    cars[2] = "lambo";          
    cars[3] = "lambo";          



    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';    
    std::cout << cars[3] << '\n';

    return 0;
}