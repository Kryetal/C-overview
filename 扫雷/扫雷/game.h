#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void Init(char board[ROWS][COLS],int rows,int cols,char set);
void Display(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void MineSweep(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

