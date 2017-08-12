#include<iostream>
#include<string>
using namespace std;
int main()
{
	int A1=0, A2=0, A3=0, A5;
	float A4 = 0.0;
	int n, num, t, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
	bool flag = true;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		t = num % 5;
		if (t == 0 && num % 2 == 0)
		{
			flag1 = 1;
			A1 += num;
		}
		if (t == 1)
		{
			flag2 = 1;
			flag ? A2 += num : A2 -= num;
			flag = !flag;
		}
		if (t == 2)
		{
			flag3 = 1;
			A3++;
		}
		if (t == 3)
		{
			flag4++;
			A4 += num;
		}
		if (t == 4)
		{
			if (flag5 == 0)A5 = num;
			if (num > A5)A5 = num;
			flag5 = 1;
		}
	}
	if (flag1 == 1)cout << A1 << " ";
	else cout << "N ";
	if (flag2 == 1)cout << A2 << " ";
	else cout << "N ";
	if (flag3 == 1)cout << A3 << " ";
	else cout << "N ";
	if (flag4 != 0)printf("%.1f ", A4 / flag4);
	else cout << "N ";
	if (flag5 == 1)cout << A5;
	else cout << "N";
	system("pause");
	return 0;
}
