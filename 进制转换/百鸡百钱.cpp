#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 1;
	int z = 1;

	/*
	���㾭��
	����һֵǮ�壬��ĸһֵǮ����������ֵǮһ��
	��Ǯ��ټ����ʼ��̡���ĸ�����������Σ�
	*/
	for ( x = 1; x <= 20; x++)
	{
		for ( y = 1; y <= 33; y++)
		{
			z = 100 - x - y;
			if (15*x + 9*y + z == 300)
			{
				cout << "����" << x << "ĸ��" << y << "С��" << z << endl;
			}

		}
	}

	system("pause");
	return 0;

}