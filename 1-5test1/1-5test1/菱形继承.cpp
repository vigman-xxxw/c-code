#include <iostream>
using namespace std;


class Animal
{
public:
	int m_age;
};

//animal��Ϊ �����

//��vbptr �����ָ�� ָ�� vbtable�� ���m_age��ƫ����
//ʹm_ageֻ��һ��
class Sheep :virtual public Animal
{
	
};

class Tuo :virtual public Animal
{
	
};

class SheepTuo :public Sheep,public Tuo
{

};

int main()
{
	SheepTuo st;
	//һֻ����ֻ��һ������
	st.Sheep::m_age = 40;
	st.Tuo::m_age = 10;

	cout << "st.Sheep::age = " << st.Sheep::m_age << endl;
	cout << "st.Tuo::age = " << st.Tuo::m_age << endl;
	cout << "st.age = " << st.m_age << endl;
	return 0;
}