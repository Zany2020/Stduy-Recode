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

//标记功能
void Tag(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int n = 0;

	printf("标记坐标请输入1--\n");
	scanf("%d", &n);
	if (n != 1)		
	{
		return;  // 不标记，直接返回	
	}		
	while (1)
	{
		printf("请输入标记坐标：<");
		scanf("%d %d", &i, &j);

		if (i >= 1 && j >= 1 && i <= row && j <= col)
		{
			if (show[i][j] == '#')
			{
				printf("该位置已标记！\n");
			}
			else
			{
				show[i][j] = '#';
				DisplayBoard(show, ROW, COL);
				printf("标记成功！\n");
				break;
			}
		}
		else
		{
			printf("坐标输入错误，请输入1-%d范围内的数字！\n", row);
		}

	}
	
}

/*//这里真不会了啊/(ㄒoㄒ)/~~
// 
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//展开一片的功能
void Expand(char mine[ROWS][COLS], char show[ROW][COL], int x, int y)
//通过 show 传递需要处理的棋盘数据,ROWS 和 COLS 是宏定义的常量（例如 #define ROWS 11, COLS 11），用于指定二维数组的行数和列数（通常包含边界，方便处理边缘格子的逻辑）
//通过 row 和 col 限定有效棋盘的大小（用户可见区域），让函数在安全范围内操作数组（避免访问无效内存）
{
	int i = 0;
	int j = 0;

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
			}
		}
	}
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	// 1. 越界检查：超出有效棋盘范围（1~row, 1~col）则终止
	if (x < 1 || x > ROW || y < 1 || y > COL)
		return;

	// 2. 已展开或标记的格子不再处理（终止条件）
	if (show[x][y] != '*')  // '*'表示未处理的格子
		return;

	// 3. 计算当前格子周围的雷数
	int count = get_mine_count(mine, x, y);

	if (count > 0)
	{
		// 数字格子：直接显示雷数，不递归（边缘数字在此处显示）
		show[x][y] = count + '0';
		return;
	}
	else
	{
		// 空白格子：显示为'0'，并递归展开8个方向的相邻格子
		show[x][y] = '0';  // 标记为已展开，避免重复递归

		// 递归处理8个相邻格子
		for (int i = -1; i <= 1; i++)
		{
			for (int j = -1; j <= 1; j++)
			{
				if (i == 0 && j == 0)
					continue;  // 跳过自身
				// 递归展开相邻格子
				Expand(mine, show, x + i, y + j);
			}
		}
	}
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
				Expand(mine, show, x, y);
				DisplayBoard(show, ROW, COL);
				Tag(show, ROW, COL);
			}
		}
		else
		{
			printf("输入错误∑( 口 ||\n");
		}
	}
}

