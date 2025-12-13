#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>


//typedef struct
//{
//	char num[12];
//	char name[8];
//	int score[3];
//}student;
//
//
//void print(student s[], int n)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%-13s %-9s %4d %4d %4d\n",
//			s[i].num,
//			s[i].name,
//			s[i].score[0],
//			s[i].score[1],
//			s[i].score[2]);
//	}
//
//}
//int main()
//{
//	//int id[5][12];
//	//char Name[5][20];
//	//int Score[5][3];
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	scanf("%d %s", &id[i], &Name[i]);
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		scanf("%d", &Score[i][j]);
//	//	}
//	//}
//
//	//student s[5] = {
//	//	{id[0], Name[0], Score[0][0], Score[0][1], Score[0][2]},
//	//	{id[1], Name[1], Score[1][0], Score[1][1], Score[1][2]},
//	//	{id[2], Name[2], Score[2][0], Score[2][1], Score[2][2]},
//	//	{id[3], Name[3], Score[3][0], Score[3][1], Score[3][2]},
//	//	{id[4], Name[4], Score[4][0], Score[4][1], Score[4][2]}
//	//};
//
//	student s[5];
//	
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%s %s", s[i].num, s[i].name);
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &s[i].score[j]);
//		}
//	}
//
//	print(s, 5);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////

//typedef struct
//{
//	int year;
//	int month;
//	int day;
//}date;
//
//int judge(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int days_of_year(date d)
//{
//	int sum = 0;
//	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	if (judge(d.year) == 1)
//	{
//		daysInMonth[1] = 29;
//	}
//
//	for (int i = 0; i < d.month - 1; i++)
//	{
//		sum += daysInMonth[i];
//	}
//
//	sum += d.day;
//
//	return sum;
//}
//
//int main()
//{
//	date d;
//	scanf("%d %d %d", &d.year, &d.month, &d.day);
//
//	int m = days_of_year(d);
//
//	printf("%d", m);
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////

//
//
//char scanf_(char arr[10][500])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%s", arr[i]);
// //scanf("%s", arr[i])：只能读取单个单词，无法处理整行含空格的内容；
//		for (int j = 0; j < 500; j++)
//		{
//			if (arr[i][j] == '0')
//			{
//				if (arr[i][j + 1] == '0')
//				{
//					return arr;
// //return arr不符合语法（函数返回值类型不匹配）
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	char s[10][500];
//	scanf_(s);
//
//
//}、

