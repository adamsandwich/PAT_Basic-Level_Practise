#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[10], i, count = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		count += num[i];
	}
	if (num[0] != 0)
	{
		for (i = 1; i < 10; i++)
		{
			if (num[i] != 0)
			{
				printf("%d", i);
				num[i]--;
				break;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (; num[i] != 0;)
		{
			if (num[i] != 0)
			{
				printf("%d", i);
				num[i]--;
			}
		}
	}
	system("pause");
	return 0;
}
