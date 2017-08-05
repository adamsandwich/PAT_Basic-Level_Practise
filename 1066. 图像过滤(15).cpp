#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m, n, a, b, replace, pic[500][500], i, j;
	scanf("%d %d %d %d %d", &m, &n, &a, &b, &replace);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &pic[i][j]);
			if (pic[i][j] <= b &&pic[i][j] >= a)
			{
				pic[i][j] = replace;
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%03d", pic[i][j]);
			if (j != n - 1)
			{
				printf(" ");
			}
		}
		if (i != m - 1)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
