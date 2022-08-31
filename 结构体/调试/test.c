#include<stdio.h>

//struct--结构体关键字   STU--结构体标签   struct STU--结构体类型
//struct STU
//{
//	char name[10];
//	int age;
//	char tele[15];
//	char sex[5];
//}/*s2*/;//s2是全局变量，尽量少创建全局变量
typedef struct STU
{
	char name[10];
	int age;
	char tele[15];
	char sex[8];
}STU;//将结构体重新命名为STU
int main()
{
	struct STU s1={"老六",22,"15812546878","男"};//s1--结构体变量，局部变量
	STU s2={"ss",24,"13546987789","未知"};//改名后就能直接用STU代替struct STU，方便一点
	STU* ps=&s2;
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.tele);
	printf("%s\n",s1.sex);

	printf("%s\n",ps->name);
	printf("%d\n",ps->age);
	printf("%s\n",ps->tele);
	printf("%s\n",ps->sex);
	return 0;
}