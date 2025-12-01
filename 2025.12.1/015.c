#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//
//typedef struct Student
//{
//	char name[20];
//	int age;
//	char code[20];
//	char gender;
//	float gpa;
//}Stu;
//
//
//float AverGpa(struct Student sStu[], int n)
// //struct：结构体类型关键字（“类型标识”）,Student：结构体名（“自定义类型的名字”）
// //sStu[]：函数参数名（“结构体数组变量”自己起的）
// 
//{
//	float sum = 0.0f;  // 初始化时显式写 0.0f，避免隐式类型转换（更规范）
//	for (int i = 0; i < n; i++)
//	{
//		sum += sStu[i].gpa;
//	}
//
//	return sum / n;
//}
//
//void SortGpa(struct Student sStu[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int num = sStu[i].gpa;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (sStu[j].gpa > sStu[j + 1].gpa)
//			{
//				Stu temp = sStu[j];
//				sStu[j] = sStu[j + 1];
//				sStu[j + 1] = temp;
//			}
//		}
//
//	}
//
//
//}
//
//int main()
//{
//	Stu student[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%s %d %s %c %f",//数组名本身就是地址
//	                       //输入不能用.f
//			student[i].name, // 字符数组不用加&（数组名=地址）
//			&student[i].age, // int类型加&传地址
//			student[i].code,  // code是字符数组，不用加&，用%s读取
//			&student[i].gender, // char类型加&，前面加空格跳过空白（关键！）
//			&student[i].gpa);  // float类型加&，用%f读取（输入格式）
//	}
//	
//	printf("%.1f", AverGpa(student, 10));
//	SortGpa(student, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%s %d %s %c %.1f\n",//.1保留一位，1.总长度为一
//			student[i].name,
//			student[i].age,
//			student[i].code,
//			student[i].gender,
//			student[i].gpa);
//	}
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//#include <ctype.h> 
//
//int sixteen_to_ten(char ch)
//{
//	int num;
//	ch = toupper(ch);
//
//	if (ch >= '0' && ch <= '9')
//	{
//		num = ch - '0';
//	}
//	else
//	{
//		num = ch - 'A' + 10;
//	}
//
//	return num;
//}
//
//int main()
//{
//	char hex[9];
//	unsigned dec = 0;
//	int len;
//	fgets(hex, sizeof(hex), stdin);
//	len = strlen(hex);
//	if (len > 0 && hex[len - 1] == '\n')
//	{
//		hex[len - 1] = '\0';
//		len--;
//	}
//
//	for (int i = 0; i < len; i++)
//	{
//		dec = dec * 16 + sixteen_to_ten(hex[i]);
//	}
//	printf("%u", dec);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//void insertchar(int num)
//{
//	char a_num[4];
//	for (int i = 3; i >= 0; i--)
//	{
//		a_num[i] = num % 10;
//		num /= 10;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", a_num[i]);
//	}
//
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	insertchar(num);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct Staff
{
    char name[100];
	int number;
}Sta;

void read(struct Staff sta[])
{
	for (int i = 0; i < 10; i++)
	{
		scanf("%s %d", sta[i].name, &sta[i].number);
		getchar();
	}

}

void sortbyno(struct Staff sta[])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (sta[j].number > sta[j + 1].number)
			{
				Sta temp = sta[j];
				sta[j] = sta[j + 1];
				sta[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d %s\n", sta[i].number, sta[i].name);
	}
	
}

void search(struct Staff sta[], int n)
{
	int rem = 0;
	for (int i = 0; i < 10; i++)
	{
		if (n == sta[i].number)
		{
			printf("%s", sta[i].name);
			rem = 1;
			break;
		}
	}

	if (!rem)
	{
		printf("没有匹配的职工");
	}
}

int main()
{
	Sta Staff[10];
	int Search = 0;

	read(Staff);
	sortbyno(Staff);

	scanf("%d", &Search);
	search(Staff, Search);

	return 0;
}