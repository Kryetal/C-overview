#include<stdio.h>
#include<math.h>

void Change(int x,int y,int* p)
{
	p[0]=y;
	p[1]=x;
}
float Caculate()
{
	float i=1;
	float sum=0;
	for(i=1;i<101;i++)
	{
		sum+=(pow(-1,i+1))*(1/i);
	}
	return sum;
}

int Count()
{
	int i=1;
	int total=0;
	for(i=1;i<=100;i++)
	{
		if(i/10==9)
		{
			total+=1;
		}
		if(i%10==9)
		{
			total+=1;
		}
	}
	return total;
}
int main()
{
	int arr1[5]={1,1,1,1,1};
	int arr2[5]={2,2,2,2,2};
	int arr[2];//第一题
	int i=0;
	float s=0;//第二题
	int t=0;//第三题
	for(i=0;i<5;i++)
	{
		Change(arr1[i],arr2[i],arr);
		arr1[i]=arr[0];
		arr2[i]=arr[1];
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
		for(i=0;i<5;i++)
	{
		printf("%d ",arr2[i]);
	}
		printf("\n");
		//第二题
	s=Caculate();
	printf("第二题答案=%f\n",s);
	//第三题
	t=Count();
	printf("第三题答案=%d\n",t);

	return 0;
}