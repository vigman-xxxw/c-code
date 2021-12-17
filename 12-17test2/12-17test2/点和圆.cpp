#include <iostream>
using namespace std;
//����
class Point
{
public:
	//����x,y ��ȡx,y
	void SetX(int x)
	{
		p_x = x;
	}
	void SetY(int y)
	{
		p_y = y;
	}
	int GetX()
	{
		return p_x;
	}
	int GetY()
	{
		return p_y;
	}

private:
	int p_x;
	int p_y;
};

//Բ��
class Circle
{
public:
	//���ð뾶
	void SetR(int r)
	{
		c_r = r;
	}
	//��ȡ�뾶
	int GetR()
	{
		return c_r;
	}
	//����Բ��
	void SetCenter(Point p)
	{
		c_center = p;
	}
	//��ȡԲ��
	Point GetCenter()
	{
		return c_center;
	}
	//��Ա���� �жϵ��Բ�Ĺ�ϵ
	void IsInCircleByClass(Point p)
	{
		int distance = (c_center.GetX() - p.GetX()) *
			(c_center.GetX() - p.GetX()) +
			(c_center.GetY() - p.GetY()) *
			(c_center.GetY() - p.GetY());
		int r_distance = c_r * c_r;
		if (distance == r_distance)
		{
			cout << "����Բ��" << endl;
		}
		else if (distance > r_distance)
		{
			cout << "����Բ��" << endl;

		}
		else
		{
			cout << "����Բ��" << endl;

		}
	}
private:
	int c_r; //�뾶
	Point c_center; //Բ��
};

//����ȫ�ֺ��� �жϵ��Բ�Ĺ�ϵ
void IsInCircle(Circle c, Point p)
{
	int distance = (c.GetCenter().GetX() - p.GetX()) *
		(c.GetCenter().GetX() - p.GetX()) +
		(c.GetCenter().GetY() - p.GetY()) *
		(c.GetCenter().GetY() - p.GetY());
	int r_distance = c.GetR() * c.GetR();
	if (distance == r_distance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > r_distance)
	{
		cout << "����Բ��" << endl;

	}
	else
	{
		cout << "����Բ��" << endl;

	}
}

int main()
{
	//ʵ������
	Point p;
	p.SetX(10);
	p.SetY(10);
	//ʵ����Բ
	Circle c;
	//����Բ��Բ��
	Point c_center;
	c_center.SetX(10);
	c_center.SetY(0);
	c.SetCenter(c_center);
	//���ð뾶
	c.SetR(10);
	//ȫ�ֺ��� �жϵ��Բ�Ĺ�ϵ
	IsInCircle(c, p);
	//��Ա���� �жϵ��Բ�Ĺ�ϵ
	c.IsInCircleByClass(p);
	return 0;
}