#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int a, b, d, num;
	string ch = "";
	cin >> a >> b >> d;
	num = a + b;
	while (num != 0)
	{
		char temp = (num % d) + '0';
		ch = temp + ch;
		num /= d;
	}
	if (ch == "")
		ch = "0";
	cout << ch;
	system("pause");
	return 0;
}
