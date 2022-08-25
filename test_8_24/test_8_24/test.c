#include"work1.h"
#include"work.h"


void test2()
{
	int n=0;
	int m=0;
	int cmp=0;
	printf("输入n，m值\n");
	scanf("%d%d",&n,&m);
	cmp=n^m;
	cmp=Caculate(cmp);
	printf("两个数中有 %d 位不同\n",cmp);
}
void test1()
{
	int bin=0;
	int ret=0;
	scanf("%d",&bin);
	ret=Caculate(bin);
	printf("1的个数为%d\n",ret);
}
void test()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//初始化全为0
	//InitArr(arr,sz);
	//打印
	DisPlay(arr,sz);
	//逆置
	Reverse(arr,sz);
	DisPlay(arr,sz);
}
int main()
{
	//test();//对数组的操作
	//test1();//统计二进制数中1的个数
	test2();//比较两个二进制数中不同位的个数
	return 0;
}