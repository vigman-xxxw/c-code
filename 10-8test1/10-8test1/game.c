#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
			//printf("%c \n", board[i][j]);
		}
	}
}


//      3*3     ��������
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c ح %c ح %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row -1)
//		{
//			printf("---ح---ح---\n");
//		}
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int m = 0;
	for (m = 0; m < row; m=m+1)     //��ӡ��
	{
		int n = 0;
		for (n = 0;n<col;n++)    //��ӡ��
		{
			printf(" %c ",board[m][n]);
			if (n < col - 1)
			{
				printf("ح");

			}
		}
		printf("\n");
		if (m < row - 1)
		{
			int m = 0;
			for (m = 0; m < col; m++)
			{
				//printf("%d", col);

				printf("---");
				if (m < col - 1)
					printf("ح");
			}
			printf("\n");
		 }

		
	}
}

