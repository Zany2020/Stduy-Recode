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
<<<<<<< HEAD
void Tag(char show[ROWS][COLS], int row, int col);
void Expand(char mine[ROWS][COLS], char show[ROW][COL], int x, int y);



/*void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{

	int count = get_mine_count(mine, x, y);
	if (show[x][y] != '*')
	{
		return;
	}

	else
	{
		// 周围无地雷：显示 '0'，并递归展开周围 8 个方向的格子
		show[x][y] = '0';

		int i = 0;
		int j = 0;

		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				if (mine[x - i][y - j] != '0')
				{
					show[x][y] = count + '0';
				}
				else
				{
					show[x - i][y - j] = '0';
				}
				Expand(mine, show, x + i, y + j);
			}
		}
	}

}*/


//展开一片的功能
/*void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//通过 show 传递需要处理的棋盘数据,ROWS 和 COLS 是宏定义的常量（例如 #define ROWS 11, COLS 11），用于指定二维数组的行数和列数（通常包含边界，方便处理边缘格子的逻辑）
//通过 row 和 col 限定有效棋盘的大小（用户可见区域），让函数在安全范围内操作数组（避免访问无效内存）
{
	int i = 0;
	int j = 0

	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x - i][y - j] != '0')
			{
				show[x - i][y - j] = mine[x - i][y - j];
			}
			else
			{
				show[x - i][y - j] = '0';
				Expand(mine, show, x, y);
			}
		}
	}
}*/
=======

>>>>>>> 9718bd6713f5035c90f34aa7d43275a756630882
