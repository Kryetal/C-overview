#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a =0;
//	int b=~a;//b���з��ŵ�����
//	//�����ڼ�����б������Բ�����ʽ����
//	//11111111 11111111 11111111 11111111 ��ӡ��Դ��Ϊ-1
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int b=a++;//����++ ��������+1
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//int main()
//{
//	int a=13,b=12;
//	int max=0;
//	max=(a>b?a:b);
//	printf("max=%d\n",max);
//	return 0;
//}

//void test()
//{
//	int static a=1;//static���ξֲ�������extern�޷�������static���εı���
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i=0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//�궨��
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a=10,b=14;
//	int max= MAX(a,b);
//	printf("max=%d\n",max);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int *p=&a;//ȡ��ַ������a��ַ���ڱ���p��
//	char ch='a';
//	char *cp=&ch;
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=20;//*Ϊ�����ò�������*p���൱��a
//	printf("%d\n",*p);
//	*cp='w';
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(cp));//32λ-4�ֽ�  64λ-8�ֽ� ����������û��ϵ������ǵ�ַ
//	return 0;
//}

//�ṹ��--���ڸ��Ӷ�������
//struct Book //Book-������
//{
//	char NAME[20];
//	int PRICE;
//};
//
//
//int main()
//{
//	struct Book b1={"C����",55};//���ýṹ�����ʹ���һ�������͵Ľṹ�����b1
//	struct Book* pb=&b1;
//	strcpy(b1.NAME,"C++");//�ַ�������,��Ա���ַ������鲻�ܸ��۸�һ��ֱ�Ӹ�ֵ
//	//��ӡ����
//	//. �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա
//	printf("%s\n",pb->NAME);
//	printf("%d\n",pb->PRICE);
//
//	//printf("%s\n",(*pb).NAME);
//	//printf("%d\n",(*pb).PRICE);
//
//	//printf("����:%s\n",b1.NAME);
//	//printf("�۸�:%d\n",b1.PRICE);
//	return 0;
//}