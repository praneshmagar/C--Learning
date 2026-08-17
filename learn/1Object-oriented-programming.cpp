/*
object is a collection of attributes and methods
they can hae characterisitics and could perfom actions
can be used to mimic real world items for example a phone or a book
created form a class which acts as a blue print
*/


#include <iostream>

class Human{ // blueprint to create human object
    public:
        std::string name; // you can also give default attributes by ex. std::string name = RICK"
        std::string occupation;
        int age;
        double gpa;

        void eat(){
            std::cout << "This person is eating\n"; // functions are known as methods
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
        void task(){
            std::cout << "This person is studying\n";
        }
};




int main(){

    Human human1; // human1 is a unique identifier
    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;
    human1.gpa = 3.5;

    Human human2; // human1 is a unique identifier
    human2.name = "Pranesh";
    human2.occupation = "DRUN K  DROVEA ";
    human2.age = 21;
    human2.gpa = 4.5;



    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.gpa << '\n';
    human1.eat();
    human1.drink();
    human1.sleep();
    human1.task();

    std::cout << "--------------" << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
    std::cout << human2.gpa << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();
    human2.task();


    return 0;
}