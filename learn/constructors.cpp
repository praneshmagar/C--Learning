/*
constructor is a special method that is automatically called 
when an object is instantiated
useful for assigning values to attributes as arguments
*/


#include <iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){ 
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};




int main(){

    Student student1("Spongebob", 25 , 3.7);
    Student student2("Pranesh", 21 , 3.1);
    Student student3("Nisha", 19 , 3.9);
    
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';    
    return 0;
}