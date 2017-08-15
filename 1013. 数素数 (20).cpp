#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isprime(int num)
{
	int i;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int m, n, counter = 1, level = 0;
	cin >> m >> n;
	for (int i = 2;; i++)
	{
		if (isprime(i))
		{
			if (counter == n)
			{
				cout << i;
				break;
			}
			if (counter >= m)
			{
				cout << i;
				if (level < 9)cout << " ";
				if (level == 9)cout << endl;
				level = (level + 1) % 10;
			}
			counter++;
		}
	}
	system("pause");
	return 0;
}
