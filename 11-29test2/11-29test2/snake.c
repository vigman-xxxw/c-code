#include "snake.h"


//�ߵĳ�ʼ��
void InitSnake()
{
	snake.size = 2;
	snake.body[0].x = WIDE / 2; //��ͷ��ʼ��
	snake.body[0].y = HIGH / 2;

	snake.body[1].x = WIDE / 2 - 1; //�ߵ�һ�������ʼ��
	snake.body[1].y = HIGH / 2;
}


//ʳ��ĳ�ʼ��
void InitFood()
{
	food.x = rand() % WIDE; 
	food.y = rand() % HIGH;
}


//��ʼ��UI 
void InitUI()
{
	//��ȡ���λ�õı���
	COORD coord = { 0 };

	//����
	int i;
	for ( i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].x;
		coord.Y = snake.body[i].y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if(i == 0)
			putchar('@');
		else
		{
			putchar('*');
		}
		
	}
	//��ʳ��
	coord.X = food.x;
	coord.Y = food.y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	//�����Ĭ��λ���ƶ�����������Ϸ��λ��
	coord.X = 0;
	coord.Y = HIGH + 2;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);


}

void PlayGame()
{
	char key = 'd';
	//�ж����Ƿ�ײǽ
	while (snake.body[0].x >=0 && snake.body[0].x <WIDE
		&& snake.body[0].y >=0 && snake.body[0].y <HIGH)
	{
		InitUI();

		//�����û�����wasd
		if (_kbhit()) //��������ֵΪ��˵��������  �����������û�����
		{
			key = _getch();
		}
		switch (key)
		{
		case 'w':
			kx = 0;
			ky = -1;
			break;
		case 'a':
			kx = -1;
			ky = 0;
			break;
		case 's':
			kx = 0;
			ky = 1;
			break;
		case 'd':
			kx = 1;
			ky = 0;
			break;
		default:
			break;
		}


		//��ͷײ���� 
		
		for (int i = 1; i < snake.size; i++)
		{
			//��ͷ�Ƿ��������
			if (snake.body[0].x == snake.body[i].x
				&& snake.body[0].y == snake.body[i].y)
				return;
		}
		//��ͷײʳ��
		if (snake.body[0].x == food.x
			&& snake.body[0].y == food.y)
		{
			//ʳ����ʧ
			InitFood();

			//��������
			snake.size++;
			//�ӷ�
			score += 10;
			//����
		}

		
		//���ƶ� ǰһ���������һ�����帳ֵ
		for (int i = snake.size - 1; i > 0; i--)
		{
			snake.body[i].x = snake.body[i - 1].x;
			snake.body[i].y = snake.body[i - 1].y;

		}
		snake.body[0].x += kx;   //�޸���ͷ����
		snake.body[0].y += ky;


		//���� ȥ����β
		system("cls");

	}
}