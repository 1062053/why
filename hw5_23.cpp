#include<iostream>
using namespace std;

int main()
{
	int n, j;
	for (n = 1; n <= 5; n++)//����
	{
		for (j = 0; j < 5 - n; j++)//����ո��λ��
			cout << " ";
		for (j = 0; j < 2 * n - 1; j++)//�������ǵ�λ��
			cout << "*";
		cout << endl;
	}
	for (n = 6; n <= 9; n++)//����
	{
		for (j = 4; j > 9 - n; j--)//����ո��λ��
			cout << " ";
		for (j = 7; j >= 2 * (n - 5) - 1; j--)//�������ǵ�λ��
			cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}