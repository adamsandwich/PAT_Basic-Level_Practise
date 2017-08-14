#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int counter[200] = { 0 };
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A'&&ch <= 'Z')
			counter[ch - 'A' + 'a'] = -1;
		counter[ch] = -1;
	}
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'A'&&ch <= 'Z'&&counter['+'] == -1) || counter[ch] == -1)
			continue;
		cout << ch;
	}
	system("pause");
	return 0;
}
