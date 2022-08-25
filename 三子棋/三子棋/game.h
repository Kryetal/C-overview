#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//玩家赢  *
//电脑赢  #
//平局    q 
//继续    c
char IsWin(char board[ROW][COL],int row,int col);

//返回 1 满
//返回 0 不满
int IsFull(char board[ROW][COL],int row,int col);