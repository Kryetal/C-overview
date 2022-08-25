#include<stdio.h>

int main()
{
	int i=1000,d1=1,d2=1,d3=1;
	for(i=1000;i<=2000;i++)
	{
		d1=i%4;
		d2=i%100;
		d3=i%400;
		if((d2!=0)&&(d1==0))
		{
			printf("%d\n",i);
		}
		if((d2==0)&&(d3==0))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}