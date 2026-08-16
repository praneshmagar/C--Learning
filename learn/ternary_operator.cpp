#include <iostream>

int main()
{

 // ternary operator ?: = replacement to an if/else statement
 // condition ? expression1 : expression 2;

    /*
    int grade = 75;

    if (grade >= 60)
    {
        std:cout << "you pass!";
    }
    else{
        std::cout<< "you fail!"
        
    }
     Ternary operator instead */
    
    //int grade = 75;
    //grade >= 60 ? std::cout << "you pass!" : std::cout << "you fail!";
                        // if true ^            if false ^
    int number = 9;
    number % 2 == 1 ? std::cout << "odd" : std::cout<< "Even";
    return 0;
}