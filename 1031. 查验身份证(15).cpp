#include<iostream>
#include<string>
#include<vector>
using namespace std;

char calVerifCode(string id)
{
	int wth[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char verif[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int sum = 0;
	for (int i = 0; i < 17; i++)
		sum += wth[i] * (id[i] - '0');
	sum %= 11;
	return verif[sum];
}
int main()
{
	int n, invalid = 0;
	cin >> n;
	vector<string> listin;
	vector<int> valid;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		listin.push_back(temp);
		if (calVerifCode(temp) == temp[17])
			valid.push_back(1);
		else
		{
			valid.push_back(0);
			invalid++;
		}
	}
	if (invalid == 0)
		cout << "All passed";
	else
	{
		for (int i = 0; i < valid.size(); i++)
		{
			if (valid[i] == 0)
				cout << listin[i] << endl;
		}
	}
	system("pause");
	return 0;
}
