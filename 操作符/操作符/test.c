#include<stdio.h>

//int main()
//{
//	double a=5.0/2; //����һ��Ҫ����С������ܳ���С����
//	printf("a=%lf\n",a);
//	return 0;
//}

//int main()
//{
//	int a=16;
//	//>>Ϊ����λ���ƶ����Ƕ�����,���ǳ�2
//	//�������ƣ���߲�ԭ����λ----�����������
//	//�߼����ƣ���߲�0
//	a>>=1;
//	printf("a=%d\n",a);
//	return 0;
//}

////��������int��������������ʱ����---����д���벻�����֣���nt������
//int main()
//{
//	int a=5,b=3;
//	//�Ӽ���������ȱ�ݣ�������ֵ��ӳ������ֵʱ�����
//	//a=a+b;
//	//b=a-b;
//	//a=a-b;
//	//�����
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int count=0;
//	int a=0;
//	int i=0;
//	scanf("%d",&a);
//	for(i=0;i<32;i++)
//	{
//		if(((a>>i)&1)!=0)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//int main()
//{
//	int a=10;
//	short b=0;
//	printf("%d\n",sizeof(b=a+5));
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//	//int a=0;
//	////����ǲ��룬ȡ����Ҳ�ǲ���
//	//printf("%d\n",~a);
//	int a=11;
//	//a=a|(1<<2);
//	//printf("a=%d\n",a);
//	a=a & (~(1<<2));
//	printf("a=%d\n",a);
//	return 0;
//}
//void test(char* ch)
//{
//	printf("%d\n",sizeof(ch));	//��������ָ����գ�32λָ��ռ4���ֽ�
//}
//int main()
//{
//	char ch[10]={0};
//	int arr[10]={0};
//	printf("%d\n",sizeof(ch));
//	printf("%d\n",sizeof(arr));
//	test(ch);
//	return 0;
//}
//int main()
//{
//	int i=0,a=0,b=2,d=3;
//	i=a++ && ++b && d++; //&&���Ϊ�ٺ���Ͳ���ִ����
//	i=a++ || ++b || d++; //||���Ϊ�����Ͳ���ִ����
//	printf("a=%d b=%d d=%d",a,b,d);
//	return 0;
//}

//�ṹ�帴ϰ
//#include<string.h>
//struct STU
//{
//	char name[20];
//	int age;
//	int id[10];
//};
//int main()
//{
//	int a=10;
//	struct STU s1={"����",18,164523};
//	struct STU* st=&s1;
//	strcpy(s1.name,"����");
//	printf("%s\n",s1.name);
//	printf("%d\n",st->age);
//	printf("%d\n",st->id);
//	st->age=20;
//	printf("%d\n",st->age);
//	return 0;
//}
int main()
{
	char a=3;
	//���ڴ��ﱻ�ضϳ�char
	//a-0000 0011
	char b=127;
	//b-0111 1111
	char c=a+b;	//���ʱ�����������Է���λ����32λ����Ӻ��ٽض�
	//�޷�������0--unsigned int
	//c-1000 0010
	//��ӡʱ������������
	//c-11111111 11111111 11111111 10000010
	//�ٱ��ԭ��
	printf("%d\n",c);//-126
	printf("%d\n",sizeof(!a));
	return 0;
}