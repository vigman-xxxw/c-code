#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------扫雷游戏------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("-------------扫雷游戏------------\n");

}



void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//随机坐标  (1到9)
		int x = rand()%row + 1;
		int y = rand()%col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}

	}
}

//周围几个雷
static int get_mine_count(char mine[ROWS][COLS], int x, int y)     //static静态 1.修饰局部变量  2.修饰全局变量  3.修饰函数
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}





void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查的坐标
	//2.检查坐标是不是雷
		//雷:   游戏结束     非雷:统计周围几个雷(信息存储在show数组中)

	int x = 0;
	int y = 0;
	int win = 0;

	while (win<row*col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);

		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//不是雷,统计周围几个雷
				int count = get_mine_count(mine,x,y);    //不需要进入头文件,因为只服务当前函数
				show[x][y] = count + '0';

				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;

			}
		}
		else
		{
			printf("坐标不合法\n");

		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功!\n");
		DisplayBoard(mine, row, col);

	}


	
}