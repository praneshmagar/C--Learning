#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side*side*6;
        this->volume = side*side*side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius*radius);
        this->volume = (4/3.0)*3.14159*(radius*radius*radius);
    }

};

int main(){

    Cube cube(10);

    std::cout << "CUBE WITH SIDE LENGTH OF: " << cube.side << '\n';
    std::cout << "AREA: " << cube.area << "cm\n";
    std::cout << "VOLUME: " << cube.volume << "cm\n" << '\n';

    Sphere sphere(5);
    
    std::cout << "SPHERE WITH RADIUS " << sphere.radius << '\n';
    std::cout << "AREA: " << sphere.area << "cm\n";
    std::cout << "VOLUME: " << sphere.volume << "cm\n";


    return 0;
}