#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int num, max = 0, score[10000] = { 0 };
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int serialNum, t, result;
		scanf("%d-%d %d", &serialNum, &t, &result);
		score[serialNum] += result;
		if (score[serialNum] > score[max])
			max = serialNum;
	}
	cout << max << " " << score[max];
	system("pause");
	return 0;
}
