#include<iostream>
#include<string>
using namespace std;
int main()
{
	int c1, c2, allsec;
	cin >> c1 >> c2;
	float time = (c2 - c1 + 50) / 100;
	allsec = (int)time;
	int hours = 0,minutes=0;
	while (allsec >= 3600)
	{
		allsec -= 3600;
		hours++;
	}
	while (allsec >= 60)
	{
		allsec -= 60;
		minutes++;
	}
	printf("%02d:%02d:%02d", hours, minutes, allsec);
	system("pause");
	return 0;
}
