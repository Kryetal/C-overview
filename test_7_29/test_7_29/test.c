#include<stdio.h>
#include<string.h>

//define�����ʶ������
#define MAX 10
//ö�ٳ���
//һһ�о٣�Ҫ�õ�ö�ٹؼ���enum
enum Color
{
	Red,
	Yellow,
	Blue
};
//int main()
//{
//	//enum Color s=Red;
//	printf("%d\n",Red);//0
//	printf("%d\n",Yellow);//1
//	printf("%d\n",Blue);//2
//	//const int n=4;//const���γ�����(�����������ʻ���һ�����������ó����ĵط����ܴ���)
//	return 0;
//}
//int main()
//
//{
//	//ASCII a-97 A-65
//	char arr1[6]={'a','b','c'};
//	char arr2[]="abc";
//	//"abc"--'a''b''c''\0'�ַ����Ľ�����־,��\0�����ַ�������
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//ת���ַ�--�Ӹ�\�����µĺ���
//\n  \t ��
//\��������ת��\��ֹ����ת��
//int main()
//{
//	//printf("%c\n",'\'');
//	printf("%d\n",strlen("st\rr\text\31"));//ת���ַ���һ������\31�ǰ˽�������
//	printf("%c\n","\31");
//	return 0;
//}
//int main()
//{
//	int i=0;
//	while(i<10)
//	{
//		printf("1\n");
//		i++;
//	}
//	return 0;
//}
int main()
{
	int a=10;
	printf("%d\n",a);
	printf("%d\n",!a);//0-��  ��0-�� 
	return 0;
}