#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int findmax(int a[], int i)
//{
//	if (i == 3)
//	{
//		return a[i];
//	}
//
//	int max = findmax(a, i + 1);
//
//	return (a[i] > max) ? a[i] : max;
//}
//
//
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	printf("%d", findmax(a, 1));
//
//	return 0;
//}

///////////////////////////////////////////////////

//int max_num(int m, int n)
//{
//	//if (i >= (n < m ? n : m))
//	//{
//	//	return i;
//	//}
//
//	//if (n % i != 0 && m % i != 0)
//	//{
//
//	//}
//
//	//i++;
//	
//	if (n == 0)
//	{
//		return m;
//	}
//
//	return max_num(n, m % n);
//
//	
//}
//
//int min_num(int m, int n)
//{
//	int max_number = max_num(m, n);
//
//	return (m / max_number) * n;
//}
//
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	int max = max_num(m, n);
//	int min = min_num(m, n);
//
//	printf("%d %d", max, min);
//	return 0;
//}
//
//int max_num(int m, int n)
//{
//	int max = (m > n ? m : n);
//	for (int i = max; i > 0; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			return i;
//			break;
//		}
//	}
//}
//
////int min_num(int m, int n)
////{
////	max_num();
////}
//
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	int max = max_num(m, n);
//	//int min = min_num(m, n);
//
//	printf("%d ", max);
//	return 0;
//}
///////////////////////////////////////////////////

