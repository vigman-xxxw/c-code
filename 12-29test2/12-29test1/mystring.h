#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>
class MyString
{
	friend ostream& operator<<(ostream& cout, MyString& str);

public:


	MyString(const char* str);
	MyString(const MyString & str);
	~MyString();


private:
	char * pString; //ά���ڶ������ٵ��ַ�����
	int m_size;   //�ַ������� ��ͳ�� \0
};