#include <iostream>

// cout << (insertion operator)
// cin << (extraction operator)


int main()
{
    std::string name;
    int age;

    std::cout << "Whats your Full name?: ";
    std::getline(std::cin, name); //get line function lets you type spaces in string,  if you have cin >> it will mess up because it will take white space as input to stop this
    // do std::getline(std::cin >> std::ws, name);
    
    std::cout << "What's your age? ";
    std::cin >> age;
    
    std::cout << "Hello " << name << '\n';
    std::cout << "Yo you are " << age;
    
    return 0;
}