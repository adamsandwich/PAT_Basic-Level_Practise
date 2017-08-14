#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int len;
	cin >> len;
	double sum = 0,temp;
	for (int i = 0; i < len; i++)
	{
		cin >> temp;
		sum += temp*(len - i)*(i + 1);
	}
	printf("%.2lf", sum);
	system("pause");
	return 0;
}
