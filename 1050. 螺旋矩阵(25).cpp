#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}
int func(int N) {
	int i = sqrt((double)N);
	while (i >= 1) {
		if (N % i == 0)
			return i;
		i--;
	}
	return 1;
}
int main()
{
	int num, list[10000] = { 0 }, i, j, m, n, matrix[100][100] = { 0 }, ct = 0,level, flag = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &list[i]);
	}
	//½µÐò
	qsort(list, num, sizeof(int), cmp);
	n = func(num);
	m = num / n;
	level = m / 2 + m % 2;
	for ( i = 0; i < level; i++) {
		for ( j = i; j <= n - 1 - i && ct <= num - 1; j++) {
			matrix[i][j] = list[ct++];
		}
		for ( j = i + 1; j <= m - 2 - i && ct <= num - 1; j++) {
			matrix[j][n - 1 - i] = list[ct++];
		}
		for ( j = n - i - 1; j >= i && ct <= num - 1; j--) {
			matrix[m - 1 - i][j] = list[ct++];
		}
		for ( j = m - 2 - i; j >= i + 1 && ct <= num - 1; j--) {
			matrix[j][i] = list[ct++];
		}
	}
	//´òÓ¡¾ØÕó
	for (i = 0; i <= m - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			if (flag == 1)
				printf(" ");
			printf("%d", matrix[i][j]);
			flag = 1;
		}
		printf("\n");
		flag = 0;
	}
	system("pause");
	return 0;
}
