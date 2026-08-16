#include <iostream>
#include <ctime>


char getUserChoice(); //declaring functions // returning a character
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);  //no return type 



int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    
    char player;
    std::cout << "Rock-Paper-Scrissors Game!\n";
    std::cout << "                          \n";
    std::cout << "Choose either \n";
    
    do{
    std::cout << " 'r' for rock\n";
    std::cout << " 'p' for paper\n";
    std::cout << " 's' for scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
}

char getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

void showChoice(char choice){
    switch(choice){ //switches only evaluates integrams, characters, or enums
        case 'r': std::cout << "Rock\n";
                    break;
        case 'p': std::cout << "Paper\n";
                    break;                    
        case 's': std::cout << "Scissor\n";
                    break;
    }
}

void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
                    std::cout << "It is a tie!\n";
                    }
                    else if (computer == 'p'){
                    std::cout << "You lost!\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 'p': if(computer == 'p'){
                    std::cout << "It is a tie!\n";
                    }
                    else if (computer == 's'){
                    std::cout << "You lost!\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 's': if(computer == 's'){
                    std::cout << "It is a tie!\n";
                    }
                    else if (computer == 'r'){
                    std::cout << "You lost!\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;                                        
    }
}