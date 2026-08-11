#include <iostream>

int main()
{
    /*
    switch = alternative to using many "else if" statements 
    you can compare one value against matching cases

    C++ switch works with integral/enum types, such as
    int
    char
    short
    long
    enum 

    If you want strings

    Use if / else if:
    */
    
    
/*    int month; // if you want a letter do char month;
    std::cout << "enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is Janurary";
            break;
        case 2: 
            std::cout << "It is Feburuary";
        default:
            std::cout << "Please enter in only numbers (1-12)";
    }
*/
    int day; // prac
    std::cout << "enter the day of the week";
    std::cin >> day;

    switch(day){
        case 1:
        std::cout << "Today is monday";
        break;
        default:
        std::cout << "Please choose a day from 1-7";
    }

    return 0;
}