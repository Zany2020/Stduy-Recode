#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//快速排列
//void arrange(int a[10], int left, int right)
//{
//	if (left >= right)
//	{
//		return;
//	}
//
//	int l = left;
//	int r = right;
//	int num = a[l];
//
//	while (l < r)
//	{
//	
//
//		//右指针左移
//		while (l < r && num <= a[r])
//		{
//			r--;
//		}
//		//得到a[r]小于a[0]
//		a[l] = a[r];
//		//l++;
//
//		//左指针右移
//		while (l < r && num >= a[l])
//		{
//			l++;
//		}
//		//得到a[l]大于a[0];
//		a[r] = a[l];
//		//r--;
//
//		////交换
//		//int temp = a[r];
//		//a[r] = a[l];
//		//a[l] = temp;
//	}
//	a[l] = num;
//
//	//左边继续
//	arrange(a, left, l - 1);
//	//右边继续
//	arrange(a, r + 1, right);
//
//}
//
//
//
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	arrange(a, 0, 9);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////
//#include <string.h>
//
//char* revstr(char s[31])
//{
//	//int i = 0;
//	//for (int j = 0; j < 31; j++)
//	//{
//	//	if (s[j] == '\0')
//	//	{
//	//		i = j;
//	//		break;
//	//	}
//	//}
//
//	//int n = i;
//	//for (int j = 0; j < i / 2; j++)
//	//{		
//	//	char temp = s[j];
//	//	s[j] = s[n];
//	//	s[n] = temp;
//	//	n--;
//	//}
//
//	//return s[31];
//
//	int len = 0;
//	while (s[len] != '\0')
//	{
//		len++;
//	}
//
//	int left = 0;
//	int right = len - 1;
//
//	while (right > left)
//	{
//		char temp = s[left];
//		s[left] = s[right];
//		s[right] = temp;
//		left++;
//		right--;
//	}
//
//	return s;
//
//}
//
//
//
//int main()
//{
//	char Sen[31];
//	fgets(Sen, sizeof(Sen), stdin);	
//	Sen[strcspn(Sen, "\n")] = '\0';
//	printf("%s\n", revstr(Sen));
//
//
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#define MAX_LEN 11


int pos = 0;

void convert(int n, char str[])
{
	//int len = 1;
	//for (int i = 10; i < 10000000000; i * 10)
	//{
	//	if ((n / i) != 0)
	//	{
	//		len++;
	//		continue;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}

	//int j = 0;

	//for (int i = 10; i < 10000000000; i * 10)
	//{
	//	if ((n / i) != 0)
	//	{
	//		str[j] = (n / i);
	//		j++;
	//		continue;
	//	}
	//	else
	//		break;
	//}

	//return str;
	
	if (n < 10)
	{
		str[pos++] = n + '0';
		return;
	}

	convert(n / 10, str);
	str[pos++] = n % 10 + '0';
}


int main()
{
	int n;
	char str[MAX_LEN];
	scanf("%d", &n);
	convert(n, str);
	str[pos] = '\0';

	printf("%s\n", str);
	return 0;
}