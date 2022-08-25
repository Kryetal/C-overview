#include"work1.h"

void InitArr(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
		arr[i]=0;
}
void DisPlay(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void Reverse(int arr[],int sz)
{
	int i=0;
	int tmp=0;
	while(i<=sz-1-i)
	{
		tmp=arr[sz-1-i];
		arr[sz-1-i]=arr[i];
		arr[i]=tmp;
		i++;
	}
}