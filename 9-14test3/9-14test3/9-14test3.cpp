#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void game()
{
	
	int ret = rand()%100+1;    //%100 ��Χ0��99   ��+1   1��100
	//printf("%d\n", ret);

	int guess = 0;
	while (1)
	{ 
	
		printf("��һ������:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���!\n");

		}
		else if (guess < ret)
		{
			printf("��С��!\n");
		}
		else
		{ 
			printf("�¶���!\n");
			break;
	
		}
	}
}


void menu()
{
	printf("**************************\n");
	printf("******* 1.������   *******\n");
	printf("******* 0.�˳���Ϸ *******\n");
	printf("**************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));   //srand�����ܸ�rand�����趨��ʼֵ  time���� ʱ��� 

	do
	{
		menu();  //��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ");
				break;
			default:
			{
				printf("��������");
				break;
			}

		}


	} while (input);
	return 0;
}