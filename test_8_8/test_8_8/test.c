#include<stdio.h>


//分支与循环
//int main()
//{
//	int a=1,b=0;
//	if(a==0)
//		b=0;
//	else b=1;
//	printf("b=%d\n",b);
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a=0,n=0;
//	scanf("%d",&a);
//	n=a%2;
//	if(n==1)
//		printf("a为奇数\n");
//	else 
//		printf("a不为奇数\n");
//	return 0;
//}

//switch
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)//（）里只能是整形
//	{
//	case 1: //case后面只能是整形常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//while  do while  
//int main()
//{
//	int i=1;
//	//while(i<11)
//	//{
//	//	printf("%d ",i);
//	//	i++;
//	//}
//	while(i<=10)
//	{
//		i++;
//		if(i==5)
//			continue;//continue用于终止本次循环，进行下一次循环
//		//break用于终止整个循环
//		printf("%d ",i);
//		
//	}
//	return 0;
//}

//int main()
//{
	//int ch=getchar();
	//putchar(ch);
	//int ch =0;
	//while((ch=getchar())!=EOF)//ctrl+z EOF-文件结束标志，值为-1
	//	putchar(ch);
//	int ret=0;
//	int ch=0;
//	char pw[20]={0};
//	printf("请输入密码:");
//	scanf("%s",pw);
//	输入完后缓冲区还剩一个'\n',因此加一个getchar把'\n'读走
//	while((ch=getchar())!='\n')//用循环把缓冲区清空
//	{
//		;
//	}
//	printf("请输入Y/N:");
//	ret=getchar();
//	if(ret=='Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("取消确认");
//	}
//	return 0;
//}


//int main()
//{
//	for(;;)  //初始化 判断 调整都能省略，但是省略判断会导致恒为真
//	{
//		printf("6");
//	}
//	return 0;
//}

//练习
//1、计算n的阶乘
//2、计算1！+2！....+10！
//int mul(int n)
//{
//	int i=0,m=1;
//	for(i=1;i<=n;i++)
//		m*=i;
//	return m;
//}
//int main()
//{
//	int i=0,m1=0,n=0,m=0;
//	printf("输入n");
//	scanf("%d",&n);
//	m=mul(n);//计算n的阶乘
//	printf("n!=%d\n",m);
//	for(i=1;i<11;i++)
//		m1+=mul(i);
//	printf("1!+2!....+10!=%d\n",m1);
//	return 0;
//}

//二分法查找顺序数组里的值
//int main()
//{
//	int k=0;
//	int arr[]={1,2,3,4,5,6,8,9,10,11};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;//左下标
//	int right=sz-1;
//	int mid=0;
//	printf("k=");
//	scanf("%d",&k);
//
//	while(left<=right)
//	{
//	 mid=(left+right)/2;
//	if(arr[mid]>k)
//	{
//		right=mid-1;
//		continue;
//	}
//	else if(arr[mid]<k)
//	{
//		left=mid+1;
//		continue;
//	}
//	else 
//		{
//			printf("找到元素，下标为%d\n",mid);
//			break;
//		}	
//	}
//	if(left>right)
//		printf("找不到\n");
//	
//	return 0;
//}


//strcmp 用于比较两个字符串是否相等，不能用==
//从两端汇聚打印字符
//wssinbaan
//######### 一次两端各出来一个
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]="You mon*fu*k";
	char arr2[]="############";
	int left=0;
	//int right=sizeof(arr1)/sizeof(arr1[0])-2;//字符串数组结尾有'\0'
	int right=strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls"); //系统命令函数
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}