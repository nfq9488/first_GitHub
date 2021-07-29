#include <iostream>

using namespace std;

int main()
{

	char str[512];
	int i = 0;
	int count = 0;


	cout << "输入英文句子：";
	gets_s(str, sizeof(str));

	while (str[i] == ' ')i++;
	while (str[i]){
		while (str[i] && str[i] != ' ')i++;
		while (str[i] == ' ')i++;
		count++;
	}

	cout << "单词个数：" << count << endl;

	system("pause");
	return 0;
}