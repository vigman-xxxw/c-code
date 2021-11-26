#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int str_inserse(char* str)
{
	char* start = str;
	char* end = str + strlen(str) - 1;

	while (start < end)
	{
		if (*start != *end)
		{
			return 0;  //���ǻ���
		}
		start++;
		end--;
	}
	return 1;  //����
}

int main()
{
	char str[] = "abccba"; //����  �����ָ�봴�����ǳ���

	int ret = str_inserse(str);


	if (ret == 1)
	{
		printf("����");
	}
	else
	{
		printf("���ǻ���");

	}

	return 0;
}