#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡ����
int main()
{
	int line = 0;
	scanf("%d",&line);
	int i = 0;
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 0; j < line - 1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line-i-1)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}