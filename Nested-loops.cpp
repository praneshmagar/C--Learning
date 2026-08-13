#include <iostream>

int main()
{
    /* Nested loop is just a loop inside of another loop
        loops(){
            loop(){
            }
        }
    */
    
    /*
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){ //for second loop you can use j instead of i
            std::cout << j << ' ';
        }
        std::cout <<"NEW LINE";
    }
    */
   int rows;
   int columns;
   char symbol;

   std::cout << "How many rows would you like? ";
   std::cin >> rows;
   std::cout << "How many columns would you like? ";
   std::cin >> columns;
   std::cout << "What symbol would you like? ";
   std::cin >> symbol;
   for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
   }
return 0;
}