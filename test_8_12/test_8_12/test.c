#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��������Ϸ
void menu()
{
	printf("********************************\n");
	printf("*****  1.play      0.exit  *****\n");
	printf("********************************\n");
}
void game()
{
	//���������
	int r=0,guess=0;
	r=rand()%100+1;
	//������
	while(1)
	{
		printf("�������>");
		scanf("%d", &guess);
		if(guess>r)
		{
			printf("�´���\n");
			continue;
		}
		else if(guess<r)
		{
			printf("��С��\n");
			continue;
		}
		else 
		{
			printf("��ϲ��¶���\n");
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
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		}

	}while(input);
	return 0;
}