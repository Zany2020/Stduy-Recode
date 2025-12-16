#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

void meau();

//类型声明
//包括结构体

//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录
typedef struct Contact
{
	PeoInfo date[100];
	int count;
}Contact;


void InitContact(Contact* pc);

void AddContact(Contact* pc);

void DelContact(Contact* pc);