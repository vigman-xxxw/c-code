#include <iostream>
using namespace std;
class Person
{
public:
	//��̬��Ա����:����׶ξͷ������ڴ�
	//�������� �����ʼ��
	//��̬��Ա���� ���ж��󶼹���ͬһ������
	static int a;
};
int Person::a = 0;

int main()
{
	//1.ͨ��������з���
	Person p1;
	cout << p1.a << endl;
	Person p2;
	p2.a = 100;
	cout << p1.a << endl;  //p1 p2��������

	//2.ͨ����������
	cout << Person::a << endl;

	return 0;
}