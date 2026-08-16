#include <iostream>

/*
struct = a structure that group related variables under one name
structs can contain many different data types (string, boolean, int, etc)
variables in a struct are known as members
members can be access with . "Class member access operator"

*/

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};


int main()
{

    student student1;
    student1.name = "Pranesh";
    student1.gpa = 3.1;
    student1.enrolled = true;
    student student2;
    student2.name = "Prazel";
    student2.gpa = 4.0;
    student2.enrolled = true;


    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    
    std::cout << "****************" << '\n';
    
    std::cout << student2.name <<'\n';
    std::cout << student2.gpa <<'\n';
    std::cout << student2.enrolled <<'\n';    



    return 0;
}