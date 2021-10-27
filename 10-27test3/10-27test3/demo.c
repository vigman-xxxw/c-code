#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//��ǰ������ż��
		while ((left<right) && arr[left] % 2 != 0)   //left <right ����Խ�����
		{
			left++;
		}
		//�Ӻ���ǰ������
		while ((left <right) &&  arr[right] % 2 != 1)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[right];
			arr[right] = arr[left];
			arr[left] = tmp;
		}
		// ����Ҫ������  ��Ϊ2��7��ȥ����4��5   4.5 ��ȥ ����5.4
		/*int tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;*/
		
	}
}
	

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d",arr[i]);
	}
}


int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr,sz);


	return 0;
}