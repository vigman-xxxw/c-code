#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct S
{
	char arr[10];
	int a;
	float b;
};

int main()
{
	struct S s = {"abc",10,5.5f};
	struct S tmp = { 0 };
	char arr2[20];
	//��һ����ʽ�������� ת�����ַ���
	sprintf(arr2,"%s %d %f\n",s.arr,s.a,s.b);

	printf("%s",arr2);
	//��arr2�ַ����л�ԭ��һ���ṹ������
	sscanf(arr2,"%s %d %f",tmp.arr,&(tmp.a),&(tmp.b));
	printf("%s %d %f\n",tmp.arr,tmp.a,tmp.b);
	return 0;
}