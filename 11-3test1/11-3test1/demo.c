#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//sizeof(������) - ��������ʾ�������� - ������������Ĵ�С
//&������ - ��������ʾ��������,ȡ��������������ĵ�ַ
//����֮��,���е�����������������Ԫ�صĵ�ַ
int main()
{
	int a[4] = { 1,2,3,4 };
	printf("%d\n",sizeof(a));  //16   4*4=16
	printf("%d\n",sizeof(a+1));//4/8  a+0�ǵ�һ��Ԫ�صĵ�ַ sizeof(��һ��Ԫ�صĵ�ַ) x86Ϊ4  x64Ϊ8
	printf("%d\n",sizeof(*a)); //4  *a������ĵ�һ��Ԫ��   �������Ԫ�صĴ�С
	printf("%d\n",sizeof(a+1));//4/8  a+1�ǵڶ���Ԫ�صĵ�ַ
	printf("%d\n",sizeof(a[1]));//4   ������ǵڶ���Ԫ�صĴ�С


	printf("\n");
	printf("%d\n",sizeof(&a));  //4/8     ����ĵ�ַҲ�ǵ�ַ 
	printf("%d\n",sizeof(*&a)); //16         ����������ĵ�ַ ���� ����    ,  & �� *���Ե���
	printf("%d\n",sizeof(&a+1)); //4/8      ������������� ָ��ָ��Ԫ��4����ĵ�ַ
	printf("%d\n",sizeof(&a[0])); //4/8   ��һ��Ԫ�صĵ�ַ
	printf("%d\n",sizeof(&a[0] + 1));  //4/8   �ڶ���Ԫ�صĵ�ַ


	return 0;
}