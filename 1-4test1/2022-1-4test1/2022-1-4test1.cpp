#include <iostream>
using namespace std;

//�����̳�
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};


class Son1 :public Base1
{
public:
	void func()
	{
		m_a = 100;//������ ����Ȩ�� ������ ����Ȩ��
		m_b = 100;//������ ˽��Ȩ�� ������ ˽��Ȩ��

		//�����е�˽����Ϣ �����޷�����
		//m_c = 100;
	}
};


//�����̳�
class Base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};


class Son2 :protected Base2
{
public:
	void func()
	{
		m_a = 100;//������ ����Ȩ�� ������ ����Ȩ��
		m_b = 100;//������ ˽��Ȩ�� ������ ����Ȩ��

		//�����е�˽����Ϣ �����޷�����
		//m_c = 100;
	}
};


//˽�м̳�
class Base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};


class Son3 :private Base3
{
public:
	void func()
	{
		m_a = 100;//������ ����Ȩ�� ������ ˽��Ȩ��
		m_b = 100;//������ ˽��Ȩ�� ������ ˽��Ȩ��

		//�����е�˽����Ϣ �����޷�����
		//m_c = 100;
	}
};

int main()
{
	//�����̳�
	Son1 s1;
	s1.m_a = 100;//��Son1�� m_a�ǹ���Ȩ�� ������Է���
	//s1.m_b = 100;//��Son1�� m_b�Ǳ���Ȩ�� ���ⲻ�ɷ���
	
	//�����̳�
	Son2 s2;
	//s2.m_a = 100; //����Ȩ�� �޷�����
	//s2.m_b = 100; //����Ȩ�� �޷�����
	//s2.m_c = 100; //˽��Ȩ�� ���ⲻ���Է���

	//˽�м̳�
	Son3 s3;
	//s3.m_a = 100; //˽��Ȩ�� ���ⲻ���Է���
	//s3.m_b = 100; //˽��Ȩ�� ���ⲻ���Է���
	//s3.m_c = 100; //˽��Ȩ�� ���ⲻ���Է���

	return 0;
}