#include"work1.h"
#include"work.h"


void test2()
{
	int n=0;
	int m=0;
	int cmp=0;
	printf("����n��mֵ\n");
	scanf("%d%d",&n,&m);
	cmp=n^m;
	cmp=Caculate(cmp);
	printf("���������� %d λ��ͬ\n",cmp);
}
void test1()
{
	int bin=0;
	int ret=0;
	scanf("%d",&bin);
	ret=Caculate(bin);
	printf("1�ĸ���Ϊ%d\n",ret);
}
void test()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//��ʼ��ȫΪ0
	//InitArr(arr,sz);
	//��ӡ
	DisPlay(arr,sz);
	//����
	Reverse(arr,sz);
	DisPlay(arr,sz);
}
int main()
{
	//test();//������Ĳ���
	//test1();//ͳ�ƶ���������1�ĸ���
	test2();//�Ƚ��������������в�ͬλ�ĸ���
	return 0;
}