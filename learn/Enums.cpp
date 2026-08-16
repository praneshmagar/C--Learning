#include <iostream>

/*
enums = a user defined data type that consists
of paired name integer constants
great if you hav e aset of potential options
*/


enum Day{sunday = 0 , monday = 1 , tuesday = 2 , wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){




    Day today = sunday;

    switch(today){
        case sunday: std::cout << "IT IS A SUNDAY!\n";
                        break;
        case monday: std::cout << "IT IS A monday!\n";
                        break;
        case tuesday: std::cout << "IT IS A tuesday!\n";
                        break;
        case wednesday: std::cout << "IT IS A wednesday!\n";
                        break;
        case thursday: std::cout << "IT IS A thursdau!\n";
                        break;
        case friday: std::cout << "IT IS A friday!\n";
                        break;
        case saturday: std::cout << "IT IS A saturday!\n";
                        break;
        }
        return 0;
}