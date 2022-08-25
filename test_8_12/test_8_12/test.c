#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//猜数字游戏
void menu()
{
	printf("********************************\n");
	printf("*****  1.play      0.exit  *****\n");
	printf("********************************\n");
}
void game()
{
	//生成随机数
	int r=0,guess=0;
	r=rand()%100+1;
	//猜数字
	while(1)
	{
		printf("请猜数字>");
		scanf("%d", &guess);
		if(guess>r)
		{
			printf("猜大了\n");
			continue;
		}
		else if(guess<r)
		{
			printf("猜小了\n");
			continue;
		}
		else 
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input=0;
	srand(time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
		}

	}while(input);
	return 0;
}