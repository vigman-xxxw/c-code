#include <stdio.h>


int main()
{
	int i = 0;                                    //�ڴ��ɵ͵��ߴ洢 �����ڴ�ĸߵ�ַ�洢����i 
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };       //�洢����
	for (i = 0; i <= 12; i++)                     
	{

		arr[i] = 0;                               //arr[10����11] ��i��ֵ���0  ������ѭ��
		printf("hehe\n");     
	}



	return 0; 
}