#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu() 
{
	printf("************************************\n");
	printf("*******1.��ʼ��Ϸ 0.�˳���Ϸ********\n");
	printf("************************************\n");
}
void game()
{
	int ret = 0;
	char board[COW][VER] = { 0 };
	InitBoard(board, COW, VER);
	Displayboard(board, COW, VER);
	while (1)
	{
		Playermove(board, COW, VER);
		Displayboard(board, COW, VER);
		char ret = Judgegame(board, COW, VER);


		if (ret == '*')
		{
			printf("���Ӯ\n");
			break;
		}

		Computermove(board, COW, VER);
		Displayboard(board, COW, VER);
		ret = Judgegame(board, COW, VER);

		if (ret == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		if (ret == 'P')
		{
			printf("ƽ��\n");

		}
	}
	printf("��Ϸ����\n");

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("������һ�����֣�>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������!!!!!\n");
			break;
		}
	} while (input);
	return 0;
}