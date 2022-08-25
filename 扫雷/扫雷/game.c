#include"game.h"


void Init(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			board[i][j]=set;
}

void Display(char board[ROWS][COLS],int row,int col)
{
	int i=1;
	int j=1;
	for(i=0;i<=col;i++)
		printf("%d ",i);//�к�
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);//�к�
		for(j=1;j<=col;j++)
			printf("%c ",board[i][j]);
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=EASY_COUNT;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}

//'1'-'0'=1 ASCII������õ�������
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return	mine[x-1][y-1]+
			mine[x-1][y]+
			mine[x-1][y+1]+
			mine[x][y-1]+
			mine[x][y+1]+
			mine[x+1][y-1]+
			mine[x+1][y]+
			mine[x+1][y+1]-8*'0';
}

void MineSweep(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0,y=0;
	int win=0;
	while(win<row*col-EASY_COUNT)
	{
	printf("���Ų�����:>");
	scanf("%d%d",&x,&y);
	if(x>=1 && x<=row && y>=1 && y<=col)
	{
		//����
		if(mine[x][y]=='1')
		{
			printf("��\n");
			Display(mine,row,col);
			break;
		}
		else //������ ͳ����Χ����
		{
			int count=get_mine_count(mine,x,y);
			show[x][y]=count+'0';
			system("cls");
			Display(show,row,col);
			win++;
		}
		if(win==row*col-EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			Display(mine,row,col);
		}
	}
	}
}