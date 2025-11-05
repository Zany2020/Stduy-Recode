#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void InitBoard(char board[ROWS][COLS]/**/, int rows/**/, int cols/**/, char set)
{

	int i = 0;
	int j = 0;

	for (i/**/ = 0; i < rows; i++)
	{
		for (j/**/ = 0; j < cols; j++)
		{
			board[i][j]/**/ = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	
	printf("------------------扫 雷---------------------\n");

	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c "/**/, board[i][j]);
			//%c打印字符！！
		}
		printf("\n");
	}
	
	printf("--------------------------------------------\n");
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = Easy_count;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int n = 0;

	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (i == 0 && j == 0)
			{
				continue;//
			}		
			n = n + mine[x-i][y-j] - '0';
			//mine[x-i][y-j] 存储的是字符对应的 ASCII 码值
			//（ 只有 ） char 类型的数组，才会存储字符对应的 ASCII 码值，int 数组：存储整数
		}
	}
	return n;
}


void Fine_Mine(char mine/**/[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请输入排查坐标:>\n");
		scanf("%d %d", &x, &y);

		if (show[x][y] != '*')
		{
			printf("请再次输入\n");
		}

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1'/**/)
				//'1'和mine[x][y]代表的是ascall码值
				//mine[x][y] 存储的值本质上是字符对应的 ASCII 码值
			{
				printf("你被炸死了ⓛ ω ⓛ\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//统计旁边有几个雷
				int count = get_mine_count(mine/**/, x, y);//这里的mine是在mine数组里寻找1来统计
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("输入错误∑( 口 ||\n");
		}
	}
}