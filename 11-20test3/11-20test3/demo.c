#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <ctype.h>

enum State
{
	INVALID,
	VALID
};

enum State state = INVALID;

int my_atoi(const char* s)
{
	int flag = 1;
	//��ָ��
	if (NULL == s)
	{
		return 0;
	}
	//���ַ�
	if (*s == '\0')
	{
		return 0;
	}
	//�����հ��ַ�
	while (isspace(*s))
	{
		s++;
	}
	//+ / -
	if (*s == '+')
	{
		flag = 1;
		s++;
	}
	else if (*s == '-')
	{
		flag = -1;
		s++;
	}
	//���������ַ���ת��
	long long n = 0;
	while (isdigit(*s))
	{
		n = n * 10 + flag * (*s - '0');
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if (*s == '\0')
	{
		state = VALID;
		return (int)n;
	}
	else
	{ 
		//�������ַ������
		return (int)n;
	}
		


}

int main()
{
	
	const char* p = "     -1234";
	int ret = my_atoi(p);
	if(state == VALID)
		printf("�Ϸ���ת��:%d\n",ret);
	else
		printf("���Ϸ���ת��:%d\n", ret);

	return 0;
}