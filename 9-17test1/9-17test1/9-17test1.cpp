#include <stdio.h>

     //打印1000到2000所有闰年
int main()
{
	int a = 0;
	for (a = 1000; a <= 2000; a++)
	{
		if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))    //if后面不能加 ; 号  如果加了 会显示1000到2000之间所有数字
		{
			printf("%d ", a);
		}
	}
	return 0;
}