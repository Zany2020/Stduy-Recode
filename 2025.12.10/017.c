#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//void change(int (*a)[10], int r, int c)
//{
//	int change_row = c;//3
//	int change_col = r;//2
//
//	for (int i = 0; i < change_row; i++)//3
//	{
//		for (int j = i; j <= change_col; j++)//2
//		{			
//			int temp = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int row = 0;
//	int col = 0;
//	scanf("%d %d", &row, &col);
//
//	if (row >= 1 && row <= 10 && col >= 1 && col <= 10)
//	{
//		int arr[10][10] = { 0 };
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//
//		change(arr, row, col);
//		printf("\n");
//
//
//		for (int i = 0; i < col; i++)
//		{
//			for (int j = 0; j < row; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	int arr[10][10];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("no");
				return 0;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i][i] == 0)
		{
			printf("no");
			return 0;
		}
	}

	printf("yes");
	return 0;
}