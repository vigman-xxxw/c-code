#include <iostream>
#include <cstdlib>
using namespace std;

struct Person
{
	int age;
};

//����
void allocateSpace1(Person * &p)
{
	p = (Person*)malloc(sizeof(Person));
	p->age = 20;
}

//�༶ָ��
void allocateSpace2(Person ** p)
{
	//pָ��ָ���ָ�� *pָ�� ָ�����person����  **p person����
	*p = (Person*)malloc(sizeof(Person));
	(*p)->age = 10;
}



void test1()
{
	Person * p = NULL;
	allocateSpace1(p);
	//allocateSpace2(&p);
	cout << "p->age= " << p->age << endl;
}

int main()
{
	test1();

	return 0;
}