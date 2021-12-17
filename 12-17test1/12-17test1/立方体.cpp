#include <iostream>
using namespace std;

class Cube
{
public:
	//���ó����
	void SetL(int l)
	{
		c_l = l;
	}
	void SetW(int w)
	{
		c_w =w;
	}
	void SetH(int h)
	{
		c_h = h;
	}
	int GetL()
	{
		return c_l;
	}
	int GetW()
	{
		return c_w;
	}
	int GetH()
	{
		return c_h;
	}
	//�����
	int CalcS()
	{
		return 2 * (c_l * c_w + c_l * c_h + c_w * c_h);
	}
	//�����
	int CalcV()
	{
		return c_l * c_w * c_h;
	}
	//���ó�Ա���� �ж������������Ƿ����
	bool CompareCubeByClass(Cube& c)
	{
		return c_l == c.GetL() && c_w == c.GetW()
			&& c_h == c.GetH();
	}
private:
	int c_l;
	int c_w;
	int c_h;
};

//     ����ȫ�ֺ��� �ж������������Ƿ����

bool CompareCube(Cube& c1, Cube& c2)
{
	if (c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW()
		&& c1.GetH() == c2.GetH())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube c1;
	c1.SetL(10);
	c1.SetW(10);
	c1.SetH(10);
	cout << "c1�����Ϊ:" << c1.CalcS() << endl;
	cout << "c1�����Ϊ:" << c1.CalcV() << endl;


	Cube c2;
	c2.SetL(10);
	c2.SetW(10);
	c2.SetH(10);
	//ȫ�ֺ����ж�
	bool ret = CompareCube(c1, c2);
	printf("%d\n",ret);
	//��Ա�����ж�
	cout << c1.CompareCubeByClass(c2) << endl;
	return 0;
}