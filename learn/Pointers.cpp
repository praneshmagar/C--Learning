#include <iostream>
/*
pointers are variables that stores a memory address of another variable 
sometimes its easier to work with an address
'&' address of an operator gives ur values address
'*' dereference operator accesess value at the address
*/



int main()
{

    std::string freePizza[5] = {"pizza1", "pizza2", "pizz3", "pizza3", "pizza4"};
    int age = 21;
    std::string name = "PRANESH";
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizza = freePizza;


    std::cout << *pName;
    std::cout << *pAge;
    std::cout << *pFreePizza;


    return 0;
}