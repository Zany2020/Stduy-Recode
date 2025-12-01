#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>
//
//
//void Find_sum_average(int num, float score[30][2])
//{
//	float sum = 0;
//	float average = 0;
//
//	for (int i = 0; i < num; i++)
//	{
//		sum += score[i][1];
//	}
//	average = sum / num; //结果会自动是浮点数（无需额外处理）
//	//C 语言中存在「隐式类型转换」：当不同类型的变量进行运算时，
//	//编译器会自动将「精度低的类型」转换为「精度高的类型」，再计算
//
//	printf("%.0f %.2f\n", round(sum), average);
//	//round(sum) 四舍五入取整
//}
//
//void Score_high(int num, float score[30][2])
//{
//	// 复制原始数据到临时数组（避免修改原数组）
//	float temp_arr[30][2];
//	for (int i = 0; i < num; i++)
//	{
//		temp_arr[i][0] = score[i][0]; // 学号
//		temp_arr[i][1] = score[i][1]; // 成绩
//	}
//
//	for (int i = 0; i < num - 1; i++)
//	{
//		//int n = temp_arr[0][1];
//		//int m = temp_arr[0][0];
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (temp_arr[j][1] < temp_arr[j+1][1])
//			{
//				float temp = temp_arr[j][1];
//				temp_arr[j][1] = temp_arr[j+1][1];
//				temp_arr[j+1][1] = temp;
//
//				float Temp = temp_arr[j][0];
//				temp_arr[j][0] = temp_arr[j+1][0];
//				temp_arr[j+1][0] = Temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%.0f %.1f\n", temp_arr[i][0], temp_arr[i][1]);
//	}
//
//}
//
//
//void Number_min(int num, float score[30][2])
//{
//
//	float temp_arr[30][2];
//	for (int i = 0; i < num; i++)
//	{
//		temp_arr[i][0] = score[i][0]; // 学号
//		temp_arr[i][1] = score[i][1]; // 成绩
//	}
//
//	for (int i = 0; i < num - 1; i++)
//	{
//		//int n = temp_arr[0][1];
//		//int m = temp_arr[0][0];
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (temp_arr[j][0] > temp_arr[j + 1][0])
//			{
//				float temp = temp_arr[j][0];
//				temp_arr[j][0] = temp_arr[j + 1][0];
//				temp_arr[j + 1][0] = temp;
//
//				float Temp = temp_arr[j][1];
//				temp_arr[j][1] = temp_arr[j + 1][1];
//				temp_arr[j + 1][1] = Temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%.0f %.1f\n", temp_arr[i][0], temp_arr[i][1]);
//	}
//
//}
//
//void Find_check(int num, float score[30][2], int check)
//{
//	for (int i = 0; i < num; i++)
//	{
//		if (check == score[i][0])
//		{
//			printf("%.0f %.1f\n", score[i][0], score[i][1]);
//		}
//	}
//
//
//}
//
//void Arrange_score(int num, float score[30][2])
//{
//	int excellent = 0;
//	int good = 0;
//	int medium = 0;
//	int pass = 0;
//	int fail = 0;
//	for (int i = 0; i < num; i++)
//	{
//		if (score[i][1] >= 90 && score[i][1] <= 100)
//			excellent++;
//		else if (score[i][1] >= 80 && score[i][1] <= 89)
//			good++;
//		else if (score[i][1] >= 70 && score[i][1] <= 79)
//			medium++;
//		else if (score[i][1] >= 60 && score[i][1] <= 69)
//			pass++;
//		else
//			fail++;
//	}
////		float sum_type = excellent + good + medium + pass + fail;
////		float n1, n2, n3, n4, n5;
////
////		if (excellent > 0)
////		{
////			n1 = (sum_type / excellent) * 100;
////
////		}
////		else
////		{
////			n1 = 0.00;
////
////		}
//////
////		if (good > 0)
////		{
////			n2 = (sum_type / good) * 100;
////		}
////		else 
////		{
////			n2 = 0.00;
////		}
//////
////		if (medium > 0)
////		{
////			n3 = (sum_type / medium) * 100;
////		}
////		else
////		{
////		n3 = 0.00;
////		}
//////
////		if (pass > 0)
////		{
////			n4 = (sum_type / pass) * 100;
////		}
////		else
////		{
////			n4 = 0.00;
////		}
//////
////		if (fail > 0)
////		{
////			n5 = (sum_type / fail) * 100;
////		}
////		else
////		{
////			n5 = 0.00;
////		}
////
//
//	float rate_excel = num > 0 ? (excellent * 100.0) / num : 0.0;
//	float rate_good = num > 0 ? (good * 100.0) / num : 0.0;
//	float rate_medium = num > 0 ? (medium * 100.0) / num : 0.0;
//	float rate_pass = num > 0 ? (pass * 100.0) / num : 0.0;
//	float rate_fail = num > 0 ? (fail * 100.0) / num : 0.0;
//
//		printf("%d %.2f%%\n", excellent, rate_excel);
//		printf("%d %.2f%%\n", good, rate_good);
//		printf("%d %.2f%%\n", medium, rate_medium);
//		printf("%d %.2f%%\n", pass, rate_pass);
//		printf("%d %.2f%%\n", fail, rate_fail);
//	
//
//}
//
//int main()
//{
//	int num = 0;
//	int check = 0;
//	scanf("%d", &num);
//	float score[30][2];
//
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			scanf("%f", &score[i][j]);
//			//scanf 的格式符 不允许加 .1 这种精度控制
//		}
//	}
//
//	scanf("%d", &check);
//
//	Find_sum_average(num, score);
//	Score_high(num, score);
//	Number_min(num, score);
//	Find_check(num, score, check);
//	Arrange_score(num, score);
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//#define ROW 2
//#define COL 3
//
////函数功能：计算矩阵相乘之积，结果存于二维数组c中
//void MultiplyMatrix(int a[ROW][COL], int b[COL][ROW], int c[ROW][ROW])
//{
//	int i, j, k;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < ROW; j++)
//		{
//			c[i][j] = 0;
//			for (k = 0; k < COL; k++)
//			{
//				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
//			}
//		}
//	}
//}
//
////函数功能：输出矩阵a中的元素
//void PrintMatrix(int c[ROW][ROW])
//{
//	int i, j;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < ROW; j++)
//		{
//			printf("%6d", c[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int a[ROW][COL], b[COL][ROW], c[ROW][ROW], i, j;
//	printf("Input 2*3 matrix a:\n");
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("Input 3*2 matrix b:\n");
//	for (i = 0; i < COL; i++)
//	{
//		for (j = 0; j < ROW; j++)
//		{
//			scanf("%d", &b[i][j]);//注意&
//		}
//	}
//	MultiplyMatrix(a, b, c);
//	printf("Results:\n");
//	PrintMatrix(c);
//	return 0;
//}
// 
///////////////////////////////////////////////////////////////////////////////////////////////////


void arrange(int arr[10], int low, int high)
{
	if (low <= high)
	{
		return;
	}
	int num = arr[low];
	int n = low;
	int m = high;

	while (n < m)
	{
		//右指针左移
		while (n < m && arr[m] >= num)
		{
			m--;
		}
		//这里已经找到小于基准的数arr[m]了


		//左指针右移
		while (n < m && arr[n] <= num)
		{
			n++;
		}
		//这里已经找到大于基准的数arr[n]了;

		if (n < m)
		{
			int temp = arr[n];
			arr[n] = arr[m];
			arr[m] = temp;
		}
	
	}

	arr[n] = num;//n == m 的时候

	arrange(arr, low, n - 1);
	arrange(arr, n + 1, high);
}


int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	arrange(arr, 0, 9);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}