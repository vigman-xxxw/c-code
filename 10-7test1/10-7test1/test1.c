#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("***********************\n");
	printf("******** 1.play *******\n");
	printf("******** 0.exit *******\n");
	printf("***********************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int c = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;

		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (c);

	return 0;
}