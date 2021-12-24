#include <iostream>
using namespace std;


class MyInter
{
	//ǰ��++  friend ostream& operator<<(ostream& cout, MyInter& my_inter);
	//����++  
	friend ostream& operator<<(ostream& cout, MyInter my_inter);

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

	//����++
	MyInter operator++(int)    //����ֵ ����Ҫ����   
		                        //���� ((a++)++)  
		                        //����ֵ��temp����a
	{
		//j��¼��ʼ״̬
		MyInter temp = *this;
		this->m_num++;
		return temp;
	}
private:
	int m_num;
};

ostream& operator<<(ostream& cout, MyInter my_inter)
{
	cout << my_inter.m_num;
	return cout;
}


void test2()
{
	MyInter my_inter;
	cout << my_inter++ << endl;
	cout << my_inter << endl;

}
void test1()
{
	MyInter my_inter;
	cout << ++(++(++my_inter)) << endl;
}


int main()
{
	test2();
	return 0;
}