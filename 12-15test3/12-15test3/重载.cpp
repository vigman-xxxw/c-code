#include <iostream>
using namespace std;

//��������
//���������� ��ͬ
//������ ��ͬ
//�����Ĳ��� ˳�� ���� ���� ��ͬ
//�������Ͳ�ͬ
void func(int& a)
{
	cout << "func(int &a)" << endl;
}
void func(const int& a)
{
	cout << "func(const int &a)" << endl;

}

void test1()
{
	int a = 10;
	func(a);  //������ int 
	printf("---------------\n");
	func(10);  //int &a =10  �﷨��֧��     const int &a =10 �Ὺ��temp�ռ�
}
int main()
{
	test1();

	return 0;
}