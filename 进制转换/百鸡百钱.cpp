#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 1;
	int z = 1;

	/*
	《算经》
	鸡翁一值钱五，鸡母一值钱三，鸡雏三值钱一。
	百钱买百鸡，问鸡翁、鸡母、鸡雏各几何？
	*/
	for ( x = 1; x <= 20; x++)
	{
		for ( y = 1; y <= 33; y++)
		{
			z = 100 - x - y;
			if (15*x + 9*y + z == 300)
			{
				cout << "公鸡" << x << "母鸡" << y << "小鸡" << z << endl;
			}

		}
	}

	system("pause");
	return 0;

}