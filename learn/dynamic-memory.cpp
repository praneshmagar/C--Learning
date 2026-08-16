
#include <iostream>

//
//dynamic memory is memory that is allocated after the program is already compiled & running
//use the 'new' operator to allocate memory in the heap rather than the stack

//useful when we dont know how much memory we will need
//makes our programs more flexible especially when accepting user input

//
//    int *pNum = NULL;

//   pNum = new int;

 //   *pNum = 21;
//

int main(){

    char *pGrades = NULL;
    int size;

    std::cout << "HOW MANY GRADES?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "What are the grades:" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
    std::cout << pGrades[i] << " ";
    }
    
    delete[] pGrades; // delete to prevent memory leak
    
    return 0;
}