#pragma once
#include <iostream>
#include <string>
using namespace std;


//��ģ��
template<class T>
class MyArray
{
public:
	//�����û��ṩĬ��capacity �������������Ĭ�Ϲ���


	//�вι���
	MyArray(int capacity)
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		this->paddress = new T[this->m_capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		this->m_capacity = arr.capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[this->m_capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	
	}

	//����=
	MyArray& operator = (const MyArray& arr)
	{
		if (this->paddress)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
		this->m_capacity = arr.capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[this->m_capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}

		return *this;
	}
	
	//����[]
	T& operator[](int index)
	{
		return this->paddress[index];
	}
	//β�巨
	void pushback(const T& val)
	{
		if (this->m_capacity <= this->m_size)
		{
			return;
		}
		this->paddress[this->m_size] = val;
		this->m_size++;
	}

	//��ȡ��������
	int getcapacity()
	{
		return this->m_capacity;
	}

	//��ȡ�����С
	int getsize()
	{
		return this->m_size;
	}



	//��������
	~MyArray()
	{
		if (this->paddress)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
	}


private:
	T* paddress;  //ָ���������ָ��

	int m_capacity;

	int m_size;

};