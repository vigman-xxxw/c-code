#include <iostream>
using namespace std;

//�쳣�Ļ���
class BaseException
{
public:
	virtual void printerror() = 0;

};
//��ָ���쳣
class NULLPointException : public BaseException
{
public:
	virtual void printerror()
	{
		cout << "��ָ����쳣" << endl;
	}
};
//Խ���쳣
class OutOfRangeException : public BaseException
{
public:
	virtual void printerror()
	{
		cout << "Խ����쳣" << endl;
	}
};
void dowork()
{
	throw NULLPointException();
}
int main()
{
	try
	{
		dowork();
	}
	catch (BaseException & e)
	{
		e.printerror();
	}
	return 0;
}