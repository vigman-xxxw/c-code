#include <iostream>
using namespace std;
#include <string>
class Student
{
public:  //����Ȩ��
	string s_name;
	int s_age;
};

void test1()
{
	Student s1;
	s1.s_age = 10;
	s1.s_name = "zhangsan";
	cout << "name:" << s1.s_name << endl;
	cout << "age:" << s1.s_age << endl;
}
//��������  ������Ԥ����ʱչ�� �Կռ任ʱ��    ���ڲ��ĺ���  ��ʽ������inline
inline void func();
inline void func() {  };

//��������
void func(int a,int b)
{
	cout << "func(int a)" << endl;
}
void func(int b)
{
	cout << "func(int b)" << endl;

}
void test2()
{
	func(1);

}
int main()
{
	//test1();
	test2();
	return 0;
}