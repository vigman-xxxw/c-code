#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d %d",*(a+1),*(ptr-1));
					//2      //5
	               //��һ��Ԫ��+1 Ϊ�ڶ���Ԫ�� 
	               //ptrָ��Ԫ��5����   ����ת��֮ǰΪint* [5]  int*����-1��ָ��ָ��5ǰ��   
	return 0;
}