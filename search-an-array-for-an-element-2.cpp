#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main(){

    std::string foods[] = {"wings", "steak"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter element to search for: " << '\n';
    std::getline(std::cin, myFood); // get line because answer might have spaces

                        //aray , size of array , and element we are searching for
    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " Is at index " << index;
    }
    else{
        std::cout << myFood << " Is not in the array";
    }

    return 0;
}
            // C++ matches by position so it knows array[] is myNum / numbers[] | line 19 , line 10
int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

