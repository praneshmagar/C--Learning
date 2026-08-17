#include <iostream>

// inheritance = a class can recieve attributes and methods form another class
// children classes inherit from a pernt class
//helps reuse similar code found within multiple classes

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating \n";
    }
};
class Dog : public Animal{
    public:

    void bark(){
        std::cout << "The dog goes woof \n";
    }
};
class Cat : public Animal{
    public:
        bool alive = true;
        void meow(){
        std::cout << "cat goes MEOWWWWWWWWWWWWWW" << '\n';
    }
};

int main(){


    Dog dog;
    Cat cat;
    
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    return 0;
}