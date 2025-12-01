#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void Fact(int n)
//{
//	int result = 1;
//	for (int m = 1; m <= n; m++)
//	{
//		result *= m;
//		printf("%d\n", result);
//	}
//	
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Fact(n);
//
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////

//void Average_num(int *arr)
//{
//	int sum = arr[0];
//	for (int i = 1; i </**/ 40; i++)
//	{
//		sum += arr[i];
//	}
//	int ave_num = sum / 40;
//	printf("%d ", ave_num);
//
//}
//
//void Median(int* arr)
//{
//	// 先创建数组副本，避免修改原数组（不影响后续众数计算）
//	int temp[40];
//	for (int i = 0; i < 40; i++)
//	{
//		temp[i] = arr[i];
//	}
//
//	//冒泡排序：
//	for (int j = 0; j < 39; j++)
//	{
//		for (int i = 0; i < 39 - j; i++)
//		{
//			if (temp[i] > temp[i + 1])
//			{
//				int swap = temp[i];
//				temp[i] = temp[i + 1];
//				temp[i + 1] = swap;
//			}
//		}
//	}
//
//	int middle = (temp[19] + temp[20]) / 2;
//	printf("%d ", middle);
//}
//
//
//
//
////void Median(int* arr)
////{
////	int n = arr[0];
////	
////	for (int j = 0; j < 40; j++)
////	{
////		for (int i = 1; i <= 40; i++)
////		{
////			if (n >= arr[i])
////			{
////				n = arr[i];
////				arr[j] = arr[i];
////			}
////
////		}
////	}
////
////	int middle = (arr[20] + arr[21]) / 2;
////	printf("%d ", middle);
////}
//
////void Mode(int* arr)
////{
////	int n = arr[0];
////
////	for (int j = 0; j < 40; j++)
////	{
////		for (int i = 1; i <= 40; i++)
////		{
////			if (n >= arr[i])
////			{
////				n = arr[i];
////				arr[j] = arr[i];
////			}
////		}
////	}
////
////	int s[10];
////	int max_num[10];
////
////	for (int j = 0; j < 10; j++)
////	{
////		for (int i = 0; i < 40; i++)
////		{
////			if (arr[i] < arr[i + 1])
////			{
////				s[j] = arr[i];
////				max_num[j] = i;
////				break;
////			}
////
////		}
////	}
////
////	int _max = max_num[0];
////	for (int i = 1; i <= 10; i++)
////	{
////		if (_max < max_num[i])
////		{
////			_max = max_num[i];
////		}
////	}
////
////	int _num = 0;
////	while (1)
////	{
////		int i = 0;
////		if (max_num[i] == _max)
////		{
////			_num = i;
////		}
////		i++;
////	}
////
////	printf("%d ", s[_num]);
////
////}
//
//
//void Mode(int* arr)
//{
//	int count[11] = { 0 };
//
//	for (int i = 0; i < 40; i++)
//	{
//		int score = arr[i];
//		count[score]++;
//	}
//
//	int max_count = 0;
//	int mode = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		if (count[i] > max_count)
//		{
//			max_count = count[i];
//			mode = i;
//		}
//	}
//
//	printf("%d ", mode);
//}
//
//
//
//
//
//int main()
//{
//	int feedback[41];
//
//	for (int i = 0; i < 40; i++)
//	{
//		scanf("%d", &feedback[i]);
//	}
//
//	Average_num (feedback);
//	Median(feedback);
//	Mode(feedback);
//
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////

//-最长英文单词
//
//#include<string.h>
//
//void maxword(char *input)
//{
//	char current_word[100];
//	char longest_word[100] = { 0 };
//	int current_len = 0;
//	int max_len = 0;
//	int i = 0;
//
//	while (input[i] != '\0')
//	{
//		if (input[i] == ' ' || input[i] == '\n')
//		{
//			if (current_len > 0)
//			{
//				current_word[current_len] = '\0';
//				if (current_len > max_len)
//				{
//					max_len = current_len;
//					strcpy(longest_word, current_word);
//				}
//				current_len = 0;
//			}
//			
//		}
//		else
//		{
//			current_word[current_len++] = input[i];
//		}
//		i++;
//
//	}
//	printf("%s\n", longest_word);
//
//}
//
//
//int main()
//{
//	char input[1000];
//
//	fgets(input, sizeof(input), stdin);
//	maxword(input);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////

//#include<math.h>
//int main()
//{
//	float a, b, c, d;
//	scanf("%f %f %f %f", &a, &b, &c, &d);
//
//	float root = newton(a, b, c, d);
//
//	printf("%d.2f\n", root);
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////

//void transpose(int rem[3][3])
//{
//	int temp = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = i + 1; j < 3; j++)
//		{
//			temp = rem[i][j];
//			rem[i][j] = rem[j][i];
//			rem[j][i] = temp;
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", rem[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int rem[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &rem[i][j]);
//		}
//	}
//
//	transpose(rem);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////

//void revstr(char *wow)
//{
//	int i = 0;
//	while (wow[i] != '\0')
//	{
//		i++;
//	}
//
//	for (int n = i; n >= 0; n--)
//	{
//		printf("%c", wow[n]);
//	}
//}
//
//
//int main()
//{
//	char wow[30];
//	fgets(wow, sizeof(wow), stdin);
//	
//	revstr(wow);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////

void selection_sort(int arr[], int n)
{
	if (n < 1)
	{
		return;
	}

	int max_idx = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[max_idx])
		{
			max_idx = i; //找到最大值 
		}
	}

	if (max_idx != n - 1)//
	{
		int temp = arr[max_idx];
		arr[max_idx] = arr[n - 1];
		arr[n - 1] = temp;
	}

	selection_sort(arr, n - 1);

	//int m = 0;
	//int max = arr[0];
	//for (int i = 0; i < n - m; i++)
	//{
	//	if (arr[i + 1] < max)
	//	{
	//		max = arr[i];

	//		int temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;

	//		m++;
	//	}
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d", arr[i]);
	//}

}



int main()
{
	int n;
	int arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}

	selection_sort(arr, n);

	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}