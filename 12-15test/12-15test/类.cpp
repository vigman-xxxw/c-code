#include <iostream>
using namespace std;
const double PI = 3.14;   //����define����  

class Circle
{
public:  //����Ȩ��
	//���еĺ��� ��Ϊ��Ա���� Ҳ�г�Ա����
	//��Բ�ܳ�
	double  CalcCircle()
	{
		return 2 * PI * circle_r;
	}
	//���ð뾶
	void SetR(int r)
	{
		circle_r = r;
	}
	//���еı��� ��Ϊ��Ա���� Ҳ�г�Ա����
	//�뾶
	int circle_r;
};
int main()
{
	Circle c1;    //ʵ��������  ��Ķ���
	c1.circle_r = 10;   //���ƽṹ��ĸ�ֵ
	c1.SetR(20);
	cout << "Բ���ܳ���: " << c1.CalcCircle() << endl;
	return 0;
}