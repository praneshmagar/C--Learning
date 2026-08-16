#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter Side A: ";
    std::cin >> a;
    
    std::cout << "Enter Side B: ";
    std::cin >> b;
    
    //a = pow(a, 2); // whatever the user inputs for a it is powered by 2
    //b = pow(b, 2);
    //c = sqrt(a+b);

    c = sqrt(pow(a, 2)+pow(b, 2));
    std::cout << "Side C : " << c;

    return 0;
}