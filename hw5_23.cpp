#include<iostream>
using namespace std;

int main()
{
	int n, j;
	for (n = 1; n <= 5; n++)//行数
	{
		for (j = 0; j < 5 - n; j++)//定义空格的位置
			cout << " ";
		for (j = 0; j < 2 * n - 1; j++)//定义星星的位置
			cout << "*";
		cout << endl;
	}
	for (n = 6; n <= 9; n++)//行数
	{
		for (j = 4; j > 9 - n; j--)//定义空格的位置
			cout << " ";
		for (j = 7; j >= 2 * (n - 5) - 1; j--)//定义星星的位置
			cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}