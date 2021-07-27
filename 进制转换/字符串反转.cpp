#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	int i;
	int j;
	int tmp;

	cout << "ÊäÈë×Ö·û´®£º";
	cin >> str;

	i = 0;
	j = str.length() - 1;

	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	cout << str << endl;

	system("pause");
	return 0;

}