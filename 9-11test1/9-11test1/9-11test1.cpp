#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{

	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);  // password����Ҫ��&��ȡ��ַ  ������ǵ�ַ
	printf("��ȷ������(Y/N):>");

	//getchar();  //�ַ���Ļ�������
	int tmp = 0;
	while (tmp = getchar() != '\n')  //���������Ķ���ַ�
	{
		;
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}