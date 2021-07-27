#include <iostream>

using namespace std;

int main() {

	int num = 0;
	int ret[32] = { 0 };
	int i = 0;

	cout << "输入一个十进制整数：";
	cin >> num;

	if (num < 0)
	{
		cout << "请输入一个正数" << endl;
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