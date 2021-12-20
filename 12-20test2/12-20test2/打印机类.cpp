#include <iostream>
using namespace std;

class Printer
{
public:
	static Printer* GetInstance()   //�ṩ��̬��Աָ��ӿ�  Ҫ��static�ؼ���
	{
		return printer;
	}
	void PrintText(string text)
	{
		p_count++;
		cout << text << endl;
	}
	int p_count = 0;
private:
	Printer(){}    //�ṩĬ�Ϲ��캯��
	Printer(const Printer &){}  //��ֹ��������
	static Printer*printer;    //�ڲ����� �ⲿ��ʼ��
};
Printer* Printer::printer = new Printer;  

int main()
{
	//p1ʹ�ô�ӡ��
	Printer* p1 = Printer::GetInstance();
	p1->PrintText("��ְ֤��");
	p1->PrintText("��ְ֤��");
	p1->PrintText("��н����");
	p1->PrintText("��������");
	cout << "��ӡ��ʹ�ô���:"<<p1->p_count << endl;

	//p2ʹ�ô�ӡ��
	Printer* p2 = Printer::GetInstance();
	p2->PrintText("�Ӱ�����");
	cout << "��ӡ��ʹ�ô���:" << p2->p_count << endl;

	//���� : ֻ��һ�� ��ӡ������  
	return 0;
}
