#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct S    //��������
{
	int a ;
	int arr[];   //��Сδ֪
};

int main()
{
	
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	ps->a = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	
	}
	//����
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//ʹ��


	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}