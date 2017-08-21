#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
struct mooncake
{
	double inventory;
	double totalPrice;
	double price;
};
int cmp(const mooncake &a, const mooncake &b)
{
	return a.price > b.price;
}
int main()
{
	int num, demanded;
	double profit = 0.0;
	cin >> num >> demanded;
	mooncake *mooncake = new struct mooncake[num];
	for (int i = 0; i < num; i++)
	{
		cin >> mooncake[i].inventory;
	}
	for (int i = 0; i < num; i++)
	{
		cin >> mooncake[i].totalPrice;
		mooncake[i].price = mooncake[i].totalPrice / mooncake[i].inventory;
	}
	sort(mooncake, mooncake + num, cmp);
	for (int i = 0; i < num &&demanded; i++)
	{
		if (mooncake[i].inventory > demanded)
		{
			profit += demanded*mooncake[i].price;
			demanded = 0;
		}
		else
		{
			profit += mooncake[i].totalPrice;
			demanded -= mooncake[i].inventory;
		}

	}
	printf("%.2f", profit);
	system("pause");
	return 0;
}
