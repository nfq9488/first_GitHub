#include <iostream>

using namespace std;

int main() {

	char str[512];
	int i = 0;
	int j = 0;
	int k1 = 0;
	int k2 = 0;
	char tmp = 0;;


	cout << "输入一个英文句子：";
	gets_s(str, sizeof(str));

	while (str[i]){
		while (str[i] == ' ')i++;
		j = i;
		while (str[j] && str[j] != ' ')j++;

		for (k1 = i, k2 = j - 1; k1 < k2; k1++, k2--) {
			tmp = str[k1];
			str[k1] = str[k2];
			str[k2] = tmp;
		}
		i = j;

	}

	for (k1 = 0, k2 = j - 1; k1 < k2; k1++, k2--) {
		tmp = str[k1];
		str[k1] = str[k2];
		str[k2] = tmp;
	}

	cout << str << endl;

	system("pause");
	return 0;

}