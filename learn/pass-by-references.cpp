#include <iostream>
/* memory address = a location in memory where a data is stored 
a memory address can be accessed with  & (address-of operator)
 */

void swap(std::string &x, std::string &y);



 int main(){

    std::string x = "kool-aid";
    std::string y = "WATER";
    std::string temp;

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    (x, y);
    
    
    

 return 0;
}
void swap(std::string &x, std::string &y){    // adding & to a variable passes memory addresses to the original variables and swaps value if you dont they wont swap 
                                              // because they have different addresses
    std::string temp;
    temp = x;
    x = y;
    y = temp;

}