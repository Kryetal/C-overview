#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("***** 1.play      0.exit *****\n");
	printf("******************************\n");
}

void game()
{
	//�洢����Ϣ
	char mine[ROWS][COLS]={0};
	//�Ų�����׵���Ϣ(�����һȦ�ж�����)
	char show[ROWS][COLS]={0};
	//��ʼ��
	Init(mine,ROWS,COLS,'0');
	Init(show,ROWS,COLS,'*');
	//��ӡ
	Display(show,ROW,COL);
	//����
	SetMine(mine,ROW,COL);
	//Display(mine,ROW,COL);
	//ɨ��
	MineSweep(mine,show,ROW,COL);
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{	
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��:>\n");
			break;
		}

	}while(input);
}

int main()
{
	test();
	return 0;
}