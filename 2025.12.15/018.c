#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>

//输入
//
//包含三个整数，相邻两项之间用一个空格隔开。
//
//输出
//
//排序后的整数，相邻两项之间用一个空格隔开。
//
//输入示例
//
//90 7 158
//
//输出示例
//
//7 90 158
//////////////////////指针操作数组元素.///////////////////

//void sort(int* num)
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2 - i; j++)
//		{
//			if (*(num + j) > *(num + j + 1))
//			{
//				int temp = *(num + j);
//				*(num + j) = *(num + j + 1);
//				*(num + j + 1) = temp;
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	//int a, b, c;
//	//scanf("%d %d %d", &a, &b, &c);
//
//	//int* a = &a;
//	//int* b = &b;
//	//int* c = &c;
//	int num[3];
//	scanf("%d %d %d", num, num + 1, num + 2);
//
//	sort(num);
//
//	printf("%d %d %d", *num, *(num + 1), *(num + 2));
//	//这里的num已经是地址了，*是解引用
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////

//输入
//
//包含三行，每行均为不超过80个字符的字符串。
//
//输出
//
//按从小到大顺序输出排序后的字符串，每个字符串占一行。
//
//输入示例
//
//I study very hard.
//C language is very interesting.
//He is a professor.
//
//输出示例
//
//C language is very interesting.
//He is a professor.
//I study very hard.

//void swap(char** p1, char** p2)//这种东西传类型相同的,因为*(a+j)是char**类型所以就用char**
//{
//	char *temp = *p1; //p1是指针Character[j]的地址，*解引用得到其指针Character[j]的值
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//
//
//void sort(char** a[3])//存一维指针的地址,用的是二维指针
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2 - i; j++)
//		{
//			if (strcmp(*(a+j), *(a+j+1)) > 0)
//			{
//				swap(*(a+j), *(a+j+1)); //*(a+j) == a[j] == 字符串首元素地址
//			}
//
//		/*	if (a[j] > a[j + 1])
//			{
//				int temp = *(char*)a[j];
//				*(char*)a[j] = *(char*)a[j+1];
//				*(char*)a[j + 1] = temp;
//			}*/
//		}
//	}
//
//}
//
//
//
//int main()
//{
//	char arr[3][80];
//	char* Character[3];//指针数组里每一个数都是char*
//	for (int i = 0; i < 3; i++)
//	{
//	//	fgets(Character[i], sizeof(Character[i]), stdin);
//		fgets(*(arr +i), sizeof(arr[i]), stdin);
//
//		size_t len = strlen(*(arr + i));
//		//size_t 是无符号整形类型，表示非负数值；
//		//若用int len接收，当字符串长度大于int最大值的时候会溢出
//		if (len > 0 && arr[i][len - 1] == '\n')
//		{
//			arr[i][len - 1] = '\0';
//		}
//		Character[i] = arr[i];//Character指针存的是地址
//		//P213!!!这里的arr[i]是二维数组的一个行的地址，所以成立地址传地址（都是char*）
//	}
//
//	sort(Character);
//	//数组的首元素是 Character[0]，类型为 char*
//	//Character是char*类型，而传入函数的是地址，指向*的地址就是**类型
//	//数组名 Character 传参时，等价于把 &Character[0] 传给函数，类型自然变成 char**
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n", *(Character + i));
//	}
//
//	return 0;
//}
//

/////////////////////////////////////////////////////////////////////

//
//C语言本质 - 指针 - 数组后移
//
//题目描述
//
//有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数。请编写move函数实现以上功能，请使用指针实现。
//在主函数中输入n个整数存入数组，调用move函数，最后再输出调整后的n个数。
//
//输入
//
//包含三行：
//第一行是正整数n（0 < n <= 100）。
//	第二行是n个整数，相邻两项之间用一个空格隔开。
//	第三行是非负整数m，代表向后移几个位置，已知0 < m <= n。
//
//	输出
//
//	一行，为调整后的n个数，相邻两项之间用一个空格隔开。
//
//	输入示例
//
//	8
//	12 43 65 67 8 2 7 11
//	4
//
//	输出示例
//
//	8 2 7 11 12 43 65 67


//void move(int** num, int m, int len)//num是a的地址; *num是a的元素，arr的地址; **num是arr的元素
//{
//	//	12 43 65 67 8 2 7 11
//	//	8 2 7 11 12 43 65 67
//	//int len = 0;
//	//for (int i = 0; i < 100; i++)
//	//{
//	//	if (num[i] == '\0')
//	//		 len = i - 1;
//	//}
//		
//	//for (int i = 0; i < m; i++)
//	//{
//	//	int* temp = *(num + i);
//	//	*(num + i) = *(num + len - i);
//	//	*(num + len - i) = temp;
//	//}
//
//	int* temp[100];
//	for (int i = 0; i < m; i++)
//	{
//		temp[i] = *(num + i);
//	}
//
//	for (int i = 0; i < len - m; i++)
//	{
//		*(num + i) = *(num + m + i);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		*(num + len - m + i) = *(temp + i);
//	}
//
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[100];
//	int* a[100];
//
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		//a[i] = arr[i];//a放的是arr的地址
//		//p131!!!!!!!!!
//		a[i] = &arr[i];
//	}
//	//arr[n + 1] = '\0';
//	//int 数组不能用 '\0'
//	scanf("%d", &m);
//
//	move(a, m, n);
//
//	for (int j = 0; j < n; j++)
//	{
//		printf("%d ", *(*(a + j)));
//	}
//	
//	return 0;
//}

/////////////////////////////////////////////////////////////////////
//
//
//#include <stdio.h>
//
//void InputArray(int* pa, int n)
//{
//	int* p_end = pa + n;
//	for (; pa < p_end; pa++)
//	{
//		scanf("%d", pa);
//	}
//}
//void OutputArray(int* pa, int n)
//{
//	int* p_end = pa + n;
//	for (; pa < p_end; pa++)
//	{
//		printf("%4d", *pa);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a[5];
//	InputArray(a, 5);
//	OutputArray(a, 5);
//	return 0;
//}

//#include <stdio.h>
//
//void InputArray(int* pa, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &pa[i]);
//	}
//}
//void OutputArray(int* pa, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%4d", *(pa + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a[5];
//	printf("Input five numbers:");
//	InputArray(a, 5);
//	OutputArray(a, 5);
//	return 0;
//}

/////////////////////////////////////////////////////////////////////
//
//#include <stdio.h>
//void Print(char* arr[], int len);
//
//int main()
//{
//	char* pArray[] = { "How","are","you" };
//	int num = sizeof(pArray) / sizeof(char*);
//
//	printf("Total string numbers = %d\n", num);
//	Print(pArray, num);
//
//	return 0;
//}
//
//
//void Print(char* arr[], int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	printf("\n");
//}