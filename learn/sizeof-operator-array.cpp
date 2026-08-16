#include <iostream>

int main(){

    /*
    sizeof() determines the size in bytes
    of a: variable, data type, class, objects, etc
    */
    std::string name="Pranesh";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};


    std::cout << sizeof(gpa) << " bytes" << '\n';
    std::cout << sizeof(name) << " bytes" << '\n';
    std::cout << sizeof(grade) << " bytes" << '\n';
    std::cout << sizeof(student) << " bytes" << '\n';
    std::cout << sizeof(grades) << " bytes" << '\n';
    
    std::string students[] = {"spongebob", "patrick", "squidward"};


    std::cout << sizeof(students)/sizeof(std::string) << " Elements" << '\n';


// can use sizeof operator to calculate how many elements are in an array





    return 0;
}