#include <iostream>
using namespace std;

int main()
{
	cout << "����0��10֮�������" << endl;
	int num;
	while (true)
	{
		cin >> num;
		if (num >= 0 && num <= 10)
		{
			cout << "������ȷ,���ֵΪ: " << num << endl;
			break;
		}

		//��ջ����� ���ñ�־λ  
		cin.clear();
		cin.sync();

		//�����־λΪ 0 ������������   �����־λΪ 1 �������쳣
		cout << "cin.fail() = " << cin.fail() << endl;

	}
	return 0;
}