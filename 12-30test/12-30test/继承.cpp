#include <iostream>
using namespace std;



class BasePage
{
public:
	void header()
	{
		cout << "������ͷ��" << endl;
	}
	void footer()
	{
		cout << "�����ĵײ�" << endl;
	}
	void leftlist()
	{
		cout << "����������б�" << endl;
	}
};

class News : public BasePage
{
public:
	void content()
	{
		cout << "���Ų���" << endl;
	}
};

int main()
{
	News n1;
	n1.header();
	n1.footer();
	n1.leftlist();
	n1.content();
	return 0;
}