//
//#define max_words 1000
//#define max_word_length 100
//
//typedef struct
//{
//	char word[max_word_length];
//	int count;
//} Word_count;
//
//int findword(Word_count words[], int wordcount, const char* word)
//{
//	for (int i = 0; i < wordcount; i++)
//	{
//		if (strcmp(words[i].word, word) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	Word_count words[max_words] = { 0 };
//	int word_count = 0;  // 当前单词数
//
//	char line[500];
//	while (1)
//	{
//		fgets(line, sizeof(line), stdin);
//		//输入一大串就就用这个
//
//		line[strcspn(line, "\n\r")] = '\0';
//
//		if (strcmp(line, "00") == 0)
//			//strcmp比较，左==右返回0
//		{
//			break;
//		}
//
//		char* word = strtok(line, " ");
//		//"\n"作为分隔符，strtok返回的是指针值；
//		while (word != NULL)
//		{
//			int index = findword(words, word_count, word);
//			if (index == -1)   //结构体    //计数   //指针（指向的单词）
//			{
//				//填了这个空格
//				strcpy(words[word_count].word, word);
//				words[word_count].count = 1;
//				word_count++;
//			}
//			else
//			{
//				words[index].count++;
//			}
//			word = strtok(NULL, " ");
//		}
//
//	}
//
//	int maxcount = 0;
//	int maxindex = 0;
//	for (int i = 0; i < word_count; i++)
//	{
//		if (words[i].count > maxcount)
//		{
//			maxcount = words[i].count;
//			maxindex = i;
//		}
//	}
//	printf("%s %d\n", words[maxindex].word, words[maxindex].count);
//
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////
//#include <ctype.h>
//
//typedef struct
//{
//	int count_li;
//	int count_zhang;
//	int count_wang;
//	int wrong;
//}c;
//
//
//typedef struct
//{
//	char name[10][10];
//	c count;
//}candidate;
//
//void tolowercase(char* arr)
//{
//	if (arr == NULL) return;
//	for (int i = 0; arr[i] != '\0'; i++) 
//	{
//		arr[i] = tolower((unsigned char)arr[i]);  // 逐个字符转小写
//	}
//}
//
//			//
//			//typedef struct 
//			// {
//			//	char name[10];  // 候选人姓名（zhang/li/wang）
//			//	int count;      // 对应得票数
//			//} Candidate;       // 注意：题目要求结构体数组名为candidate（大小写需匹配，按题目要求）
//			//
//			//
//			//int main() 
//			// {
//			//	// 题目要求：结构体数组candidate，包含3个候选人（zhang、li、wang）
//			//	Candidate candidate[3] = 
//			// {
//			//		{"zhang", 0},  // 第0个元素：zhang，初始得票0
//			//		{"li", 0},     // 第1个元素：li，初始得票0
//			//		{"wang", 0}    // 第2个元素：wang，初始得票0
//			//	};
//			//	int wrong = 0;     // 废票数
//			//
//			//	// 读取10个选民的投票
//			//	char input[10];    // 存储单个选民输入的姓名
//			//	for (int i = 0; i < 10; i++)
//			// {
//			//		// 读取输入（自动跳过空格/换行，兼容全角/半角空格）
//			//		scanf("%s", input);
//			//		// 转为小写，统一判断（不区分大小写）
//			//		toLowerCase(input);
//			//
//			//		// 标记是否投给有效候选人
//			//		int is_valid = 0;
//			//		// 遍历结构体数组，匹配候选人
//			//		for (int j = 0; j < 3; j++)
//			//		 {
//			//			if (strcmp(input, candidate[j].name) == 0) 
//			//		{
//			//				candidate[j].count++;  // 匹配成功，得票+1
//			//				is_valid = 1;
//			//				break;
//			//			}
//			//		}
//			//
//			//		// 未匹配到任何候选人，废票+1
//			//		if (!is_valid) {
//			//			wrong++;
//			//		}
//			//	}
//
//
//int main()
//{
//	candidate s;
//	s.count.count_li = 0;
//	s.count.count_zhang = 0;
//	s.count.count_wang = 0;
//	s.count.wrong = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%s", s.name[i]);
//		tolowercase(s.name[i]);
//		if (strcmp(s.name[i], "li") == 0) 
//		{
//			s.count.count_li++;
//		}
//		else if (strcmp(s.name[i], "zhang") == 0) 
//		{
//			s.count.count_zhang++;
//		}
//		else if (strcmp(s.name[i], "wang") == 0) 
//		{
//			s.count.count_wang++;
//		}
//		else
//		{
//			s.count.wrong++;
//		}
//	}
//
//
//	printf("zhang %d\n", s.count.count_zhang);
//	printf("li %d\n", s.count.count_li);
//	printf("wang %d\n", s.count.count_wang);
//	printf("wrong %d\n", s.count.wrong);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n > 5 && n <= 1000)
	{
		int people[1000];
		for (int i = 0; i < n; i++)
		{
			people[i] =1;
		}

		int count = 0;//计数
		int remaining = n;//剩下的
		int index = 0;//开始

		while (remaining > 1)
		{
			if (people[index] == 1)
				count++;
			if (count == 3)
			{
				people[index] = 0;
				remaining--;
				count = 0;
			}

			index = (index + 1) % n;
		}

		for (int j = 0; j < n; j++)
		{
			if (people[j] == 1)
			{
				printf("%d\n", (j+1));
				break;
			}

		}
	}

	return 0;
}