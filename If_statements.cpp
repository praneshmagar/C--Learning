#include <iostream>

int main()
{
    //if statements = do something if a condition is true, if not then dont

    int age;
    std::cout << "enter your age: ";
    std::cin >> age;
    
    if(age > 100){  // checks first if first so move to first 
        std::cout << "You are too old to enter this site";
    if(age >= 18){
        std::cout << "welcome to the site!";     
    }
    else if(age <0){ // inside is (The condition)
        std::cout << "You havent been born yet";
    }

    }
    else{
        std::cout << "You are not old enough to Enter!";
    }
    return 0;
}