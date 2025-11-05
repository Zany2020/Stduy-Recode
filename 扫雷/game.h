#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROWS ROW + 2
#define COLS COL + 2

#define COL 9
#define ROW 9

#define Easy_count 10

//不用=，不用；

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void Fine_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int row, int col);

