#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	
	(*(void (*)())0)();
	//����0��ַ���ú���
	//�ò����޲�,��������ʱvoid
	//void (*)()    -- ����ָ������
	//(void (*)())0       0ǰ���ǽ�0ǿ������ת�� ��intת�����޲κ������� ������Ϊһ��������ַ
	//������
	return 0;
}