#include  <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->m_age = age;
	}
	//������: ���γ�Ա�����е�thisָ�� ��ָ��ָ���ֵ�������޸�
	void ShowPerosn() const 
	{
		//thisָ��ı��� :  Person * const this
		// this =NULL ָ���ָ�򲻿����޸� ��ָ��ָ���ֵ���Ը�
		// const Person * const this
		//m_age = 100;  ������ �����޸ĳ�Ա����
		m_a = 100;
		cout << "person age = " << m_age << endl;
	}
	int m_age;
	mutable int m_a; //�ؼ��� ���ڳ��������޸ĳ�Ա����
};

int main()
{
	//������   ע��:������ ֻ�ܵ��ó�����  �������������޸ĳ�Ա����������
	const Person p1(10);
	//p1.m_age = 10;    //�����޸�
	p1.m_a = 10;        //�����޸�

	p1.ShowPerosn();
}