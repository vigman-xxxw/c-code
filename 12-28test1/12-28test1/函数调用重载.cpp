#include <iostream>
using namespace std;
#include <string>
class MyADD
{
public:
	int  operator()(int a,int b)  
	{
		return a + b;
	}
};

int main()
{
	MyADD my;
	my(1,1);//   ���  �º���
	cout << MyADD()(1, 1) << endl; //�������� ִ���������ͷ�
	return 0;
}