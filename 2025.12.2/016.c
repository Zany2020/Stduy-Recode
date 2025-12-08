#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

////1.求最小公倍数
//void find(int a, int b)
//{
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//
//	for (int i = max; i <= a * b; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d", i);
//			break;
//		}		
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	find(a, b);
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////
//倒置字符串。但不倒置标点符号；
//错了！！！！！！！！！！！！！！！！！！！！

/////////////////////////////////////
//void Inversion(char* s, int n)
//{
//	for (int i = 0; i < (n / 2); i++)
//	{
//		int temp = s[i];
//		s[i] = s[n - 1 - i];
//		s[n - 1 - i] = temp;
//		//n--;
//
//		//if (i + 1 == n)
//		//{
//		//	break;
//		//}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%c", s[i]);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	char string[1000];
//	for (i = 0; i < 1000; i++)
//	{
//		scanf("%c", &string[i]);
//		if (string[i] == '\n')
//		{
//			break;
//		}
//	}
//	string[i] = '\0';
//
//	Inversion(string, i);
//
//	return 0;
//}
/////////////////////////////////////

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;		
//	}
//
//}
//
//int main()
//{
//	char arr[101] = { 0 };
//	fgets(arr, sizeof(arr), stdin);
//
//	int len = strlen(arr);
//	if (len > 0 && arr[len - 1] == '\n')
//	{
//		arr[len - 1] = '\0';
//		len--;
//	}
//
//	reverse(arr, arr + len - 1);
//	//传的是地址；
//
//	char* start = arr;
//
//	while (*start)//\0为假
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);
//		if(*end != '\0')
//			end++;
//		start = end;
//		//start 是指针变量，*end 是指针指向的值，两者类型完全不匹配，不能直接赋值
//	}
//
//	printf("%s", arr);
//
//	return 0;
//}