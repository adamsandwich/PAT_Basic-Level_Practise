#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, max = 0,maxid;
	cin >> n;
	int *inputList = new int[n]();
	for (int i = 0; i < n; i++)
	{
		int id, score;
		cin >> id >> score;
		inputList[id] += score;
		if (inputList[id] > max)
		{
			max = inputList[id];
			maxid = id;
		}
	}
	cout << maxid << " " << max;
	system("pause");
	return 0;
}
