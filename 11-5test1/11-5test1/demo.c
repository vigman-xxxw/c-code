#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[3][4] = { 0 };

	printf("%d\n",sizeof(a));       //4*12=48 
	printf("%d\n",sizeof(a[0][0])); //4       ��һ�е�һ��Ԫ��
	printf("%d\n",sizeof(a[0]));    //��������sizeof�ڲ� ��ʾ����a[0] 
	printf("%d\n",sizeof(a[0]+1));  //       4  ��һ�еڶ���Ԫ�� a[0]û�е�������sizeof�ڲ� ��ʾa[0]��һ�еĵ�һ��Ԫ�� 
	printf("%d\n",sizeof(*(a[0]+1))); //     4  ��һ�еڶ���Ԫ��
	printf("%d\n",sizeof(a+1));      //4/8    �ڶ��е�ַ
	printf("%d\n",sizeof(*(a+1)));   //16     �ڶ���
	printf("%d\n",sizeof(&a[0]+1));  //4/8   �ڶ��е�ַ
	printf("%d\n",sizeof(*(&a[0]+1))); //16   �ڶ���
	printf("%d\n",sizeof(*a));         //16   ��һ��
	printf("%d\n",sizeof(a[3]));       //16    ������
	

	return 0;
}