#include<stdio.h>
#include"ADD.h"
#include<string.h>


////�������ļ�����ʵ��
//int main()
//{
//	int a=10,b=21,sum=0;
//	sum=ADD(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//void print(int n)
//{
//	int i=n%10;
//	if(n/10!=0)  //�ݹ�Ҫ����ʹ�ݹ���ֹ����������Ȼջ�������
//		print(n/10);
//	printf("%d ",i);
//}
//int main()
//{
//	unsigned int num=0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}


//���ַ������ȣ������ܴ�����ʱ����
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	if(*str!='\0')
//		return 1+my_strlen(str+1);
//	else
//	return 0;
//}
//int main()
//{
//	char arr[]="subcva";
//	int len=my_strlen(arr);//arr�����飬��������Ԫ�ص�ַ
//	printf("%d\n",len);
//	return 0;
//}


//���n��쳲�������
//�õݹ���д��ѭ��һ�㶼��д���õݹ��ʱҲҪ��֤����ʹջ�����
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2); //�ݹ���n�ϴ�ʱ��Ҫ������δ�������˴���ʱ������ֱ�Ӳ���ѭ����ʽ
//}
//
//int main()
//{
//	int n=0,ret=0;
//	printf("n=");
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}



//����

//int main()
//{
//	char arr[]="ascnba";//�������ڴ�����������ŵ�
//	printf("%d\n",sizeof(arr));//sizeof��ռ��СҪ����'\0'
//	printf("%d\n",strlen(arr));//strlen����'\0'������ûɶ��ϵ
//	printf("%c\n",arr[3]);
//	return 0;
//}

//��ά����
//��ά�������ڴ���Ҳ��������ŵ�
//int main()
//{
//	int arr[2][3]={{1,0,2},{1,4}};//��һ������ʡ��
//	int i=0,j=0;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//			printf("%d ",arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//������Ϊ��������

//����ð����������
//void bubble_sort(int s,int* p)
//{
//	int i=0,j=0,c=0;
//	for(i=0;i<s-1;i++)
//	{
//		int flag=1;//���������Ѿ�����
//		for(j=0;j<s-1-i;j++)
//		{
//			if(p[j]>p[j+1])
//			{
//				c=p[j+1];
//				p[j+1]=p[j];
//				p[j]=c;
//				flag=0;
//			}
//		}
//			if(flag==1)
//				break;
//	}
//}
//
//int main()
//{
//	int arr[]={5,96,1,5,6,4,8,198,12,32,611};
//	int n=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(sz,arr);
//	for(n=0;n<sz;n++)
//		printf("%d ",arr[n]);
//	return 0;
//}

//&��������ʱ�����������������飬ȡ�����������ַ(�Ӹõ�ַ��ʼ)����������Ԫ�ص�ַ
int main()
{
	int arr[]={1,58,1,96,1,3};
	printf("%p\n",arr);
	printf("%p\n",arr+1);

	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);

	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	return 0;
}