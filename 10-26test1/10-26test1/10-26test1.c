#include <stdio.h>

int i;   //ȫ�ֱ��� û�г�ʼ�� Ĭ���� 0
int main()
{
	i--; // -1
	if (i > sizeof(i))   //sizeof����Ľ���� 4  ������ �޷�������unsigned int  i��ת�����޷������� -1��ɳ����������
	{
		printf(">");
	}
	else
	{
		printf("<");
	}
	return 0;
}