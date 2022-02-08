//������ȱ���

#include <iostream>
typedef struct BTNode
{
	BTNode* lChild;
	BTNode* rChild;
};

#define maxSize 100
void level(BTNode* bt)
{
	if (bt != NULL)
	{
		int front;
		int rear;
		BTNode* que[maxSize];
		front = rear = 0;
		BTNode* p;

		rear = (rear + 1) % maxSize;
		que[rear] = bt;

		while (front != rear)
		{
			front = (front + 1) % maxSize;
			p = que[front];
			//��¼���
			//visit(p);
			if (p->lChild != NULL)
			{
				rear = (rear + 1) % maxSize;
				que[rear] = p->lChild;
			}
			if (p->rChild != NULL)
			{
				rear = (rear + 1) % maxSize;
				que[rear] = p->rChild;
			}
		}
	}
}