#include <iostream>

// abstraction = hiding unnecessary implementation details from outside a class
// getter = function that allows you to READ a private attribute
// setter = function that makes a private attribute WRITEABLE

class Stove{
    private:
        int temperature = 0; // make private attribute, people wont be able to touch this without setting a functions like the void setTemperature(int temperature){ } function
    public:
    
    Stove(int temperature){
        setTemperature(temperature);

    }

    int getTemperature(){ // makes attribute  readable
        return temperature;
    }
    void setTemperature(int temperature){ //make attribute writeable
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