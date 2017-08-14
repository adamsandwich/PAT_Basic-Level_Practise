#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n, sum;
	cin >> n;
	vector<int> len;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		len.push_back(t);
	}

	sort(len.begin(), len.end());
	int i = 0;
	sum = *len.begin();
	for (vector<int>::iterator it = ++len.begin(); it != len.end(); it++)
	{
		sum = (sum + *it) / 2;
	}
	cout << sum;
	system("pause");
	return 0;
}
