#include <iostream>
using namespace std;
#include <string>

template<class NAMETYPE,class AGETYPE =int> //��ģ���� ������Ĭ��
class Person
{
public:
	Person(NAMETYPE name, AGETYPE age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperson()
	{
		cout << "����= " << this->m_name << " ����= " << this->m_age << endl;
	}

	NAMETYPE m_name;
	AGETYPE m_age;
};

int main()
{
	Person<string>p1("���·�", 100);
	p1.showperson();
	return 0;
}