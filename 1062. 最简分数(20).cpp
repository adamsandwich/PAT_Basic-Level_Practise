#include<stdio.h>
#include<stdlib.h>
#include<math.h>
bool judge(int a, int b)//是否最简分数
{
	int i;
	for (i = 2; i < b; i++)
	{
		if (b%i == 0 && a%i == 0) return false;
	}
	return true;
}
int main()
{
	int n1, m1, n2, m2, k, i, flag = 0;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if (n1*m2 > n2*m1)
	{
		i = n1; n1 = n2; n2 = i;
		i = m1; m1 = m2; m2 = i;
	}
	for (i = k*n1 / m1 + 1; i*m2 < n2*k; i++)
	{
		if (judge(i, k))
		{
			if (flag == 1)
			{
				printf(" ");
			}
			printf("%d/%d", i, k);
			flag = 1;
		}
	}
	system("pause");
	return 0;
}
