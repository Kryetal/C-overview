#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char input[20]={0};
	system("shutdown -s -t 30");
	while(1)
	{
		printf("请输入 我是猪 否则电脑将关机\n");
		scanf("%s",input);
		if(strcmp(input,"我是猪")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}