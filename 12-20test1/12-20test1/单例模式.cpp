#include <iostream>
using namespace std;

class ChairMan
{
public:
	static ChairMan* GetInstance()
	{
		return singleman;
	}
private:
	//�����캯��˽�л� �����Դ����������
	ChairMan() { }
	ChairMan(const ChairMan &){}
	//����ϯָ��˽�л� �����ṩֻ���ӿ�
	static ChairMan* singleman;  //�������� �����ʼ��
};
ChairMan* ChairMan::singleman = new ChairMan;

void test1()
{
	ChairMan* c1 = ChairMan::GetInstance();
	ChairMan* c2 = ChairMan::GetInstance();
	if (c1 == c2)
		cout << "c1 == c2" << endl;
	else
		cout << "c1 != c2" << endl;

}

int main()
{
	test1();
	return 0;
}