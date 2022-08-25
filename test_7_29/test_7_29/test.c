#include<stdio.h>
#include<string.h>

//define定义标识符常量
#define MAX 10
//枚举常量
//一一列举，要用到枚举关键词enum
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
//	//const int n=4;//const修饰常变量(但常变量本质还是一个变量，在用常量的地方不能代替)
//	return 0;
//}
//int main()
//
//{
//	//ASCII a-97 A-65
//	char arr1[6]={'a','b','c'};
//	char arr2[]="abc";
//	//"abc"--'a''b''c''\0'字符串的结束标志,但\0不算字符串内容
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//转义字符--加个\就有新的含义
//\n  \t 等
//\可以用来转义\防止被误转义
//int main()
//{
//	//printf("%c\n",'\'');
//	printf("%d\n",strlen("st\rr\text\31"));//转义字符算一个这里\31是八进制数字
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
	printf("%d\n",!a);//0-假  非0-真 
	return 0;
}