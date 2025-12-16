#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"



void meau()
{
	printf("********************************************\n");
	printf("**** 1.add              2. del   ***********\n");
	printf("**** 3.search           4.modify ***********\n");
	printf("**** 5.show             6.sort   ***********\n");
	printf("**** 0.exit                      ***********\n");
	printf("********************************************\n");

}

void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->date, 0, sizeof(pc->date));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("满了");
		return 0;
	}
	printf("请输入名字：");
	scanf("%s", pc->date[pc->count].name);
				//两次 pc 是因为要从同一个通讯录结构体中，
				//既取「联系人数组」，又取「当前数量」，是结构体嵌套访问的正常逻辑
	printf("请输入年龄：");
	scanf("%d", &pc->date[pc->count].age);//&
	printf("请输入性别：");
	scanf("%s", pc->date[pc->count].sex);
	printf("请输入电话：");
	scanf("%s", pc->date[pc->count].tele);
	printf("请输入地址：");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("添加成功");
}

void DelContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	if (pc->count == 0)
	{
		printf("通讯录为空");
		return;
	}

	printf("请输入想要删除的联系人的姓名：");	
	scanf("%s", name);
	
	for (int i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->date[i].name) == 0)
			//name[MAX_NAME]访问数组第 MAX_NAME 个位置的字符，
			//name是字符串首地址
			//strcmp 要求传 char*（字符串地址)
		{
			for (int j = i; j < pc->count - 1; j++)
			{
				pc->date[j] = pc->date[j + 1];
			}
			pc->count--;
			printf("删除成功");

			return;
		}		
	}
	printf("未找到");

}