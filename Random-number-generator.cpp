#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL)); // (NULL)for seed
    
    //int num = (rand() % 6) +1;     // for six sided dice %6 (remainder of any division) +1 so we can have 6 possible choices

    int num1 = (rand() % 6) +1;
    int num2 = (rand() % 6) +1;
    int num3 = (rand() % 6) +1;
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
 
    // pseudo random number generator
    return 0;
}