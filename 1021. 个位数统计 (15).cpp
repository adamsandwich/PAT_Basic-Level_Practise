#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string num;
	cin >> num;
	int len = num.length(), t, counter[10] = { 0 };
	for (int i = 0; i < len; i++)
	{
		t = num[i] - '0';
		counter[t]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (counter[i] != 0)
			cout << i << ":" << counter[i] << endl;
	}
	system("pause");
	return 0;
}
