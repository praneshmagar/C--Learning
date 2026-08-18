/*
#ifndef gusserH
#define gusserH
    if not defined gusserH
    Define gusserH
    End H
    sort of like #include <iostream>
#endif
*/

#ifndef TictactoeH 
#define TictactoeH
#include "Tic-tac-toe-function-def.cpp"

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player ,char computer);
bool checkTie(char *spaces);



#endif