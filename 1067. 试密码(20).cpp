#include<iostream>
#include<string>
using namespace std;

int main()
{
	string rightKey, tryKey;
	int n, counter = 0;
	cin >> rightKey >> n;
	cin.get();
	for (int i = 0; i < n; i++)
	{
		getline(cin, tryKey);
		if (tryKey == "#")return 0;
		if (tryKey == rightKey)
		{
			cout << "Welcome in" ;
			return 0;
		}
		else
		{
			cout << "Wrong password: " << tryKey << endl;
			counter++;
		}
	}
	cout << "Account locked";
	system("pause");
	return 0;
}
