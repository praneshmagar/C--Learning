#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //incase they add their name with space like Pranesh Magar

    if(name.empty()){ // will return std::cout letting you know if is empty or not
        std::cout << "you didnt enter your name";
    } 
    else{
        std::cout << "Welcome! " << name; 
    }  
    
    
    name.clear(); //will clear whatever is in the name


    if(name.length() > 12){   // .length() will give you length of string
        std::cout << "Your name cant be over 12 characters";
    }
    else {
        std::cout << "Welcome! " << name;
    }

    
    name.append("@gmail.com"); //append will add a string to the end of another string
    std::cout << "Your username is now " << name;

    
    std::cout << name.at(0); //return a character at a given position within a string string.at()

    
    name.insert(2, "@"); // insert (which character you want to insert, "what you want to insert it with")
    std::cout << name;


    std::cout << name.find(" "); // will find where in the string ("_") is located


    name.erase(0, 3); // erase(beginning index, ending index)
return 0;
}

