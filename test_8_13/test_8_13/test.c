#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[]="abcd";
//	char arr2[]="********";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	//strcpy
//	return 0;
//}


//memset-�ڴ�����
//int main()
//{
//	char arr[]="hello world";
//	memset(arr, '*',5);
//	printf("%s\n",arr);
//	return 0;
//}

//���������ϴ�ֵ
//int cmp(int x,int y)
//{
//	return (x>y)?x:y;
//}
//int main()
//{
//	int a=0,b=0,max=0;
//	printf("a= ");
//	scanf("%d",&a);
//	printf("\n");
//	printf("b= ");
//	scanf("%d",&b);
//	max=cmp(a,b);
//	printf("%d\n",max);
//	return 0;
//}

//���Ӻ�������������
//void change(int* px,int* py)
//{
//	int tmp=0;
//	tmp=*px;
//	*px=*py;
//	*py=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	change(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//���ֲ���
//int binary_search(int arr[],int x,int sz)
//{
//	int left=0;
//	int right=sz-1;
//	do
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>x)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<x)
//		{
//			left=mid+1;
//		}
//		else 
//			return mid;
//	}while(left<=right);
//	return -1;
//}
//
//int main()
//{
//	//�����������в��ң��ҵ������±꣬�Ҳ�������-1
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=16;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//		printf("�Ҳ�������\n");
//	else 
//		printf("�������������±�Ϊ %d\n",ret);
//	return 0;
//}

int main()
{
	printf("%d",printf("%d",printf("%d",423)));//printf����ֵΪ��ӡ�ַ��ĸ���
	return 0;
}