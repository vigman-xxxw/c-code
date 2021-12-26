#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
	Person(const char* name, int age)
	{
		this->m_name = new char[strlen(name) + 1];
		strcpy(this->m_name, name);
		this->m_age = age;
	}
	//����operator=
	Person& operator=(const Person& p)
	{
		//���ж�ԭ�������Ƿ������� �о����ͷ�
		if (this->m_name != NULL)
		{
			delete[] this->m_name;
			this->m_name = NULL;
		}
		this->m_name = new char[strlen(p.m_name) + 1];
		strcpy(this->m_name, p.m_name);
		this->m_age = p.m_age;
		return  *this;
	}
	//��������
	Person(const Person& p)
	{
		this->m_name = new char[strlen(p.m_name) + 1];
		strcpy(this->m_name, p.m_name);
		this->m_age = p.m_age;
	}

	~Person()
	{
		if (this->m_name != NULL)
		{
			delete [] this->m_name;  //��Ϊ������ �����ͷŵ�ʱ�� ��Ҫ��[]
			this->m_name = NULL;
		}
	}
	char* m_name;
	int m_age;
};


int main()
{
	Person p1("tom", 10);
	Person p2("jerry", 19);
	//������Ĭ�ϸ�һ����4������ Ĭ�Ϲ��� ���� �������� operator=
	p2 = p1;
	cout << "p2.name = " << p2.m_name << " p2.age = " << p2.m_age << endl;
	//�ṩ���ȵĲ���
	//�޸�����=�ķ���ֵ 
	Person p3("",0);

	p3 = p2 = p1;
	cout << "p3.name = " << p1.m_name << " p3.age = " << p3.m_age << endl;

	//��д��������
	Person p4 = p3;
	return 0;
}