#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


int main()
{
	int input = 0;
	Contact con;
	
	//初始化通讯录
	//尽量模块化代码
	InitContact(&con);

	do
	{
		meau();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SeaContact(&con);
			break;
		case 4:
			ModContact(&con);
			break;
		case 5:
			ShoContact(&con);
			break;
		case 6:
			SorContact(&con);
			break;
		case 0:
			Free(&con);
			printf("退出");
			break;
		default:
			printf("选择错误");
			break;
		}

	} while (input);


	return 0;
}

