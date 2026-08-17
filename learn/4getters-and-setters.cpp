#include <iostream>

//abstraction = hiding unecessary data from outside a class
// getter = function that makes private attribute READABLE
// setter = function that makes a private attribute WRITEABLE

class Stove{
    private:
        int temperature = 0; // make private attribute 
    public:
    
    Stove(int temperature){
        setTemperature(temperature);

    }

    int getTemperature(){ // make it readable
        return temperature;
    }
    void setTemperature(int temperature){ //make it writeable
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }

};



int main()
{
    Stove stove(0);
    
    //stove.setTemperature(11);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}