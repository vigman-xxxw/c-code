#include <stdio.h>

int main()                    //ָ������Ӱ��ָ������
{
	int arr[10];

	int* p1 = arr;   //��Ԫ�ص�ַ

	int(*p2)[10] = &arr;  //����ĵ�ַ
	 
	printf("%p\n",p1);
	printf("%p\n",p1+1);    //��һ��Ԫ��
	printf("%p\n",p2);
	printf("%p\n",p2+1);    //��һ������

	return 0;
}