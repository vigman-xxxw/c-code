#include <iostream>
using namespace std;
#include <string>
//��Ĭ��˽��Ȩ��
//�ṹ��Ĭ�Ϲ���Ȩ��
class Person
{
public:
	//��������
	void SetName(string name)
	{
		p_name = name;
	}
	//��ȡ����
	string GetName()
	{
		return p_name;
	}
	//��ȡ����
	int GetAge()
	{
		return p_age;
	}
	//��������
	void SetLover(string lover)
	{
		p_lover = lover;
	}
private:
	string p_name;   //�ɶ���д
	int p_age=18;     //ֻ��
	string p_lover;   //ֻд
protected:


};

int main()
{
	Person p;
	p.SetName("����");
	cout << "����:" << p.GetName() << endl;
	//��ȡ����
	cout << "����:" << p.GetAge() << endl;

	//��������
	p.SetLover("����");
	return 0;
}