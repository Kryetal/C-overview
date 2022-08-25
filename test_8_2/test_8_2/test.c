#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a =0;
//	int b=~a;//b是有符号的整形
//	//负数在计算机中保存是以补码形式保存
//	//11111111 11111111 11111111 11111111 打印出源码为-1
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int b=a++;//后置++ 先运算再+1
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
//	int static a=1;//static修饰局部变量，extern无法声明被static修饰的变量
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

//宏定义
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
//	int *p=&a;//取地址，即将a地址存在变量p里
//	char ch='a';
//	char *cp=&ch;
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	*p=20;//*为解引用操作符，*p就相当于a
//	printf("%d\n",*p);
//	*cp='w';
//	printf("%c\n",ch);
//	printf("%d\n",sizeof(cp));//32位-4字节  64位-8字节 跟变量类型没关系，存的是地址
//	return 0;
//}

//结构体--用于复杂对象描述
//struct Book //Book-类型名
//{
//	char NAME[20];
//	int PRICE;
//};
//
//
//int main()
//{
//	struct Book b1={"C语言",55};//利用结构体类型创建一个该类型的结构体变量b1
//	struct Book* pb=&b1;
//	strcpy(b1.NAME,"C++");//字符串拷贝,成员是字符串数组不能跟价格一样直接赋值
//	//打印内容
//	//. 结构体变量.成员
//	//-> 结构体指针->成员
//	printf("%s\n",pb->NAME);
//	printf("%d\n",pb->PRICE);
//
//	//printf("%s\n",(*pb).NAME);
//	//printf("%d\n",(*pb).PRICE);
//
//	//printf("书名:%s\n",b1.NAME);
//	//printf("价格:%d\n",b1.PRICE);
//	return 0;
//}