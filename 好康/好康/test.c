#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20]={0};
	system("shutdown -s -t 30");
	while(1)
	{
		printf("������ ������ ������Խ��ػ�\n");
		scanf("%s",input);
		if(strcmp(input,"������")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}