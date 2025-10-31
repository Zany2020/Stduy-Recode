#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void AImove(char board[ROW][COL], int row, int col);

char Isfull(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
