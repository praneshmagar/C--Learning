#include <iostream>
#include <string>

using namespace std;




int main()
{    
    string foods[] = {"grapes", "wings", "pow"};


    for(int i = 0; i < sizeof(foods)/sizeof(foods[0]); i++ ){
        cout << foods[i] << endl;  
    }

    system("pause");
    return 0; 
}