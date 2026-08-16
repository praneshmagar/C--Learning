#include<iostream>
#include<iomanip> // has set std::precision() <-decimal place and std::fixed()
#include <limits>
/* 
    deposit money, withdraw money, show a balance
*/
void showBalance(double balance);
double deposit();
double withdraw(double balance);



int main()
{
    double balance = 0;
    int choice = 0;
    
    do{
        std::cout<< "**************************************************\n";
        std::cout << "Would you like to show balance, deposit, withdraw \n";
        std::cout<< "**************************************************\n";
        std::cout<< "1. Show balance\n";
        std::cout<< "2. Deposit\n";
        std::cout<< "3. Withdrawl\n";
        std::cout<< "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);
        
        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit(); 
                    showBalance(balance);// takes deposit function and aplpies amount into balance
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);// takes deposit function and aplpies amount into balance   
                    break;
            case 4: std::cout << "Thanks for visting";
                    break;
            default:std::cout << "Invalid Choice";
            
        }
    }while(choice != 4);
    
    return 0;
}
void showBalance(double balance){
        std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
 
double deposit(){
    
    double amount = 0;
    
    std::cout << "Enter amount to be depositied: ";
    std::cin >> amount;    
    
    if(amount > 0 ){
        return amount;
    }
    else{
        std::cout << "That is not a valid amount: ";
        return 0;
    }
}

double withdraw(double balance){
    
    double amount = 0;
    
    std::cout << "Please enter an amount to be withdrawn ";
    std::cin >> amount;
    
    if(amount > balance){
        std::cout << "INSUFFICIENT FUNDS" << '\n' ;
        return 0;
    }
    else if (amount < 0){
        std::cout << "That is not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}
 