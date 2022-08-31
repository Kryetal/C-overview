#include<stdio.h>

//int main()
//{
//	const char* p="abcdef";//abcdef是一个常量字符串,一般要加const，因为无法通过*p修改
//	printf("%c\n",*p);//a
//	printf("%s\n",p);//abcdef
//	return 0;
//}

//指针数组用法
//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={2,3,4,5,6};
//	int arr3[]={3,4,5,6,7};
//
//	int* parr[]={arr1,arr2,arr3};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<5;j++)
//			printf("%d ", *(parr[i]+j));
//		printf("\n");
//	}
//
//	return 0;
//}

//数组指针--存放数组地址
void print(int (*p)[5] , int x, int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
			printf("%d ",*p[i]+j);
		printf("\n");
	}
}
int main()
{
	//int arr[5]={1,2,3,4,5};
	//int (*p)[5]=&arr;
	//&数组名是数组的地址
	//char* arr[5];
	//char* (*pa)[5]=&arr;
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr,3,5);
	return 0;
}