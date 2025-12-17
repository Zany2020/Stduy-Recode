#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"



void meau()
{
	printf("********************************************\n");
	printf("**** 1.add              2.del    ***********\n");
	printf("**** 3.search           4.modify ***********\n");
	printf("**** 5.show             6.sort   ***********\n");
	printf("**** 0.exit                      ***********\n");
	printf("********************************************\n");

}

int Find_name(Contact* pc, char* name)
{
	for (int i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(name, pc->date[i].name))
			//name[MAX_NAME]访问数组第 MAX_NAME 个位置的字符，
			//name是字符串首地址
			//strcmp 要求传 char*（字符串地址)
		{
			return i;
		}
	}

	return -1;
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
		printf("满了\n");
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
	scanf("%d", pc->date[pc->count].tele);
	printf("请输入地址：");
	scanf("%s", pc->date[pc->count].addr);

	pc->count++;
	printf("添加成功\n");
}

void DelContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	if (pc->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	
	printf("请输入想要删除的联系人的姓名：");	
	scanf("%s", name);
	
	int index = Find_name(pc, name);

	if (index != -1)//不能写==0！！不然只能操作第一个元素
	{
		for (int j = index; j < pc->count - 1; j++)
		{
			pc->date[j] = pc->date[j + 1];
		}
		pc->count--;
		printf("删除成功\n");

		return;
	}

	printf("未找到\n");
	return;
}

void SeaContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入你查找的人的姓名：");
	scanf("%s", name);
	
	int index = Find_name(pc, name);

	if (index != -1)
	{
		printf("%-10s %-5s %-15s %-20s %-20s\n",
			"姓名", "年龄", "性别", "电话", "地址");

		printf("%-10s %-5d %-15s %-20d %-20s\n",
			pc->date[index].name,
			pc->date[index].age,
			pc->date[index].sex,
			pc->date[index].tele,
			pc->date[index].addr);
		return;
	}

	printf("无法找到联系人\n");
	return;
}

void ShoContact(Contact* pc)
{
	assert(pc);
	if (0 == pc->count)
	{
		printf("无联系人\n");
	}

	printf("%-10s %-5s %-15s %-20s %-20s\n",
		"姓名", "年龄", "性别", "电话", "地址");

	for (int i = 0; i < pc->count; i++)
	{
		printf("%-10s %-5d %-15s %-20d %-20s\n",
			pc->date[i].name,
			pc->date[i].age,
			pc->date[i].sex,
			pc->date[i].tele,
			pc->date[i].addr);
		printf("\n");
	}
	
	return 0;
}

void ModContact(Contact* pc)
{
	assert(pc);
	char name[20];
	printf("请输入要修改的人的姓名：");
	scanf("%s", name);

	int index = Find_name(pc, name);
	int define = 0;

	if (index == -1)
	{
		printf("该联系人不存在\n");
		return;
	}
	do
	{

		printf("********************************************\n");
		printf("**** 1.姓名             2.年龄    ***********\n");
		printf("**** 3.性别             4.电话    ***********\n");
		printf("**** 5.地址             0：退出   ***********\n");
		printf("********************************************\n");
		printf("请选择要更改的信息:");
		scanf("%d", &define);

		switch (define)
		{
		case 1:
			printf("请输入名字：");
			scanf("%s", pc->date[index].name);
			break;
		case 2:
			printf("请输入年龄：");
			scanf("%d", &pc->date[index].age);
			break;
		case 3:
			printf("请输入性别：");
			scanf("%s", pc->date[index].sex);
			break;
		case 4:
			printf("请输入电话：");
			scanf("%d", pc->date[index].tele);
			break;
		case 5:
			printf("请输入地址：");
			scanf("%s", pc->date[index].addr);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}	
		printf("修改成功！\n");
	} while (define);

	return;
}


int CompareName(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
	//e实际指向的是PeoInfo结构体元素,因此必须强制转换为PeoInfo*类型
}


void SorContact(Contact* pc)
{
	//按名字排序
	assert(pc);
	//qsort(pc->date, pc->count, sizeof(pc->date[0]), CompareName(pc));                     //void qsort(
	qsort(pc->date, pc->count, sizeof(PeoInfo), CompareName);                     //void qsort(
								  //void* base,          // 待排序数组的首地址（即数组名）
								  //size_t nitems,       // 数组中元素的个数
								  //size_t size,         // 单个元素的字节大小（用sizeof计算）
								  //int (*compar)(const void*, const void*)  // 自定义比较函数指针
							 	  //	);
											/*1. 接收两个 const void* 类型参数（指向待比较的两个元素）；
											2. 返回值规则：
											- 负数：第一个元素 < 第二个元素（升序时放前面）；
											- 0：两个元素相等；
											- 正数：第一个元素 > 第二个元素（升序时放后面*/
	printf("排序成功\n");
	return;
}