# include <iostream>
using namespace std;

int atk = 100;
int main()
{
	int atk = 200;
	cout << "hello world" << endl;
	cout << "atk="<< atk << endl;
	cout << "atk="<< ::atk << endl;   // :: ��ʾ������   ::ǰ�治�Ӷ��� ��ʾȫ��������


	//���û��������׼�ռ� ���� std::count ��  std::endl
	return 0;
}
