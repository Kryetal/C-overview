#include<stdio.h>

//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	for(i=0;i<10;i++)
//		arr[i]=i;
//	return 0;
//}

//���Բ���
//1!+2!+...+n!
//int main()
//{
//	int i=0;
//	int sum=0;
//	int n=0;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j=0;
//		for(j=1;j<=i;j++)
//			ret*=j;
//		sum+=ret;
//		//ret*=i;   //���Ժ��޸ĳ���ȷ����
//		//sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//ջ��Ĭ����ʹ�øߵ�ַ�ռ�
//���������±�����ӣ���ַ���ɵ͵��߱仯
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//		printf("sss\n");
//		arr[i]=0;
//	}
//	return 0;
//}

#include<assert.h>

//char* my_strcpy(char* dest,const char* src)//const��ֹ��������д����
//{
//	char* ret=dest;
//	assert(*dest!=NULL);//����--Ϊ���򱨴�
//	assert(*src!=NULL);
//	while(*dest++=*src++)//����'\0'
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[]="***********";
//	char arr2[]="bit";
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	const int a=10;
//	const int* p=&a;
//	//const��*������ε���*p--�޶���a
//	//const��*�ұ����ε���p--�޶��˵�ַ����p���ܱ��ı�
//	*p=20;
//	return 0;
//}

//��ϰ�淶����
//�Լ�дһ��strlen
int my_strlen(const char* str)
{
	int ret=0;
	assert(str != NULL);//��ָ֤����Ч��
	while(*str++ !='\0')
	{
		ret++;
	}
	return ret;
}
int main()
{
	char arr[]="asaaxav";
	printf("�ַ�������Ϊ%d\n",my_strlen(arr));
	return 0;
}