#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>   //offsetof��ͷ�ļ�
#pragma pack(2)   //��Ĭ�϶�������Ϊ2  Ĭ����8
struct S
{
	char a;
	int b;
	char c;
};
#pragma pack()   //��Ĭ�϶�����Ĭ��
int main()
{
	
	printf("%d\n",sizeof(struct S));      //8
	printf("%d\n",offsetof(struct S,a));  //0
	printf("%d\n",offsetof(struct S,b));  //2
	printf("%d\n",offsetof(struct S,c));  //6

	return 0;
}