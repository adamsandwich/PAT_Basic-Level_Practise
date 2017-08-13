#include<iostream>
#include<string>
#include<vector>
using namespace std;

char capitalHigher(char ch)
{
	if (ch >= 'a'&&ch <= 'z')
		ch = ch - 'a' + 'A';
	return ch;
}
int main()
{
	int counter[128] = { 0 };
	char ch;
	string realInput;
	cin >> realInput;
	int len = realInput.length();
	while ((ch = capitalHigher(getchar())) != '\n');
	while ((ch = capitalHigher(getchar())) != '\n')counter[ch]++;
	for (int i = 0; i < len; i++)
	{
		if (counter[capitalHigher(realInput[i])] == 0)
		{
			cout << capitalHigher(realInput[i]);
			counter[capitalHigher(realInput[i])] = -1;
		}
	}
	system("pause");
	return 0;
}
