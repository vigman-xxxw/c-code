#include <stdio.h>

void Swap(int* pa, int* pb)
{

	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}


int main()
{


	int a = 10;
	int b = 20;
	printf("����ǰ:>%d  %d\n", a, b);
	Swap(&a, &b);                         //����������a , b �Ὺ���¿ռ�
	printf("������:>%d  %d\n", a, b);
	return 0;
}