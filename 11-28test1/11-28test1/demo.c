#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	//д���ļ�
	/*FILE* fp = fopen("text.txt","w");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}
	srand((unsigned int)time(NULL));
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		fprintf(fp,"%d\n",rand()%100);
	}
	fclose(fp);
	fp = NULL;*/


	//��ȡ�ļ�
	int arr[100];
	int i = 0;
	int j = 0;

	FILE* fp = fopen("text.txt", "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}

	while (1)
	{
		fscanf(fp,"%d\n",&arr[i]);
		i++;
		if (feof(fp))
			break;
	}
	for (j = 0; j < 100; j++)
	{
		printf("%d\n", arr[j]);
	}
	fclose(fp);
	fp = NULL;
	return 0;
}