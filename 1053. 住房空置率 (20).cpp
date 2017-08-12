#include<iostream>
#include<string>
using namespace std;
int main()
{
	// n 房屋数 e电量阈值 d 观察期阈值
	int n, d, possibleempty = 0, empty = 0,t;
	float e;
	cin >> n >> e >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> t;//该住户观察天数
		int low = 0;//低于阈值的天数
		for (int j = 0; j < t; j++)
		{
			float temp;
			cin >> temp;
			if (temp < e)
				low++;
		}
		if (t > d && low > t / 2)
			empty++;
		if (t <= d&&low > t / 2)
			possibleempty++;
	}
	printf("%.1f%% %.1f%%", possibleempty*1.0 / n*100.0, empty*1.0 / n*100.0);
	system("pause");
	return 0;
}
