#include <iostream>
using namespace std;

class Building; //������ ��ʵ��

class GoodGay
{
public:
	GoodGay();

	void visit();

	void visit2();

	Building* m_building;
};
class Building  //ʵ����
{
	//��GoodGay���е�visit2��Ա������Ϊ��Ԫ
	friend void GoodGay::visit2();
public:
	Building();
	string m_sittingroom;
private:
	string m_bedroom;
};

Building::Building()    //���캯��
{
	this->m_sittingroom = "����";
	this->m_bedroom = "����";
}
GoodGay::GoodGay()    //���캯��
{
	this->m_building = new Building;
}

void GoodGay::visit()   //��Ա����
{
	cout << "�û������ڷ���:" << this->m_building->m_sittingroom << endl;
	//cout << "�û������ڷ���:" << this->m_building->m_bedroom << endl;
}
void GoodGay::visit2()   //��Ա����
{
	cout << "�û������ڷ���:" << this->m_building->m_sittingroom << endl;
	cout << "�û������ڷ���:" << this->m_building->m_bedroom << endl;
}
int main()
{
	GoodGay gg;
	gg.visit2();

	return 0;
}