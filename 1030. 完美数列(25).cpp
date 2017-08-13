#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
int main()
{
	int N;
	long long p;
	cin >> N >> p;
	long long *seq = new long long[N];
	for (int i = 0; i < N; i++)
	{
		cin >> seq[i];
	}
	qsort(seq, N, sizeof(long long), cmp);
	int i, j;
	int result = 1;
	for (i = 0; i < N; i++)
	{
		for (j = i + result; j < N; j++)
		{
			if (seq[j] > seq[i] * p)
				break;
			result = max(result, j - i + 1);
		}
	}
	cout << result;
	system("pause");
	return 0;
}
