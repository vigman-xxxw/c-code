#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	void(*signal(int,void(*)(int)))(int);
	//1.signal ��() �Ƚ��,˵��signal�Ǻ�����
	//2.signal �Ǹ������� �����ĵ�һ������������int  �ڶ������������Ǻ���ָ��
	// �ú���ָ��,ָ��һ��int����,����������void
	//3.signal�����ķ�������Ҳ��һ������ָ��
	// �ú���ָ��,ָ��һ��int����,����������void
	//����һ�κ���������
	

	//���
	typedef unsigned int uint;    

	typedef void (*pfun_t)(int);
	//��void(*)(int)�ĺ���ָ������������Ϊpfun_t


	void(*)(int) signal(int, void(*)(int));   //�������۵�д�� �������﷨��Ҫ�Ѻ����Լ������Ĳ������ͷŵ�*����
	//����ָ�������滻֮��
	pfun_t signal(int, pfun_t);
	
	  
	return 0;
}