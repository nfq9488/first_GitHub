#include <iostream>

using namespace std;

int main()
{

	char str[512];
	int i = 0;
	int count = 0;


	cout << "����Ӣ�ľ��ӣ�";
	gets_s(str, sizeof(str));

	while (str[i] == ' ')i++;
	while (str[i]){
		while (str[i] && str[i] != ' ')i++;
		while (str[i] == ' ')i++;
		count++;
	}

	cout << "���ʸ�����" << count << endl;

	system("pause");
	return 0;
}