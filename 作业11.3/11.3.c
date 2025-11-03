#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<assert.h>
//#define row 100
//#define col 100
//
//int main()
//{
//	int n = 0;
//	int arr[row][col] = {0};
//	scanf("%d", &n);
//	assert(n < row);
//
//	for (int i = 0; i <= n; i++)
//	{
//		int j = 0;
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}																					
//	}	
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//	
	
////////////////////////////////////////////////////
//#define row 3
//#define col 3
//错误
//int transpose(int arr[row][col])
//{
//	if (row != col)
//	{
//		arr[row][col] = arr[col][row];
//		//未通过循环交换元素，直接赋值无意义
//	}
//	return 1;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int arr[row][col] = { 0 };
//
//	for (n = 0; n <= 2; n++)
//		//索引范围是 0~2，但循环中使用 n <= row（即 n <= 3），导致访问 arr[3][...] 越界
//	{
//		for (n = 0; n <= 2; n++)
//		{
//			scanf("%d ", &arr[row][col]);
//			scanf("%d ", &arr[row][col]);
//		}
//	}
// //内外层循环均使用变量 n，导致内层循环结束后 n 的值被修改，外层循环无法正常执行
//
//	transpose(arr[row][col]);
//	//函数需要的是二维数组首地址 arr而不是arr[row][col]（一个 int 值）
//
//	for (n = 0; n <= 2; n++)
//	{
//		for (n = 0; n <= 2; n++)
//		{
//			printf("%d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}


//void transpose(int arr[row][col])
//{
//    if (row == col)
//    {
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = i + 1; j < col; j++)
//            {
//                int temp = arr[i][j];
//                arr[i][j] = arr[j][i];
//                arr[j][i] = temp;
//            }
//        }      
//    }
//}
//
//
//int main()
//{
//    int arr[row][col] = { 0 };
//    int i, j;
//    
//    for (i = 0; i < row; i++)  // 行索引：0~2
//    {
//        for (j = 0; j < col; j++)  // 列索引：0~2
//        {
//            scanf("%d", &arr[i][j]);  // 正确访问arr[i][j]
//        }
//    }
//
//    // 调用转置函数（传入数组首地址）
//    transpose(arr);
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < col; j++)
//        {
//            int n = arr[i][j];
//            printf("%d ", n);
//        }
//        printf("\n");
//
//    }
//    return 0;
//}
////////////////////////////////////////////////////


//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//
//	int n = i;
//	while(1)
//	{
//		
//		if ( i % n == j % n && i % n == 0)
//		{
//			printf("%d ", n);
//			break;
//		}
//		n--;
//	}
//
//	int max;
//	if (i < j)
//	{
//		max = j;
//	}
//	else if (i > j)
//	{
//		max = i;
//	}
//	else
//	{
//		max = i;
//	}
//
//	int m = max;
//	while (1)
//	{
//		if (m % i == m % j && m % i == 0)
//		{
//			printf("%d", m);
//			break;
//		}
//		m++;
//	}
//
//	return 0;
//}
////////////////////////////////////////////////////
//穷举法

//int main() 
//{
//	int m, w, c;
//	// 穷举男人的可能数量（0到10）
//	for (m = 0; m <= 10; m++) 
//	{
//		w = 20 - 2 * m;  // 根据简化方程计算女人数量
//		c = 30 - m - w;  // 根据总人数计算小孩数量
//		// 验证是否满足总花费条件（双重验证，确保正确性）
//		if (3 * m + 2 * w + c == 50)
//		{
//			printf("%d %d %d\n", m, w, c);
//		}
//	}
//	return 0;
//}

////暴力枚举法
//int main()
//{
//	int man, woman, kid;
//	
//	for (int man = 0; man <= 10; man++)
//	{
//		for (int woman = 0; woman <= 20; woman++)
//		{
//			for (int kid = 0; kid <= 20; kid++)
//			{
//				if (man * 3 + woman * 2 + kid == 50 && kid == 30 - woman - man)
//				{
//					printf("%d %d %d\n", man, woman, kid);
//				}
//			}
//		}
//	}
//	return 0;
//}
////////////////////////////////////////////////////
//
//void check(int num)
//{
//	if (num < 2)
//	{
//		return;
//	}
//
//	int sum = 1;//因子
//	int factor[100];//储存因子
//	int count = 1;//因子个数
//	factor[0] = 1;
//
//	for (int i = 2; i <= num / 2; i++)
//	{
//		if (num % i == 0)
//		{
//			sum += i;
//			factor[count++] = i;
//		}
//	}
//	if (sum == num)
//	{
//		printf("%d:its factors are ", num);
//		for (int i = 0; i < count; i++)
//		{
//			printf("%d ", factor[i]);
//		}
//		printf("\n");
//	}
//}
//
//
//
//int main()
//{
//	for (int num = 1; num <= 1000; num++)
//	{
//		check(num);
//	}
//	return 0;
//}

////////////////////////////////////////////////////
//
//#include<math.h>//注意多包含了一个math.h头文件
//int main()
//{
//	double pi = 0.0, t = 1.0;
//	double n = 1.0, s = 1.0;
//	while (fabs(t) > 1.0e-7) 
//	{
//		pi = pi + t;
//		n = n + 2;
//		s = -s;
//		t = s * 1.0 / n; 
//	}
//	pi = pi * 4;
//	printf("pi=%f", pi);
//	return 0;
//}
////////////////////////////////////////////////////
//F(n)=F(n−1)+F(n−2)斐波那契数列

//int main()
//{
//	int n = 12;
//	long long a = 1, b = 1, result;
//	for (int i = 3; i <= n; i++)
//	{		
//		result = a + b;
//		a = b;
//		b = result;	
//	}
//	printf("%d", result);
//	return 0;
//}
////////////////////////////////////////////////////

int main()
{
	int n = 0;
	scanf("%d", &n);

	while (1)
	{
		if (n % 2 == 0)
		{
			int m = n / 2;
			printf("%d/2=%d\n", n, m);
			n = m;
		}
		else
		{
			if (n == 1)
			{
				break;
			}
			else
			{
				int i = n * 3 + 1;
				printf("%d*3+1=%d\n", n, i);
				n = i;
			}

		}
	}
}
