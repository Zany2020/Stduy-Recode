#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//if (n < 10)
//{

//	int i = 2;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i != 0)
//		{
//			break;
//		}
//	}

//	if (n % i != 0)
//	{
//		Find_special(n - 1);
//	}
//	else
//	{
//		return n;
//	}
//}

//Find_special(n / 10);

//
//void Find_special(int num)
//{
//	if (num <= 0)
//	{
//		return;
//	}
//
//	if (num < 10)
//	{
//		int i = 2;
//		for (i = 2; i < num; i++)
//		{
//			if (num % i != 0)
//			{
//				break;
//			}
//		}
//	
//		if (num % i != 0)
//		{
//			Find_special(num - 1);
//		}
//
//		else
//		{
//			return num;
//		}
//	}
//
//	else
//	{
//		Find_special(num / 10);
//
//	}
//
//	
//
//
//}
//
//
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d", &n);
//
//	if (1 <= n && n <= 8)
//	{
//		
//		for (int i = 0; i <= n; i++)
//		{
//			num *= 10;
//		}
//		num -= 1;
//		Find_special(num);
//	}
//
//	return 0;
//}



//int is_prime(int num)
//{
//	if (num <= 1)
//		return 0;
//	if (num == 2)
//		return 1;
//	if (num % 2 == 0)
//		return 0;
//	for (int i = 3; i <= sqrt(num); i += 2)
//	{
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//void find_special(int current_num, int num_digits, int n)
//{
//	if (num_digits == n)
//	{
//		int temp = current_num;
//		int num = 1;
//		for (int i = 0; i < n; i++)
//		{
//			if (!is_prime(temp))
//			{
//				num = 0;
//				break;
//			}
//		}
//
//		if (num)
//		{
//			printf("%d\n", current_num);
//		}
//		return;
//	}
//	for (int i = 1; i <= 9; i++)
//	{
//		int new_num = current_num * 10 + i;
//		find_special(new_num, num_digits + 1, n);
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
//	find_special(0, 0, n);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////

//    汉诺塔    //

  //   //   //
  //   //   //
  //   //   //
  //   //   //
////////////////

int num = 0;
void move(char from, char to, int a)
{
	num++;
	printf("%2d. Mov0e disk %d from %c to %c\n", num, a, from, to);
		
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		move(A, C, n);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		move(A, C, n);
		hanoi(n - 1, B, A, C);
	}//只是描述出过程，并不是要在程序里实现

}


int main()
{
	int n = 0; 
	scanf("%d", &n);
	int a = 1;
	int b = 2;
	int c = 3;
	hanoi(n, 'X', 'Y', 'Z');

	return 0;
}