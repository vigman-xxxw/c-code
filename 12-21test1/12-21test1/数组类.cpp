#include "������.h"

//Ĭ�Ϲ���
Myarray::Myarray()
{
	this->m_capacity = 100;
	this->m_size = 0;
	this->address = new int[this->m_capacity];
}

//�вι���
Myarray::Myarray(int capacity)
{
	this->m_capacity = capacity;
	this->m_size = 0;
	this->address = new int[this->m_capacity];
}

//��������
Myarray::Myarray(const Myarray & arr)
{
	this->m_capacity = arr.m_capacity;
	this->m_size = arr.m_size;
	this->address = new int[arr.m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		this->address[i] = arr.address[i];
	}
}

//β�巨
void Myarray::PushBack(int val)
{
	this->address[this->m_size] = val;
	this->m_size++;
}

//����λ����������
void Myarray::SetData(int pos, int val)
{
	this->address[pos] = val;
}

//����λ�û�ȡ����
int Myarray::GetData(int pos)
{
	return this->address[pos];
}

//��ȡ��������
int Myarray::GetCapacity()
{
	return this->m_capacity;

}

//��ȡ�����С
int Myarray::GetSize()
{
	return this->m_size;

}

//��������
Myarray::~Myarray()
{
	if (this->address != NULL)
	{
		delete[] this->address;
		this->address = NULL;
	}
}