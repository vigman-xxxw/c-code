#include <stdio.h>


int main()
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {22,2,3,4,5};
	int c[5] = {1,2,3,4,6};
	int* arr[3] = { a,b,c };   //ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//("%d ",*(arr[i]+j));
			printf("%d ",   arr[i][j]   );  //[j] ת��� +j ������
		}
		printf("\n");
	}

	return 0;
}