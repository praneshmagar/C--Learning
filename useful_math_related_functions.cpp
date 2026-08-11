#include <iostream>
#include <cmath> //rest of math functions


int main()
{
    double x = 3;
    double y = 4;
    double z;
    
    //double x = 3.14;


    // MAX returns the greater of two variables, Min does less , Pow does power, sqrt square roots, ABS does absolute value , round rounds number, ceil rounds up, floor
    // floor rounds down,

    //z = std::max(x, y);
    //std::cout << z;
    
    //z = std::min(x, y);
    //std::cout << z;
    
    z = pow(2, 4);
    std::cout << z;
    
    //z = sqrt(9);
    //std::cout << z;

    //z = abs(-3); //how far away the number is from 0
    //std::cout << z;

    //x = round(x); //will round down useing ceil to round up
    //std::cout << x;

    //x = ceil(x);
    //std::cout << x;

    //    x = floor(x);
    //    std::cout << x;
    return 0;
}