#include<stdio.h>

//int main()
//{
//	int a=1;
//	int* pa=&a;
//	char* pc=&a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1); //ָ�����;�����ָ���ƶ�����
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	int* p=arr;//ָ��������Ԫ�ص�ַ
//	for(i=0;i<10;i++)
//	{
//		//p[i]=1;
//		//��������Ҳ��
//		*(p+i)=1;
//		printf("%d ",*p);
//	}
//	return 0;
//}

//Ұָ��--ָ�벻��ʼ����
//����ָ�����Χ(Խ��)��
//ָ��Ŀռ䱻�ͷţ����ú����ȣ�������ָ���������ڴ�

//ָ������
//int main()
//{
//	int arr[10]={1,2,3,4,6,85,8,6,4,12};
//	int i=0;
//	int* p=arr;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//	printf("\n");
//	printf("%d\n",&arr[9]-&arr[0]);//ָ������õ��м�Ԫ�ظ���
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		 count++;
//		 str++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[]="bitss";
//	int len=my_strlen(ch);
//	printf("len = %d\n",len);
//	return 0;
//}

//ָ������--����
//����ָ��--ָ��
int main()
{
	int a=10;
	int b=12;
	int c=21;
	int i=0;
	int* pa=&a;
	int* pb=&b;
	int* pc=&c;
	int* arr[3]={pa,pb,pc};
	for(i=0;i<3;i++)
		printf("%d ",*(arr[i]));
	return 0;
}