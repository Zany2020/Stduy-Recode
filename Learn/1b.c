//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	
//	return 0;
//}

#include<stdio.h>

extern int a;

void test()
{
	printf("test-->%d\n", a);
}
int main()
{
	test();
	{
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);

	return 0;
}




