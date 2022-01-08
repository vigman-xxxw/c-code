#include <iostream>
using namespace std;
template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//���� ͨ��һ��ͨ�õ������� ʵ�ֶ�char��int��������� �Ӵ�С
template<typename T>
void mysort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1;j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		//�ж� �����max�͸տ�ʼ�϶���i�Ƿ�һ��  ��ͬ�ͽ�������
		if (i != max)
		{
			myswap(arr[i],arr[max]);
		}
	}
}

template<typename T>
void printarray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	//��ĸ�Ӵ�С����
	char chararray[] = "helloworld";
	int len = strlen(chararray);
	mysort(chararray,len);

	//printarray(chararray,len);


	//���ִӴ�С����
	int intarray[] = { 2,67,5,8,99 };
	len = sizeof(intarray)/sizeof(int);
	mysort(intarray,len);
	printarray(intarray, len);
	return 0;
}