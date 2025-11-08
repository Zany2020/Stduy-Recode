#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void menu()
{
	printf("**********************************\n");
	printf("******* 1. play   0. exit ********\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放放置雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查雷的信息
	//初始化数组内容为特定的内容
	
	//mine在没布置雷的时候都是很‘0’
	InitBoard(mine, ROWS, COLS, '0');

	//show在没布置雷的时候都是很‘*’
	InitBoard(show, ROWS, COLS, '*');

	//设置雷
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(show/**/, ROW, COL);

	//排查雷
	Fine_Mine(mine, show/**/, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机值，硬背

	do 
	{
		menu();
		scanf("%d", &input);
		if (input == 0)
		{
			printf("拜ヾ(•ω•`)o\n");
			break;
		}
		else if (input == 1)
		{
			printf("OK(p≧w≦q)\n");
			game();
			break;
		}
		else
		{
			printf("输错啦(・∀・*)\n");
		}


	} while (input);
}
