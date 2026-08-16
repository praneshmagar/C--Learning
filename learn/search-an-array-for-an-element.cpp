#include <iostream>

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1, 2 , 3, 4, 5, 6, 7, 8 , 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

                        //aray , size of array , and element we are searching for
    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " Is at index " << index;
    }
    else{
        std::cout << myNum << " Is not in the array";
    }

    return 0;
}
            // C++ matches by position so it knows array[] is myNum / numbers[] | line 19 , line 10
int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}


/* 
Your function is:

int searchArray(int array[], int size, int element)

And you call it with:

index = searchArray(numbers, size, myNum);

C++ matches them by position.

Think of it like this

When you write:

searchArray(numbers, size, myNum);

C++ essentially says:

array   ← numbers
size    ← size
element ← myNum

*/