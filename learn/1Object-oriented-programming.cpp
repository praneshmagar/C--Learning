/*
objecy is a collection of attributes and methods
they can hae characterisitics and could perfom actions
can be used to mimic real world items for example a phone or a book
created form a class which acts as a blue print
*/


#include <iostream>

class Human{ // blueprint to create human object
    public:
        std::string name = Rolc; // you can also give default attributes by ex. std::string name = "RICK"
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n"; // functions are known as methods
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};




int main(){

    Human human1; // human1 is a unique identifier
    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    Human human2; // human1 is a unique identifier
    human2.name = "Pranesh";
    human2.occupation = "Student";
    human2.age = 21;



    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << "--------------" << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();



    return 0;
}