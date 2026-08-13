#include <iostream>

double square(double length); // list any parameters in ()
double cube(double length);

int main()
{

    /*
    Return = return a value back to the spot where you called the encompassing function
    
    
    */


    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "area: " << area << "cm^2 \n";
    std::cout << "volume: " << volume << "cm^3 \n";

    return 0;
}
double square(double length){  // function declaration
    return length * length;
}
double cube(double length){  // function declaration
    return length * length * length;
}
