#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//��̬����
struct LinkNode
{
	int num; //������
	struct LinkNode* next;  //ָ����
};

int main()
{
	//�����ڵ� ���ٿռ�
	struct LinkNode *node1 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node2 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node3 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node4 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node5 = malloc(sizeof(struct LinkNode));

	//��������ֵ
	node1->num = 10;
	node2->num = 20;
	node3->num = 30;
	node4->num = 40;
	node5->num = 50;

	//������ϵ
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	//��������
	struct LinkNode * pCurrent = node1;
	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
	}

	//�ͷ�
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);

	node1 = NULL;
	node2 = NULL;
	node3 = NULL;
	node4 = NULL;
	node5 = NULL;
	return 0;
}