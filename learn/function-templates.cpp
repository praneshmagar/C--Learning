#include <iostream>
template <typename T, typename U> // make sure to include template and typename _ and add as needed for different data types and use auto before function to let compilier decide
//function template descirbes what a function looks like
// can be used to generate as many overloaded functions as needed, each using different data types
// like a cookie cutter cookies are the same shape but the dough used is different


auto max(T x, U y){ //only have to write function once and now its compatiable with different data types
    return (x > y) ? x : y;

}

int main(){
    std::cout << max(1 , 2.1) << '\n';




    return 0;
}
