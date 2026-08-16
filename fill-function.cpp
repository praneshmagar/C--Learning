#include <iostream>
   
/*fill() = Fills a range of elements with a specified value
           fill ( being ,end, value)
*/




int main()
{
    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/2), "pizza");
    fill(foods + (SIZE/2), foods + SIZE, "WINGS");



    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0; 
}