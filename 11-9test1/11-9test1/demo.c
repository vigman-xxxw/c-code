#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
#include <errno.h>
int main()
{
	//���ļ�ʧ�ܵ�ʱ��,�᷵��NULL
	FILE* pf = fopen("test,txt","r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		perror("error");
		return 1;
	}
	//���ļ�


	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}