#include <iostream>
#include <string>
#include <array>
using namespace std;
#include <vector>



int main()
{    

    vector<string> foods = {"grapes", "carrots", "lemons"};
    foods.push_back("totrital");                // vector can grow in size by using .pushback("_");
    
    for(int i = 0; i < foods.size(); i++)
    {
    cout << foods[i] << endl;
    }
    
    for(auto food : foods)   
    {
     cout << food << endl;
    }

    system("pause");
    return 0; 
}