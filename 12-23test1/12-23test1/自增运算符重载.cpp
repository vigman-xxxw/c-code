#include <iostream>
using namespace std;


class MyInter
{
	friend ostream& operator<<(ostream& cout, MyInter& my_inter);

public:
	MyInter()
	{
		m_num = 0;
	}
	//ǰ��++
	MyInter& operator++()      //�������õ������� һֱ�ӵ�һ�������� 
		                       //���û�����õĻ�  ԭ���Ķ���ֻ���һ��
	{
		this->m_num++;
		return *this;
	}
private:
	int m_num;
};

ostream& operator<<(ostream& cout, MyInter& my_inter)
{
	cout << my_inter.m_num;
	return cout;
}

int main()
{
	MyInter my_inter;
	cout << ++(++(++my_inter)) << endl;
	return 0;
}