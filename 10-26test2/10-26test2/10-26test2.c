#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�� Sn = a + aa + aaa + aaaa  ��ֵ
//���� 2+22+222+222
int main()
{
	int a = 0;
	int n = 0;
	printf("��������a n");
	scanf("%d %d",&a,&n);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d",sum);
	return 0;
}