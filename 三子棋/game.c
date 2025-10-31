#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ROW 3
#define COL 3
//这里用全局变量方便改数值和检查


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}

	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			       //%c 输出单个字符
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("快几把下棋>\n");

	while (1)
		     //（1）是死循环，知道遇上break才跳出
	{
		printf("快输入几把坐标> ");
		scanf("%d %d", &x, &y);
		//输入时，程序处理的是棋盘的逻辑坐标
		//board[ ][ ]后面括号里的仅仅是行列
		//输入的2 2就是逻辑里的中心位置所以就放在了中心位置

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
				//这里的x-1是因为二维数组第一个元素是[0][0]，与常规操作不同
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("眼瞎是吗？\n");
			}
		}
		else
		{
			printf("傻逼是吗？？\n");
		}
	}
}

void AImove(char board[ROW][COL], int row, int col)
{
	printf("高雅AI下棋\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row; //0-2
		y = rand() % col; //0-2
		//这里的rand是取随机数

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//满了返回1
//没满返回0
char Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//在下面为假，不进行
			}
		}
	}
	return 1;
}

//*人赢
//#电脑赢
//c继续游戏
//q平局
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{//行
			return board[i][0];
		}
		//
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{//列
			return board[0][i];
		}
		//
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{//斜右三角
			return board[0][0];
		}
		//
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{//左三角
			return board[0][2];
		}

		//错误の代码
		/*	while (1)
		{
					for (j = 0; j < col; j++)
					{
						if (board[i][j] == ' ')
						{
							return 2;
							break;
						}
					}
		}*/

		if (Isfull(board, row, col)) //返回的0这里为假，不运行
		{
			return 'q';
		}
		return 'c';//不运行则继续
	}
}