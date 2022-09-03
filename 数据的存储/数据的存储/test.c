#include<stdio.h>

//int check_sys()
//{
//	int a=1;//00 00 00 01
//	//返回1--小端
//	//返回0--大端
//	return *(char*)&a;//用char*就只访问一个字节，就可以通过一个字节的内容判断大小端
//}
//int main()
//{
//	int ret=check_sys();
//	if(ret==1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	char a=-1;//char默认有符号,因此还是-1
//	//整形提升时有符号数补符号位的值
//	signed char b=-1;
//	unsigned char c=-1;
//	int n=-20;
//	unsigned int m=10;
//	printf("a=%d,b=%d,c=%d",a,b,c);
//
//	printf("\n");
//
//	printf("%d\n",n+m);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for(i=9;i>=0;i--)
//		printf("%d ",i);//减到-1的时候-1变成无符号数时巨大
//	return 0;
//}

//浮点数存储
//9.0
//1001.0
//(-1)^0* 1.001 *2^3
//(-1)^S*   M   *2^E      M为二进制数科学计数法形式
//对于32位浮点数:最高位：S    接着8bit：E+127   剩下23位给 M
int main()
{
	int n=9;
	//00000000 00000000 00000000 00001001
	//0 00000000 00000000000000000001001
	//E为全0时，写作2^(1-127)
	//即此时 (-1)^0* 00000000000000000001001 * 2^-126
	float* p=(float*)&n;
	printf("n的值为：%d\n",n);
	printf("*p的值为：%f\n",*p);

	*p=9.0;
	//0 10000010 00100000000000000000000
	//01000001000100000000000000000000
	printf("n的值为：%d\n",n);
	printf("*p的值为：%f\n",*p);
	return 0;
}