#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define WIDE 60
#define HIGH 20

//һ������Ķ���
struct BODY
{
	int x;
	int y;
};

//�����߶���
struct SNACK
{
	struct BODY body[HIGH*WIDE];
	int size;
}snack;

//����ʳ�����
struct FOOD
{
	int x;
	int y;
}food;

int score = 0;

//�ߵĳ�ʼ��
void InitSnack(void)
{
	snack.size = 2;
	snack.body[0].x = WIDE / 2; //��ͷ��ʼ��
	snack.body[0].y = HIGH / 2;

	snack.body[1].x = WIDE / 2 -1; //�ߵ�һ�������ʼ��
	snack.body[1].x = HIGH / 2;
}

int main()
{
	for (size_t i = 0; i < HIGH; i++)
	{
		for (size_t j = 0; j < WIDE; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}