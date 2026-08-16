#include <iostream>

int main()
{
    /*
    2d array / multidimensional arrray = {array 1, array 2, array3}
                                // 0       1         2  row
    std::string cars[][3] = {{"gt3rs", "turbo s", "gt2rs"}, // 0 collums            // or {{"gt3rs", "turbo s", "gt2rs"}, {"912", "f20" , "spyder"}, {"svj", "roadster", "rav4"}};   
                            {"912", "f20" , "spyder"},      // 1
                            {"svj", "roadster", "rav4"}};   // 2


    std::cout << cars[0][0] << " "; // [row][collum]    
    std::cout << cars[0][1] << " "; // [row][collum] 
    std::cout << cars[0][2] << "\n"; // [row][collum] 
    std::cout << cars[1][0] << " "; // [row][collum]    
    std::cout << cars[1][1] << " "; // [row][collum] 
    std::cout << cars[1][2] << "\n"; // [row][collum] 
    std::cout << cars[2][0] << " "; // [row][collum]    
    std::cout << cars[2][1] << " "; // [row][collum] 
    std::cout << cars[2][2] << "\n"; // [row][collum] 

    */                         

    std::string cars[][3] = {{"gt3rs", "turbo s", "gt2rs"},      //iterate
                            {"912", "f20" , "spyder"},     
                            {"svj", "roadster", "rav4"}};   
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }


    return 0;
}