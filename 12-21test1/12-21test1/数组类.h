#include <iostream>
using namespace std;

class Myarray
{
public:
	//Ĭ�Ϲ���
	Myarray();         

	//�вι���
	Myarray(int capacity);  

	//��������
	Myarray(const Myarray & arr);  

	//β�巨
	void PushBack(int val);

	//����λ����������
	void SetData(int pos,int val);

	//����λ�û�ȡ����
	int GetData(int pos);

	//��ȡ��������
	int GetCapacity();

	//��ȡ�����С
	int GetSize();

	//��������
	~Myarray();
private:
	int m_capacity; //��������
	int m_size;   //�����С
	int* address; //�ڶ������ٵ������ָ��
};