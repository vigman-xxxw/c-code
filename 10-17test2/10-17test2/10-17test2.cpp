#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char* arr)   //size_t  ���� unsigned int �޷�������
{

	//assert(arr != NULL);
	assert(arr);
	int count = 0;


	while (*arr++)
	{
		count++;


	}
	return count;
}

int main()
{
	char a[] = "abcdse";

	printf("%d", my_strlen(a));

	return 0;
}