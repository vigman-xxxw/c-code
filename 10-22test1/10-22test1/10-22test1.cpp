#include <stdio.h>

int main()
{

	                                  //�жϵ�ǰ�������ֽ���
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С�˴洢");
	}
	else
	{
		printf("��˴洢");
	}

	return 0;
}