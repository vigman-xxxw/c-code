#include <stdio.h>
#include <math.h> 
                          //��������  (ˮ�ɻ����ĳ���)  153 =1^3 + 5^3 + 3^3

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//��λ��n
		//int n = 0;
		int n = 0;
		int tmp = i;
		while (tmp)
		{
			n++;
			tmp = tmp / 10;
			
		}
		//��ÿ��λ����n�η��ĺ�
		tmp = i;
		int sum = 0;
		int ret = 0;
		while (tmp)
		{
			
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//�ж�
		if (sum == i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}