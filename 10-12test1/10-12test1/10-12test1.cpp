#include <stdio.h>


int main()
{
	int a = 5;
	int b = a >> 1;
	printf("%d\n",b);   //  2



	int m = 3;
	int n = 5;
	//����������������ֵ
	//��λ���
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("%d %d\n",m,n);

	//��λ��

	int i = 5 | 3;
	printf("%d\n",i);  // (111)2 = 7

	//��λ��
	int j = 5 & 3;
	printf("%d",j);  //   (001)2   = 1


	return 0;


}