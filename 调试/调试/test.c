#include<stdio.h>

//struct--�ṹ��ؼ���   STU--�ṹ���ǩ   struct STU--�ṹ������
//struct STU
//{
//	char name[10];
//	int age;
//	char tele[15];
//	char sex[5];
//}/*s2*/;//s2��ȫ�ֱ����������ٴ���ȫ�ֱ���
typedef struct STU
{
	char name[10];
	int age;
	char tele[15];
	char sex[8];
}STU;//���ṹ����������ΪSTU
int main()
{
	struct STU s1={"����",22,"15812546878","��"};//s1--�ṹ��������ֲ�����
	STU s2={"ss",24,"13546987789","δ֪"};//���������ֱ����STU����struct STU������һ��
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