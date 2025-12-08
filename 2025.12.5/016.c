#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void printf1(int (*p)[3], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}


int main()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	printf1(arr, 2, 3);

	return 0;
}