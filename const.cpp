#include <iostream>

int main() {
    // the const keyword specfiies tat a variable is constant tells the compiler that the value of the variable should not be changed

    const double PI = 3.14159;
    
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";



}