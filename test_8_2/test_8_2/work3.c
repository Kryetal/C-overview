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
	int arr[2];//��һ��
	int i=0;
	float s=0;//�ڶ���
	int t=0;//������
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
		//�ڶ���
	s=Caculate();
	printf("�ڶ����=%f\n",s);
	//������
	t=Count();
	printf("�������=%d\n",t);

	return 0;
}