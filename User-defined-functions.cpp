#include <iostream>


void happybirthday(int age);

int main()
{
    int age = 21;
    // function = a block of reusable code
    happybirthday(age); // calls function. [ function(); ]


    return 0;
}

void happybirthday(int age){ 
    /*
    make sure you write void, write the function before main and dont put a return 0;
    program is read top down, you can declare function then define them later
    to use variables from other functions you must put them in the ()
    */
                                                                                                            
    std::cout << "HAPPY BIRTHDAY TO YOU!" << age << '\n';
    std::cout << "HAPPY BIRTHDAY TO YOU! \n";
    std::cout << "HAPPY BIRTHDAY TO YOU! \n";
    std::cout << "HAPPY BIRTHDAY TO YOU! \n";



}
