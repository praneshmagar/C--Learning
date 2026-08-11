#include <iostream>

int main() {

    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character can only display single character
    char grade = 'A';
    char initial = 'B'; 
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;


    //string (objects that represents a sequence of text)
    std::string name = "Pranesh Magar ";
    std::string game = "valorant";
    
    std::cout << "hey " << name << "your favorite game is currently " << game << '\n';
    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';



    std::cout <<price << '\n';
    std::cout <<days << '\n'; 
    std::cout <<initial;
    return 0;
}