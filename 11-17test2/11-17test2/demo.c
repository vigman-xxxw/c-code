#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//���ļ�
	char arr[10] = "xxxxxxx";
	FILE* pf = fopen("test.dat","w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//���ļ�-�ַ�
	int ret = fgetc(pf);
	printf("%c",ret);
	ret = fgetc(pf);
	printf("%c", ret);
	ret = fgetc(pf);
	printf("%c", ret);

	//д���ַ�
	fputc('b',pf);
	fputc('i',pf);
	fputc('t',pf);

	//���ַ���
	fgets(arr, 4, pf);    //4�ĺ���  3���ַ���1����\0��
	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
				
	return 0;
}