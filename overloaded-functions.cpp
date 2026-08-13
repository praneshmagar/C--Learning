#include <iostream>


void bakePizza(); // you can have functions with the same name but they must have DIFFERENT PARAMETERS (INSIDE ARE PARENTHESIS ARE PARAMETERS)
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);



int main()
{
    bakePizza("pep ", "mush ");


    return 0;
}


void bakePizza(){
    std::cout <<"Here is your pizza! '\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << "pizza!";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << "and " << topping2 << "pizza!";
}