#include <iostream>
using namespace std;

//��̬��̬��������
//���м̳й�ϵ
//���������麯�� ������д�����е��麯��
//����ָ������� ָ������Ķ���
class Animal
{
public:
	virtual void Speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void Speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animal
{
public:
	void Speak()
	{
		cout << "С����˵��" << endl;
	}
};

void doSpeak(Animal & animal)
{
	//�����ַ��Ͱ󶨺��� ��ַ��� ���ھ�̬����
	//�������СèС��˵�� ���ʱ�����ĵ�ַ������Ͱ󶨺�
	//���������н׶���ȥ�󶨺�����ַ ���ڶ�̬����
	animal.Speak();
}

int main()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
	return 0;
}