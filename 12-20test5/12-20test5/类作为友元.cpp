#include <iostream>
using namespace std;

class Building; //������ ��ʵ��

class GoodGay
{
public:
	GoodGay();

	void visit();

	Building * m_building;
};
class Building  //ʵ����
{
	friend class GoodGay;   //����Ϊ��Ԫ
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
	cout << "�û������ڷ���:" << this->m_building->m_bedroom << endl;
}
int main()
{
	GoodGay gg;
	gg.visit();

	return 0;
}