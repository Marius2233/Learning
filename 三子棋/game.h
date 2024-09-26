#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:6031)
#pragma warning(disable:4996)
#define row 3
#define line 3
void menu(void);
void start(void);
setboard(char board[row][line], char numb1);
displayboard(char board[row][line]);
playerinput(char board[row][line]);
computerinput(char board[row][line]);
char checkboard(char board[row][line]);
void judgeboard(char board[line][row]);


