#include <iostream>
#include <string>

using namespace std;

int main() {

	string num;
	int i = 0;
	int ret = 0;
	int p = 1;
	int sum = 0;



	cout << "输入一个二进制数字：";
	cin >> num;

	for ( i = num.length()-1; i >= 0; i--)
	{
		ret = num[i] - '0'; //将二进制字符串逐个取出存放在int类型的ret中
		sum += ret * p;
		p *= 2;
		
	}

	cout << sum << endl;
	system("pause");
	return 0;
}