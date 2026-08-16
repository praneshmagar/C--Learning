/*
object is a collection of attributes and methods
they can hae characterisitics and could perfom actions
can be used to mimic real world items for example a phone or a book
created form a class which acts as a blue print
*/


#include <iostream>

class Car{ // blueprint to create  object
    public:
        std::string make; // you can also give default attributes by ex. std::string name = RICK"
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color ){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }    
        
        
        void accelerate(){
            std::cout << "This car is accelerating at mach 20\n"; // functions are known as methods
        }
        void brake(){
            std::cout << "You are lightly stepping\n";
        }
};




int main(){
    
    Car car1("Porsche", "Ferari", 2022, "BLACK");
    Car car2("Mercedes", "AMG", 2022, "RED");

    car1.make = "Porsche";
    car1.model = "Gt2RS";
    car1.year = 2026;
    car1.color = "black";


    car2.make = "PorscMercedeshe";
    car2.model = "AMG";
    car2.year = 2022;
    car2.color = "RED";    

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';
    car1.accelerate();
    car1.brake();
    std::cout << "          Porsche            " << '\n';
    std::cout << "************VS**************" << '\n';
    std::cout << "          MERCEDES            " << '\n';
    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    car2.accelerate();
    car2.brake();

    return 0;
}