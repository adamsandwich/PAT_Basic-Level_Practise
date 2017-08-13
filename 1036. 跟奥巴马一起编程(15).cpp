#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n, row;
	char ch;
	cin >> n >> ch;
	row = (int)(n / 2.0 + 0.5);
	//得出一行的内容
	string strRow = "";
	strRow += ch;
	for (int i = 0; i < n - 2; i++)strRow += " ";
	strRow += ch;
	for (int i = 0; i < n; i++)cout << ch;
	cout << endl;
	for (int i = 0; i < row - 2; i++)
		cout << strRow << endl;
	for (int i = 0; i < n; i++)cout << ch;
	system("pause");
	return 0;
}
