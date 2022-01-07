#include <iostream>
using namespace std;

//CPU����
class CPU
{
public:
	//
	//���麯��
	virtual void  calculate() = 0;
};

//�Կ�����
class VideoCard
{
public:
	virtual void display() = 0;
};

//�ڴ����
class Memory
{
public:
	virtual void storage() = 0;
};

//������
class computer
{
public:

	computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		cout << "���ԵĹ������" << endl;
		this->m_cpu = cpu;
		this->m_vc = vc;
		this->m_mem = mem;
	}

	void doWork()
	{
		this->m_cpu->calculate();
		this->m_vc->display();
		this->m_mem->storage();
	}

	~computer()
	{
		cout << "���Ե���������" << endl;
		if (this->m_cpu)
		{
			delete this->m_cpu;
			this->m_cpu = NULL;
		}
		if (this->m_vc)
		{
			delete this->m_vc;
			this->m_vc = NULL;
		}
		if (this->m_mem)
		{
			delete this->m_mem;
			this->m_mem = NULL;
		}
	}

	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

//���� inter
class interCPU :public CPU
{
public:
	void calculate()
	{
		cout << "inter CPU ��ʼ������" << endl;
	}
};

class interVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "inter �Կ� ��ʼ��ʾ��" << endl;
	}
};

class interMemory :public Memory
{
public:
	void storage()
	{
		cout << "inter �ڴ� ��ʼ�洢��" << endl;
	}
};

//Lenovo
class LenoveCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenove CPU ��ʼ������" << endl;
	}
};

class LenoveVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenove �Կ� ��ʼ��ʾ��" << endl;
	}
};

class LenoveMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenove �ڴ� ��ʼ�洢��" << endl;
	}
};


int main()
{
	cout << "��װһ̨����" << endl;
	CPU* intercpu = new interCPU;  //��̬:�����ָ��ָ������Ķ���
	VideoCard* lenovevc = new LenoveVideoCard;
	Memory* lenovemem = new LenoveMemory;

	 
	computer c1(intercpu, lenovevc, lenovemem);
	c1.doWork();

	return 0;
}