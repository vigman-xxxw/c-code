#include <iostream>
using namespace std;

int mydiv(int a, int b)
{
	if (b == 0)
	{
		throw 'a';
	}
	return a / b;
}

int main()
{
	int a = 10;
	int b = 0;

	try
	{
		mydiv(a, b);
	}
	catch (int)
	{
		cout << "int�����쳣����" << endl;
	}
	catch (...)
	{
		cout << "���������쳣����" << endl;
	}

	return 0;
}