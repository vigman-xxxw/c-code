#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//strcmp�⺯�� ����ֵ����0 p>q       ����ֵС��0 p<q
int my_strcmp(const char* p,const char* q)
{
	assert(p && q);
	while (*p == *q)
	{
		if (*p == '\0')
		{
			return 0;
		}
		q++;
		p++;
	}
	return *p - *q;
}


int main()
{
	
	char* p = "a";
	char* q = "ab";
	printf("%d",my_strcmp(p, q));
	

	return 0;
}