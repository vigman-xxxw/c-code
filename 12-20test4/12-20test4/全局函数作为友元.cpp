#include <iostream>
using namespace std;
#include <string>
class Building
{
	friend void GoodGay(Building* building); //ȫ�ֺ�����Ϊ��Ԫ
public:
	Building()
	{
		m_sittingroom = "����";
		m_bedroom = "����";
	}

public:
	string m_sittingroom;
private:
	string m_bedroom;
};
  
void GoodGay(Building* building)
{
	cout << "�û������ڷ���:" << building->m_sittingroom << endl;
	//���Է��� privateȨ��
	cout << "�û������ڷ���:" << building->m_bedroom << endl; 
}

int main()
{
	Building building;
	GoodGay(&building);
	return 0;
}