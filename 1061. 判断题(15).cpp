#include<stdio.h>
#include<stdlib.h>
int main()
{
	int studentnum, scorenum, score[100], right[100], list[100] = { 0 }, i, j, t;
	scanf("%d %d", &studentnum, &scorenum);
	for (i = 0; i < scorenum; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < scorenum; i++)
	{
		scanf("%d", &right[i]);
	}
	for (i = 0; i < studentnum; i++)
	{
		for (j = 0; j < scorenum; j++)
		{
			scanf("%d", &t);
			if (t == right[j])
			{
				list[i] += score[j];
			}
		}
	}
	for (i = 0; i < studentnum; i++)
	{
		printf("%d\n", list[i]);
	}
	system("pause");
	return 0;
}
