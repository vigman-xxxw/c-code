#include <iostream>
using namespace std;

//c++������
//���ñ����ʼ�� ��ʼ��֮�󲻿ɸı�����Ŀ��

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int& b = a;
	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	//���������
	int arr[10];
	int (&parr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "parr=" << parr[i] << endl;
	}

	//��������
	int m = 10;
	int n = 20;
	Swap(m,n);
	cout << "m=" << m << endl;
	cout << "n=" << n << endl;
	return 0;
}