#include <iostream>
using namespace std;

class Person
{
public:  
	//���캯�� �в� �� �޲�
	Person()
	{
		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age)
	{
		p_age = age;
		cout << "Person�вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person& p)
	{
		p_age = p.p_age;
		cout << "Person�������캯���ĵ���" << endl;

	}

	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	int p_age;
};

int main()
{   //���캯���ĵ���
	Person p(18);     //���ŷ�
	Person p2(p);

	Person p3;    //�޲ι���
	//ע�ⲻҪд�ɺ���������  Person p3();

	//��ʾ��
	Person p4 = Person(10);
	Person p5 = Person(p4);   //ע��ջ��  p4�Ƚ�ȥ p5�ٽ�ȥ
	                           //��ִ��p5�������� ��p4

	//�������� ִ���� �����ͷ�
	Person(10);

	//��Ҫ�ÿ������캯�� ��ʼ�� ��������
	Person(p3);  //��������Ϊp3ʵ���� ���ض���

	//��ʽ��   ��������
	Person p6 = 10;  //��ת���� Person p6 = Person(10);
	Person p7 = p6;     
	return 0;
}