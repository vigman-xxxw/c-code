#include <stdio.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//
//
//	}
//	*dest = *src;   //���û�����д���  \0  ��������ȥ  �ַ������  helloxxxxx
//	
//}



//�Ż�����

char* my_strcpy(char* dest,const char* src)  //*src ��ֵ���ܸı�
{
	assert(dest != NULL);  //����
	assert(src != NULL);
	char* ret = dest;   //������Ԫ�ص�ַ
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}



int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";

	
	printf("%s\n", my_strcpy(arr1, arr2));  //��ʽ����


	return 0;
}