#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myprint(int val)
{
	cout << val << endl;
}

int main()
{
	//��������һ��ģ��
	vector<int>v;   //����һ��vector���� �����д�ŵ���int����

	//����Ԫ��
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//����Ԫ��
	vector<int> ::iterator itBegin = v.begin(); //v.begin() ��ʼ������ָ�������е�һ������
	vector<int> ::iterator itEnd = v.end(); //v.End() ��ʼ������ָ�����������һ�����ݵ���һ��λ��
	
	//��һ�ֱ���
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;

	}

	//�����ֱ���
	for_each(v.begin(),v.end(),myprint);



	return 0;
}