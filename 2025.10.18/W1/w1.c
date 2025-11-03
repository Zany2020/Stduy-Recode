#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//	if (i < 0 || i > 100)
//    {
//		printf("Input Error!");
//    }
//	else
//	{
//
//
//		switch(i / 10)
//		{
//		case 10:
//		case 9:
//			printf("A");
//			break;
//		case 8:
//			printf("B");
//			break;
//		case 7:
//			printf("C");
//			break;
//		case 6:
//			printf("D");
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:
//			printf("E");
//			break;
//		}
//	}
//
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	int a = 0;
//	float b = 0.0f;
//	int c = 0;
//                     //!!!!!!!//
////由于A、B、C始终为 0，所有条件判断（A&&B&&C、A&&B等）都会失败，最终进入最外层的else分支，输出 “5
//
//
//	scanf("%d %f %d", &a, &b, &c);
//	     //这里要求空格输入就空格就好，%那里不用加逗号！！！！！！
//
//	int A = (a > 50);
//	int B = (0.7 > b);
//	int C = (c > 5600);
//
//	if (A && B && C)
//	{
//		printf("10\n");
//	}
//	else if (A && B)
//	{
//		printf("9\n");
//
//	}
//	else if (B && C)
//	{
//		printf("8\n");
//	}
//	else if (A && C)
//	{
//		printf("7\n");
//	}
//	else if (A || B || C)
//	{
//		printf("6\n");
//	}
//	else
//	{
//		printf("5\n");
//	}
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b < c || a + c < b || b + c <a)
//	{
//		printf("FALSE");
//	}
//	else
//	{
//		double s = (a + b + c) / 2.0;
//   //例如输入 3 4 5，(3+4+5)/2.0=6.0，用int接收还是 6，看似没问题
//   //但如果输入 2 3 4，(2+3+4)/2.0=4.5，用int接收会变成 4，导致后续面积计算错误
//   //所以除小数要用double
//		double result = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("%.02f\n", result);
//	}
//
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////

//int main() {
//    char ch;
//
//    scanf("%c", &ch);
//
//    // 判断字符类型用字符的 ASCII 码值范围来进行区分！！
//    if (ch >= 'A' && ch <= 'Z') {
//        printf("uppercase\n");
//    }
//    else if (ch >= 'a' && ch <= 'z') {
//        printf("lowercase\n");
//    }
//    else if (ch >= '0' && ch <= '9') {
//        printf("digital\n");
//    }
//    else {
//        printf("special\n");
//    }
//
//    return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	int x1, y1, x2, y2, x3, y3;
//	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
//	
//	long long left = (long long)(y2 - y1) * (x3 - x1); 
//	long long right = (long long)(y3 - y1) * (x2 - x1);
//	//使用long long类型存储计算结果，避免因坐标值过大导致整数溢出
//
//	if (left == right)
//	{
//		printf("on the same straight line\n");
//	}
//	else
//	{
//		printf("not on the same straight line\n");
//	}
//
//    return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%1d%1d%1d", &a, &b, &c);
	//%d 会从左到右读取尽可能长的连续数字作为第一个整数（a），直到遇到非数字字符
	//第一个 %d 读取 123 作为a,剩余没有数字了，b 和 c 仍保持初始值 0
	//用 %1d 强制限制每个 %d 只读取 1 位数字!!

	if (a == b && b == c && a == c)
	{
		int g1 = -1;
		printf("Security level:%d\n", g1);
	}
	else if (a == b + 1 && b == c + 1)
	{
		int g2 = 1;
		printf("Security level:%d\n", g2);
	}
	else if (a == b - 1 && b == c - 1)
	{
		int g4 = 1;
		printf("Security level:%d\n", g4);
	}
	else
	{
		int g3 = 0;
		printf("Security level:%d\n", g3);
	}

	return 0;
}