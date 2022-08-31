#include<stdio.h>

//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	for(i=0;i<10;i++)
//		arr[i]=i;
//	return 0;
//}

//调试测试
//1!+2!+...+n!
//int main()
//{
//	int i=0;
//	int sum=0;
//	int n=0;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j=0;
//		for(j=1;j<=i;j++)
//			ret*=j;
//		sum+=ret;
//		//ret*=i;   //调试后修改成正确代码
//		//sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//栈区默认先使用高地址空间
//数组随着下标的增加，地址是由低到高变化
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//		printf("sss\n");
//		arr[i]=0;
//	}
//	return 0;
//}

#include<assert.h>

//char* my_strcpy(char* dest,const char* src)//const防止拷贝对象写反了
//{
//	char* ret=dest;
//	assert(*dest!=NULL);//断言--为假则报错
//	assert(*src!=NULL);
//	while(*dest++=*src++)//包含'\0'
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[]="***********";
//	char arr2[]="bit";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	const int a=10;
//	const int* p=&a;
//	//const放*左边修饰的是*p--限定了a
//	//const放*右边修饰的是p--限定了地址，即p不能被改变
//	*p=20;
//	return 0;
//}

//练习规范代码
//自己写一个strlen
int my_strlen(const char* str)
{
	int ret=0;
	assert(str != NULL);//保证指针有效性
	while(*str++ !='\0')
	{
		ret++;
	}
	return ret;
}
int main()
{
	char arr[]="asaaxav";
	printf("字符串长度为%d\n",my_strlen(arr));
	return 0;
}