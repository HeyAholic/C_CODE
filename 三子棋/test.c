#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu() 
{
	printf("************************************\n");
	printf("*******1.开始游戏 0.退出游戏********\n");
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
			printf("玩家赢\n");
			break;
		}

		Computermove(board, COW, VER);
		Displayboard(board, COW, VER);
		ret = Judgegame(board, COW, VER);

		if (ret == '#')
		{
			printf("电脑赢\n");
			break;
		}
		if (ret == 'P')
		{
			printf("平局\n");

		}
	}
	printf("游戏结束\n");

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入一个数字：>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入!!!!!\n");
			break;
		}
	} while (input);
	return 0;
}