#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	struct stat buf;

	int ret = stat("D:\\C-PENG\\c-code\\11-29test1\\11-29test1\\test1.txt",&buf);

	printf("�ļ���С��%d\n",buf.st_size);


	return 0;
}