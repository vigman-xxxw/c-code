#include <stdio.h>


int main()
{
	char a = 128;
	//ԭ��00000000000000000000000010000000
	//ԭ�뷴�벹����ͬ 
	//char����ֻȡ��8λ10000000
	//�з�����������11111111111111111111111110000000

	printf("%u",a);

	return 0;
}