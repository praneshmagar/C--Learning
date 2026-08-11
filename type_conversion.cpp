#include <iostream>

int main(){

    //type conversion is a conversion of a value of one data type to another
    // implicit = automatic 
    //explicit = precede value wiht a new data type (int) X

    //double x = (int) 3.14;
   // std::cout << x;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";

    return 0;
}


