#include<stdio.h>

//int main()
//{
//	double a=5.0/2; //其中一个要是有小数点才能除出小数点
//	printf("a=%lf\n",a);
//	return 0;
//}

//int main()
//{
//	int a=16;
//	//>>为右移位，移动的是二进制,就是除2
//	//算术右移：左边补原符号位----计算机是算术
//	//逻辑右移：左边补0
//	a>>=1;
//	printf("a=%d\n",a);
//	return 0;
//}

////交换两个int变量，不能用临时变量---真正写代码不用这种，纯nt面试题
//int main()
//{
//	int a=5,b=3;
//	//加减法，但有缺陷，当两个值相加超过最大值时会溢出
//	//a=a+b;
//	//b=a-b;
//	//a=a-b;
//	//用异或
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
//	////存的是补码，取反后也是补码
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
//	printf("%d\n",sizeof(ch));	//传过来是指针接收，32位指针占4个字节
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
//	i=a++ && ++b && d++; //&&左边为假后面就不再执行了
//	i=a++ || ++b || d++; //||左边为真后面就不再执行了
//	printf("a=%d b=%d d=%d",a,b,d);
//	return 0;
//}

//结构体复习
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
//	struct STU s1={"张三",18,164523};
//	struct STU* st=&s1;
//	strcpy(s1.name,"李四");
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
	//在内存里被截断成char
	//a-0000 0011
	char b=127;
	//b-0111 1111
	char c=a+b;	//相加时整形提升，以符号位补齐32位，相加后再截断
	//无符号数补0--unsigned int
	//c-1000 0010
	//打印时还需整形提升
	//c-11111111 11111111 11111111 10000010
	//再变成原码
	printf("%d\n",c);//-126
	printf("%d\n",sizeof(!a));
	return 0;
}