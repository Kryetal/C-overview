#include<stdio.h>


//��֧��ѭ��
//int main()
//{
//	int a=1,b=0;
//	if(a==0)
//		b=0;
//	else b=1;
//	printf("b=%d\n",b);
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a=0,n=0;
//	scanf("%d",&a);
//	n=a%2;
//	if(n==1)
//		printf("aΪ����\n");
//	else 
//		printf("a��Ϊ����\n");
//	return 0;
//}

//switch
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)//������ֻ��������
//	{
//	case 1: //case����ֻ�������γ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
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
//			continue;//continue������ֹ����ѭ����������һ��ѭ��
//		//break������ֹ����ѭ��
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
	//while((ch=getchar())!=EOF)//ctrl+z EOF-�ļ�������־��ֵΪ-1
	//	putchar(ch);
//	int ret=0;
//	int ch=0;
//	char pw[20]={0};
//	printf("����������:");
//	scanf("%s",pw);
//	������󻺳�����ʣһ��'\n',��˼�һ��getchar��'\n'����
//	while((ch=getchar())!='\n')//��ѭ���ѻ��������
//	{
//		;
//	}
//	printf("������Y/N:");
//	ret=getchar();
//	if(ret=='Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȡ��ȷ��");
//	}
//	return 0;
//}


//int main()
//{
//	for(;;)  //��ʼ�� �ж� ��������ʡ�ԣ�����ʡ���жϻᵼ�º�Ϊ��
//	{
//		printf("6");
//	}
//	return 0;
//}

//��ϰ
//1������n�Ľ׳�
//2������1��+2��....+10��
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
//	printf("����n");
//	scanf("%d",&n);
//	m=mul(n);//����n�Ľ׳�
//	printf("n!=%d\n",m);
//	for(i=1;i<11;i++)
//		m1+=mul(i);
//	printf("1!+2!....+10!=%d\n",m1);
//	return 0;
//}

//���ַ�����˳���������ֵ
//int main()
//{
//	int k=0;
//	int arr[]={1,2,3,4,5,6,8,9,10,11};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;//���±�
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
//			printf("�ҵ�Ԫ�أ��±�Ϊ%d\n",mid);
//			break;
//		}	
//	}
//	if(left>right)
//		printf("�Ҳ���\n");
//	
//	return 0;
//}


//strcmp ���ڱȽ������ַ����Ƿ���ȣ�������==
//�����˻�۴�ӡ�ַ�
//wssinbaan
//######### һ�����˸�����һ��
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]="You mon*fu*k";
	char arr2[]="############";
	int left=0;
	//int right=sizeof(arr1)/sizeof(arr1[0])-2;//�ַ��������β��'\0'
	int right=strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls"); //ϵͳ�����
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}