#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[COW][VER], int cow, int ver)
{
	int i = 0;
	int j = 0;
	for(i=0;i<cow;i++)
	{
		for (j=0;j<ver;j++)
		{
			board[i][j] =  ' ';
		}
	}
}

void Displayboard(char board[COW][VER],int cow,int ver)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < cow;i++)
	{
		for (j = 0; j < ver; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<ver-1)
			printf("|");
		}
		printf("\n");
		for (j = 0; j < ver; j++)
		{
			if(i<cow-1){
				printf("---");
				if (j < ver - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void Playermove(char board[COW][VER],int cow,int ver)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf(">>>>>>>>>>>>>>>>>>>�����<<<<<<<<<<<<<<<<\n");
		printf("������һ��������磨x y�����Ų��ã�>>>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= cow && y >= 1 && y <= ver)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] ='*';
				break;
			}
			else
			{
				printf("��λ���Ѿ���ռ�ã�������\n");
			}
		}
		else
		{
			printf("����������곬�����̷�Χ������������!\n");
		}
	}

}

void Computermove(char board[COW][VER], int cow, int ver)
{
	printf(">>>>>>>>>>>>>>>>>>>������<<<<<<<<<<<<<<<<\n");
	while(1)
	{
	int x = 0;
	int y = 0;
	x = rand() % cow;
	y = rand() % ver;
	
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
		break;
	}
	}
}
int  Draw(char board[COW][VER], int cow, int ver)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < cow; i++)
	{
		for (j = 0; j < ver; j++)
		{
			if (board[i][j] == ' ')
				return 0;
			
		}
	}
	return 1;
}

char Judgegame(char board[COW][VER], int cow, int ver)
{
					int i = 0;
					int j = 0;
				for (i = 0; i < cow; i++)
				{
					for (j = 0; j < ver; j++)
					{
						if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
						{
							return board[i][j];
						}
					}

				}
				for (j = 0; j < ver; j++)
				{
					for (i = 0; i < cow; i++)
					{
						if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
						{
							return board[i][j];
						}
					}

				}
				for (i = 0; i < cow; i++)
				{
					for (j = 0; j < ver; j++)
					{
						if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i][j] != ' ')
						{
							return board[i][j];
						}
					}
				}
				for (i = 0; i < cow; i++)
				{
					for (j = 0; j < ver; j++)
					{
						if (board[i][j] == board[i - 1][j - 1] && board[i - 1][j - 1] == board[i - 2][j - 2] && board[i][j] != ' ')
						{
							return board[i][j];
						}
					}
					for (i = 0; i < cow; i++)
					{
						for (j = 0; j < ver; j++)
						{
							if (board[i][j] == board[i - 1][j + 1] && board[i - 1][j + 1] == board[i - 2][j + 2] && board[i][j] != ' ')
							{
								return board[i][j];
							}
						}
					}
					for (i = 0; i < cow; i++)
					{
						for (j = 0; j < ver; j++)
						{
							if (board[i][j] == board[i +1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i][j] != ' ')
							{
								return board[i][j];
							}
						}
					}
			}

				 char n = Draw(board, COW, VER);
				if(n==1)
				{
					return 'P';
				}
		}
	








