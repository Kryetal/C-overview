#include<stdio.h>
#include"ADD.h"
#include<string.h>


////函数分文件声明实现
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
//	if(n/10!=0)  //递归要有能使递归终止的条件，不然栈区会溢出
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


//求字符串长度，但不能创建临时变量
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
//	int len=my_strlen(arr);//arr是数组，传参是首元素地址
//	printf("%d\n",len);
//	return 0;
//}


//求第n个斐波那契数
//用递归能写的循环一般都能写，用递归简单时也要保证不会使栈区溢出
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2); //递归在n较大时需要迭代多次大大增加了处理时长，可直接采用循环方式
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



//数组

//int main()
//{
//	char arr[]="ascnba";//数组在内存中是连续存放的
//	printf("%d\n",sizeof(arr));//sizeof算空间大小要算上'\0'
//	printf("%d\n",strlen(arr));//strlen不算'\0'，这两没啥关系
//	printf("%c\n",arr[3]);
//	return 0;
//}

//多维数组
//多维数组在内存中也是连续存放的
//int main()
//{
//	int arr[2][3]={{1,0,2},{1,4}};//列一定不能省略
//	int i=0,j=0;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//			printf("%d ",arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//数组作为函数参数

//例：冒泡排序（升序）
//void bubble_sort(int s,int* p)
//{
//	int i=0,j=0,c=0;
//	for(i=0;i<s-1;i++)
//	{
//		int flag=1;//假设数组已经有序
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

//&数组名此时数组名代表整个数组，取出整个数组地址(从该地址开始)，而不是首元素地址
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