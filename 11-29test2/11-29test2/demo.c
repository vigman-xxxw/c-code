#define _CRT_SECURE_NO_WARNINGS 1
#include "snake.h"



int main()
{

	srand((unsigned int)time(NULL));  //���������
	InitSnake();  //��ʼ����
	InitFood();   //��ʼ��ʳ��
	InitUI();     //����
	PlayGame();  



	return 0;
}