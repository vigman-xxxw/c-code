#include "ͨ����������.hpp"

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void myprintint(MyArray<int>& myintarray)
{
	for (int i = 0; i < myintarray.getsize(); i++)
	{
		cout << myintarray[i] << endl;
	}
}

void myprintperson(MyArray<Person>& mypersonarr)
{
	for (int i = 0; i < mypersonarr.getsize(); i++)
	{
		cout <<"���� = " << mypersonarr[i].m_name <<" ���� =" << mypersonarr[i].m_age << endl;
	}
}

int main()
{
	//int 
	MyArray<int> myintarray(100);
	for (int i = 0; i < 10; i++)
	{
		myintarray.pushback(i + 100);
	}
	myprintint(myintarray);

	cout << "-----" << endl;

	//Person
	MyArray<Person> mypersonarr(100);
	Person p1("�����", 1);
	Person p2("��˽�", 2);
	Person p3("ɳ��", 3);
	Person p4("������", 4);

	mypersonarr.pushback(p1);
	mypersonarr.pushback(p2);
	mypersonarr.pushback(p3);
	mypersonarr.pushback(p4); 
	myprintperson(mypersonarr);
	cout << "������С = " << mypersonarr.getcapacity() << endl;
	cout << "�����С = " << mypersonarr.getsize() << endl;
	return 0;
}