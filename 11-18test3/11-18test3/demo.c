#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ch = fgetc(pf);
	printf("%c\n",ch);  
	
	fseek(pf,1,SEEK_CUR);  //fseek(��,ƫ����,x)   x������SEEK_CUR  ;  SEEK_END  ; SEEK_SET

	ch = fgetc(pf); 
	printf("%c\n",ch);

	int ret = ftell(pf);    //ftell �����ļ�ָ���ʼλ�õ�ƫ����
	printf("%d",ret);

	rewind(pf);  //���ļ�ָ�뷵�ص���ʼλ��

	fclose(pf);
	pf = NULL;



	return 0;
}