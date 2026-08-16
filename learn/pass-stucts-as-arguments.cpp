#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);


int main(){

    Car car1;
    Car car2;

    car1.model = "porsche";
    car1.year = 2019;
    car1.color = "Black";

    car2.model = "AMG";
    car2.year = 2069;
    car2.color = "WHITE";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1);    
    std::cout << '\n';
    printCar(car2);

    

return 0; 
}

void printCar(Car &car){ // when passing through a function it creates a copy so its different from original
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';

};

void paintCar(Car &car, std::string color){
    car.color = color;


}