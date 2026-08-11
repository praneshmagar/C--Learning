#include <iostream>

    // creating a name space
    namespace first{
        int x = 1;
    }
    namespace second{
        int x = 2;
    }

    int main(){
    //name spaces provides a solution for preventing name conflicts in large projects each entity needs a unique name a name space allows for
    //identically named entities as long as the namespaces are different
        using namespace first;
    
        int x = 0;
        std::cout << x << '\n';
        std::cout << first::x; 

}

//you can use 
// using std::cout;
//       std::string; 
// to cut down on repition
// so you can use string name= " bro"