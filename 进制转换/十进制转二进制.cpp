#include <iostream>

using namespace std;

int main() {

	int num = 0;
	int ret[32] = { 0 };
	int i = 0;

	cout << "����һ��ʮ����������";
	cin >> num;

	if (num < 0)
	{
		cout << "������һ������" << endl;
		return 1;
	}

	while (num)
	{
		ret[i++] = num % 2;
		num /= 2;
	}

	for ( i--; i >= 0; i--)
	{
		cout << ret[i] ;
	}

	cout << endl;
	system("pause");
	return 0;


}