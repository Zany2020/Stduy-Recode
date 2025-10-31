#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
//这里有了game.h里的头文件了所以不用再加


void menu()
{
	printf("**********************************\n");
	printf("******* 1. play   0. exit ********\n");
	printf("**********************************\n");
}


void game()
{
	int ret = 0;//设一个值用来判断

	char board[ROW][COL] = { 0 };//初始化
	InitBoard(board, ROW, COL);
	while (1)
	{
		Displayboard(board, ROW, COL);// 先显示当前棋盘
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		Displayboard(board, ROW, COL);// 先显示当前棋盘
		AImove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		
	}

	if (ret == '*')
	{
		printf("人win\n");
	}
	else if (ret == '#')
	{
		printf("机win\n");
	}
	else
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	//srand() 和 time(NULL) 通常结合使用，用于初始化随机数生成器
	// 用不断变化的当前时间作为随机数种子，确保每次程序运行时能产生不同的随机数序列。
	//time(NULL) 用于获取当前系统时间
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);//do while循环的while放这，条件放里面
	                //当input==0的时候就结束（为假）
	return 0;
}