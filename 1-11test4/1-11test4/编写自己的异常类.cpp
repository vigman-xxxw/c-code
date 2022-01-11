#include <iostream>
using namespace std;


class MyOutOfRangeExcepton :public exception
{
public:
	MyOutOfRangeExcepton(const char* str)
	{
		//const char * ������ʽ����ת���� string ��֮������
		this->m_errorinfo = str;
	}

	MyOutOfRangeExcepton(string str)
	{ 
		this->m_errorinfo = str;

	}

	//��д
	virtual const char* what() const
	{
		//��stringתΪconst char *
		return m_errorinfo.c_str();
	}

	string m_errorinfo;
};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			throw MyOutOfRangeExcepton(string ("���������0��150֮��"));
		}
		else
		{
			this->m_age = age;
		}
	}

	int m_age;
};


int main()
{
	try
	{
		Person p(1000);
	
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
	}

	return 0;
}