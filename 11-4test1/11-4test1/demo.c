#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n",strlen(arr));     //���ֵ �ҵ�/0��ͣ��
	printf("%d\n",strlen(arr+0));   //���ֵ �ҵ�/0��ͣ��
	printf("%d\n",strlen(*arr));    //err ��a���� ��strlen���յ���char* ����  ��õ���ַ  0x 00 00 00 61
	printf("%d\n",strlen(arr[1]));  //err
	printf("%d\n",strlen(&arr));    //���ֵ
	printf("%d\n",strlen(&arr+1));  //���ֵ-6
	printf("%d\n",strlen(&arr[0]+1));   //���ֵ-1
	return 0;
}