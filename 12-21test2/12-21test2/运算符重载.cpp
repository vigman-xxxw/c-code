#include <iostream>
using namespace std;


class Person
{
public:
	Person() {}

	Person(int a,int b) :m_A(a),m_B(b)
	{
	}

	//���ó�Ա����ʵ�ּӺ������
	Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};

//��ȫ�ֺ���ʵ��  ���ַ�ʽ����ͬʱ����
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}


int main()
{
	Person p1(10, 20);
	Person p2(10, 20);
	Person p3 = p1 + p2;
	//     �����Ǻ������� 
	//����д�� Person p3 = operator+(p1,p2);
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;
	return 0;
}