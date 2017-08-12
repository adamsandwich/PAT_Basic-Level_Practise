#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num, N;
	char ch;
	cin >> N >> ch;
	for (num = 1; 2 * num*num - 1 <= N; num++); num--;
	for (int i = 0; i < 2 * num - 1; i++)
	{
		for (int j = 0; j < num - 1 - abs(num - i - 1); j++)putchar(' ');
		for (int j = 0; j < 2 * abs(num - i - 1) + 1; j++)putchar(ch);
		cout << endl;
	}
	cout << (N - 2 * num*num + 1);
	system("pause");
	return 0;
}
