#include <iostream>
using namespace std;
#include <string>

class calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_a + m_b;
		}
		else if (oper == "-")
		{
			return m_a - m_b;
		}
		else if (oper == "*")
		{
			return  m_a * m_b;
		}
	}
	int m_a;
	int m_b;
};

//���ԭ�� : ����ԭ��
// ����չ���п��� ���޸Ľ��йر�
//���ö�̬ʵ�ּ�����
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_a;
	int m_b;
};
//�ӷ�������
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a + m_b;
	}
};
//����������
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a - m_b;
	}
};
//�˷�������
class MulCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a * m_b;
	}
};
//����������
class  DivCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_a / m_b;
	}
};
int main()
{
	AbstractCalculator* calculator = new AddCalculator;
	calculator->m_a = 100;
	calculator->m_b = 100;
	cout << calculator->getResult() << endl;
	delete calculator;

	calculator = new SubCalculator;
	calculator->m_a = 100;
	calculator->m_b = 100;
	cout << calculator->getResult() << endl;
	delete calculator;


	return 0;
}