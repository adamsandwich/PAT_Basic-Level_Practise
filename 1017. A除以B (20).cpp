#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string num;
	int mod;
	cin >> num >> mod;
	int len = num.length(), t=0;
	for (int i = 0; i < len; i++)
	{
		t += num[i] - '0';
		if (i == 0 && t / mod == 0)
		{
			if (len == 1)
				cout << 0;
		}
		else
			cout << t / mod;
		t = (t%mod) * 10;
	}
	cout << " " << t/10;
	system("pause");
	return 0;
}
