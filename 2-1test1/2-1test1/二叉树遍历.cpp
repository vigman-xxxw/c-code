#include <iostream>
typedef struct BTNode
{
	BTNode* lChild;
	BTNode* rChild;
};
//�ݹ�
void r(BTNode* p)
{
	if (p != NULL)
	{
		//(1)
		r(p->lChild);
		//(2)
		r(p->rChild);
		//(3)
	}
}