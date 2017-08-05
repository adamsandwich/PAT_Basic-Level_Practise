#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int couple[100000] = { 0 }, couplea[100000] = { 0 }, coupleb[100000] = { 0 }, n, m, list[100000] = { 0 }, i, a, b, flag = 0, count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		couple[a] = i + 1;
		couple[b] = i + 1;
		couplea[i + 1] = a;
		coupleb[i + 1] = b;
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a);
		list[a] = 1;
	}
	for (i = 0; i < 100000; i++)
	{
		if (list[i] == 1)//是要查询的值 值为i
		{
			if (couple[i] != 0)//查询的值有配对
			{
				if (couplea[couple[i]] != i && couplea[couple[i]] != 0)
				{
					if (list[couplea[couple[i]]] == 1)
					{
						list[couplea[couple[i]]] = 0;
						list[i] = 0;
					}
				}
				if (coupleb[couple[i]] != i && coupleb[couple[i]] != 0)
				{
					if (list[coupleb[couple[i]]] == 1)
					{
						list[coupleb[couple[i]]] = 0;
						list[i] = 0;
					}
				}
			}
		}
	}
	for (i = 0; i < 100000; i++)
	{
		if (list[i] != 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 0; i < 100000; i++)
	{
		if (list[i] == 1)
		{
			if (flag == 1)
				printf(" ");
			printf("%05d", i);
			flag = 1;
		}
	}
	system("pause");
	return 0;
}
