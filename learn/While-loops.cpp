#include <iostream>

int main()
{
    std::string name;

    while(name.empty()){ // while loop / name is empty the user cant keep going until the while loop is finished
        std::cout << "enter your name"; 
        std::getline(std::cin, name);
    }

    std::cout << "hello " << name;

    return 0;
}