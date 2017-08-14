#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int N, K, t;
	cin >> N;
	int score[100] = { 0 };
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		score[t]++;
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> t;
		cout << score[t];
		if (i != K - 1)
			cout << " ";
	}
	system("pause");
	return 0;
}
