#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("***** 1.play      0.exit *****\n");
	printf("******************************\n");
}

void game()
{
	//存储雷信息
	char mine[ROWS][COLS]={0};
	//排查出来雷的信息(这格子一圈有多少雷)
	char show[ROWS][COLS]={0};
	//初始化
	Init(mine,ROWS,COLS,'0');
	Init(show,ROWS,COLS,'*');
	//打印
	Display(show,ROW,COL);
	//布雷
	SetMine(mine,ROW,COL);
	//Display(mine,ROW,COL);
	//扫雷
	MineSweep(mine,show,ROW,COL);
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{	
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择:>\n");
			break;
		}

	}while(input);
}

int main()
{
	test();
	return 0;
}