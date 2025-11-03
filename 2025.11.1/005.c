#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


////递归方式打印一个数的每一位
//
//void Recursion(int n)
//{
//
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		Recursion(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	Recursion(num);
//
//	return 0;
//}

//////////////////////////////////////
////求阶乘
//
//int Factorial(int n)
//{
//	if (n == 1 || n == 0)//
//	{
//		return 1;//
//	}
//	return n * Factorial(n - 1);	//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int m = Factorial(n);
//	printf("%d", m);
//
//	return 0;
//}

//////////////////////////////////////
////求素数
//#include <math.h>
//
//int isPrime(int m)
//{
//	if (m <= 1) 
//	{
//		return 0;
//	}
//	// 2是最小的素数
//	if (m == 2) 
//	{
//		return 1;
//	}
//	// 偶数一定不是素数（除了2）
//	if (m % 2 == 0)
//	{
//		return 0;
//	}
//	int sqrtm = sqrt(m);
//	for (int i = 3; i <= sqrtm; i+= 2)
//	{
//		if (m % i == 0)
//		{
//			return 0;
//		}
//		return 1;
//
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (isPrime(n)) 
//	{
//		printf("%d is a prime number\n", n);
//	}
//	else 
//	{
//		printf("%d is not a prime number\n", n);
//	}
//	
//	return 0;
//}
//////////////////////////////////////
//e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
//根据这种计算方式编程计算e的近似值，直到最后一项的绝对值小于10 - 5时为止，输出e的值并统计累加的项数。输出e值要求小数点后必须保留6位有效数字（四舍五入）
// ，不足补零。输出e的值和累加的项数，两项之间用一个空格隔开。输出e值要求小数点后必须保留6位有效数字（四舍五入），不足补零

//double Factorial(int n)
//{
//	if (n == 1 || n == 0)//
//	{
//		return 1;//
//	}
//	return n * Factorial(n - 1);	//
//}
//
//
//int main()
//{
//	int n = 0;
//	double e = 0.0;
//	int count = 0;
//	while (1) {
//		double term = 1.0 / Factorial(n);  
//		if (term < 1e-5)
//		{ 
//			break;
//		}
//		e += term;  
//		count++; 
//		n++;
//	}
//
//	printf("%.6f %d", e, n);
//	return 0;
//}
//////////////////////////////////////
//int main()
//{
//	printf("*   *\n");
//	printf("*   *\n");
//	printf("*****\n");
//	printf("*   *\n");
//	printf("*   *\n");
//
//	return 0;
//}
//////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////********************************
//某女生因减肥每餐限制摄入热量900卡，
//可以选择的食物包括主食一份面条160卡，副食一份桔子40卡，一份西瓜50卡，一份蔬菜80卡，
//请编程帮助该女生计算如何选择一餐的食物，使得总的热量为900卡，
//同时至少包含一份面条和一份水果，而且总的份数不超过10份。
//int main()
//{
//	int a = 160;
//	int b = 40;
//	int c = 50;
//	int d = 80;
//
//	int x, y, n, m;
//	x* a + y * b + n * c + m * d <= 900;
//	x + y + n + m <= 10;
//	if (x >= 1 && b >= 1 || x >= 1 && c >= 1)
//	{
//		printf("%d %d %d %d\n", x, y, n, m);
//	}
//	return 0;
//}

// 枚举法
//int main()
//{
//	int n1, n2, n3, n4;
//	int count = 0;
//
//	for (n1 = 1; n1 <= 5; n1++)
//	{
//		for (n2 = 0; n2 <= 10; n2++)
//		{
//			for (n3 = 0; n3 <= 10 - n1 - n2; n3++)
//			{
//				if (n2 + n3 < 1) 
//				{
//					continue;  // 跳过无水果的情况
//				}
//				int remaining = 900 - 160 * n1 - 40 * n2 - 50 * n3;
//				if (remaining < 0)
//				{
//					continue;//超过了
//				}
//				if (remaining % 80 != 0)
//				{
//					continue;
//				}
//				n4 = remaining / 80;
//				if (n4 >= 0 && (n1 + n2 + n3 + n4) <= 10)
//				{
//					printf("%d %d %d %d\n", n1, n2, n3, n4);
//				}
//			}
//		}
//	}
//	return 0;
//}
//////////////////////////////////////
int main() 
{
    // 用unsigned long long存储总和（最大可表示18446744073709551615，即2^64-1）
    double sum = 0;
    double grain = 1;  // 第1格的麦粒数：2^0 = 1

    for (int i = 1; i <= 64; i++) 
    {
        sum += grain;  // 累加当前格子的麦粒数//
        if (i < 64) 
        {    // 最后一格无需再计算下一格（避免溢出）
            grain *= 2;  // 下一格的麦粒数是当前的2倍//
        }
    }
    printf("sum = %22.0f\n", sum);
    return 0;
}