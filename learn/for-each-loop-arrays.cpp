#include <iostream>

int main(){

    /*
    foreach loop eases the traversal over an iterable data set, for each less syntax but less flexiable
    with a for loop you can go back foward skip iterations, but for for each it only goes from start at beginning to end
    */


    /*
    std::string students[] = {"spongebob", "patrick", "sqiodward"};
    
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }
    
    */    
    std::string students[] = {"spongebob", "patrick", "sqiodward"};
    
    // data type, make name for current element : iterable data set which is the array
    for(std::string student : students){
        std::cout << student << '\n';
    }
    return 0;
}