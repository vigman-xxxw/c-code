# define _CRT_SECURE_NO_WARNINGS 1
# include <string.h>
# include <stdio.h>


int main()
{

	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{

			printf("����ɹ�");
				break;
		}


	}
	if (i == 3)
	{
		printf("�������������");
	}
	return 0;
}