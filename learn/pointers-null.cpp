#include <iostream>

/*
Null value is a special value that means something has no value.
when a pointer is holding a null value
that pointer is not pointing at anything (null pointer)

nullptr = represents a null pointer, meaning the pointer does not point to an object/function.

nullptr's are helpful when determining if an address was successfully assigned to a pointer

when using pointers, be careful that your code isn't derefrencing null or pointing to free memory this will cause undefined behavior 

*/

int main(){

    int* pointer = nullptr;  //initializes pointer to nullptr
    int x = 123; // integer x

    pointer = &x; // Store the memory address of x inside pointer

    //it is good practice to check using if statement
    if(pointer == nullptr){ // pointer has the the address of x because of &x
        std::cout << "Pointer was not assigned"; //if pointer didnt receieve the address of x the pointer was not given the address of x [  &x  ]
    }
    else{
        std::cout << "pointer was assigned to " <<  '\n' << *pointer; // if the address of x was given to pointer pointer has successful gotten the address you can see the 
                                                                        // value of x by derefrencing it with * which in this cause int 123 = x so when you print you will see 
                                                                        // pointer has 123
    }

    return 0;
}