#include<iostream>
#include<string>
#include<vector>
using namespace std;
//Galleon.Sickle.Knut
//        17     29
//应付的价钱P和他实付的钱A
int main()
{
	int pg, ps, pk, ag, as, ak, sum=0;
	char ch, sym = '+';
	cin >> pg >> ch >> ps >> ch >> pk >> ag >> ch >> as >> ch >> ak;
	sum = (ag - pg) * 17 * 29 + (as - ps) * 29 + ak - pk;
	if (sum < 0)
	{
		sum = -sum;
		sym = '-';
	}
	pg = sum / (17 * 29);
	ps = (sum - pg * 17 * 29) / 29;
	pk = sum - pg * 17 * 29 - ps * 29;
	if (sym == '-')
		cout << '-';
	cout << pg << "." << ps << "." << pk;
	system("pause");
	return 0;
}
