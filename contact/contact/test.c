#include "contact.h"



void menu()
{
	printf("********************************\n");
	printf("*******  1.add    2.del    *****\n");
	printf("*******  3.search 4.modify *****\n");
	printf("*******  5.sort   6.print  *****\n");
	printf("*******  0.exit            *****\n");
	printf("********************************\n");
}


enum option
{            //ö�����ͳ�Ա��ô�д
	exit,
	add,
	del,
	search,
	modify,
	sort,
	print

};

int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			break;
		case search:
			break;
		case modify:
			break;
		case sort:
			break;
		case print:
			PrintContact(&con);   //��ʹ���޸����� ����ַҲ�ȽϺ�
			break;
		case exit:
			break;
		default:
			printf("��������,����������;>");
			break;
		}


	} while (input);


	return 0;
}