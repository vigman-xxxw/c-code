#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "Add.h"

int main()
{

	int a = 0;
	int b = 0;
	printf("������������:>");
	scanf("%d %d", &a,&b);
	
	int r = Add(a, b);
	printf("���Ϊ:>%d", r);
	return 0;
}