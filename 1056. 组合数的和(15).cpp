#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count, num[10],i,j,all=0;
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count; j++)
		{
			if (i == j)continue;
			all += num[i] * 10 + num[j];
		}
	}
	printf("%d", all);
	system("pause");
	return 0;
}
