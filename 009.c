#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//
//int main()
//{
//	char s1[21];
//	char s2[21];
//	
//	scanf("%s", s2);
//
//	int i = 0;
//
//	while (1)
//	{
//		s1[i] = s2[i];
//		if (s2[i] == '\0')
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%s", s1);
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	int arr[3][3];
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			//% d后面的空格会导致scanf忽略空白字符（空格、回车等）
//			//但会额外等待下一个非空白字符才结束当前输入，可能需要多输入数据才能满足循环
//		}
//	}
//
//	int n = arr[1][1] + arr[2][2] + arr[0][0];
//	printf("%d\n", n);
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////

//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	
//	while (1)
//	{
//		scanf("%d %d", &m, &n);
//		if (m >= 3 && n <= 10)
//		{
//			break;
//		}
//	}
//
//	int arr[21][21];
//
//	for (int i = 0; i < m - 2; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	//变量的作用域（生效范围） 由定义它的代码块（用 {} 包裹的区域）决定
//
//	int max = 0;
//	int temp = 0;
//	int a = 0;
//	int b = 0;
//	int num = 0;
//
//	while (1)
//	{
//		for (int a = 0; a < m + 1; a++)
//		{
//			for (int b = 0; b < n - 1; b++)
//			{
//				if (arr[a][b] < arr[a][b + 1])
//				{
//					temp = arr[a][b + 1];
//				}
//				else
//				{
//					temp = arr[a][b];
//				}
//				//行里面最大的
//			}
//
//			//在外部作用域定义的变量，其值会被保留，不会因为离开内层 {} 而重置
//
//			int max = temp;
//
//			for (a = 0; a < m + 1; a++)
//			{
//				if (arr[a][b] < max)
//				{
//					max = arr[a][b];
//					//此时 b 的值是行循环结束后的 n-1（固定为最后一列）
//					// 导致只检查最后一列，而非当前行最大值所在的列
//				}
//			}
//
//			if (max == temp)
//			{
//				printf("A[%d][%d] = %d是鞍点\n", a, b, max);
//				num++;
//			}
//		}
//
//		if (num != 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("没有鞍点\n");
//			break;
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	int m, n;
//	do
//	{
//		scanf("%d %d", &m, &n);
//	} while (m < 3 || m > 10 || n < 3 || n > 10);//循环条件
//
//	int arr[10][10];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//输入数组
//
//	int num = 0;
//
//	for (int i = 1; i < m; i++)
//	{
//		int rowMax = arr[i][0];//假设第一个数为真
//		                       //假设法！！！！！！
//
//		int colM = 0;//记实最大值所在列
//
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] > rowMax)
//			{
//				rowMax = arr[i][j];
//				colM = j;
//			}
//		}//rowMax为一行里最大的
//
//		int andian = 1;// 假设是
//		for (int k = 0; k < m; k++)
//		{
//			if (arr[k][colM] < rowMax)
//			{
//				andian = 0;
//				break;
//			}
//		}
//		if (andian)
//		{
//			printf("A[%d][%d]=%d是鞍点\n", i + 1, colM + 1, rowMax);
//			num++;
//		}
//	}
//	if (num == 0)
//	{
//		printf("没有鞍点\n");
//	}
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////

//void transpose(int arr[3][3])
//{
//	int temp = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = i+ 1; j < 3; j++)
//		{
//			temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[3][3];
//	int n = 0;
//	int m = 0;
//
//	for (n = 0; n < 3; n++)
//	{
//		for (m = 0; m < 3; m++)
//		{
//			scanf("%d", &arr[n][m]);
//		}
//	}
//
//	transpose(arr);
//	
//	for (n = 0; n < 3; n++)
//	{
//		for (m = 0; m < 3; m++)
//		{
//			printf("%d ", arr[n][m]);
//		}
//		printf("\n");
//	}
//}
///////////////////////////////////////////////////////////////////////////////////////////////

//#include <stdbool.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	int arr[100];
//
//	for (int m = 0; m < N; m++)
//	{
//		scanf("%d ", &arr[m]);
//	}
//
//	bool check[100] = { 0 };
//
//	for (int m = 0; m < N; m++)
//	{
//		if (!check[arr[m]])
//		{
//			printf("%d ", arr[m]);
//			check[arr[m]] = 1;
//		}
//	}
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//    for (int i = 0; i <= n / 2; i++)
//    {
//        for (int j = 0; j < i; j++) 
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < n - 2 * i; j++) 
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    for (int i = n / 2 - 1; i >= 0; i--)
//    {
//        for (int j = 0; j < i; j++) 
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < n - 2 * i; j++) 
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////
