#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		cout << "Person�вι������" << endl;
		this->m_age = age;
	}
	void showage()
	{
		cout << "age = " << this->m_age << endl;
	}
	~Person()
	{
		cout << "Person������������" << endl;
	}
	int m_age;
};


class SmartPoint
{
public:
	SmartPoint(Person* person)
	{
		this->m_person = person;
	}
	~SmartPoint()
	{
		if (this->m_person)
		{
			delete this->m_person;
			this->m_person = NULL;
		}
	}
	//����->�����
	Person* operator->()
	{
		return this->m_person;
	}
	//���� * �����
	Person& operator*()
	{
		return *m_person;
	}

private:
	Person* m_person;
};
void test1()
{
	//Person *p = new Person(18);
	//p->showage();
	////���� ����.������ (*p).showage();  
	//delete p;
	SmartPoint sp(new Person(18));
	sp->showage(); //��������ǰ sp->->showage();
	(*sp).showage();
}

int main()
{

	test1();
	return 0;
}