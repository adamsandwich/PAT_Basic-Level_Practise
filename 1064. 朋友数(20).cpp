#include<stdio.h>
#include<stdlib.h>
int main()
{
	int friendsnum[40] = { 0 }, i, j, k = 0, counter, temp, t;
	scanf("%d", &counter);
	for (i = 0; i < counter; i++)
	{
		scanf("%d", &temp);
		t = 0;
		while (temp != 0)
		{
			t += temp % 10;
			temp /= 10;
		}
		friendsnum[t]++;
	}
	for (i = 0, j = 0; i < 40; i++)
	{
		if (friendsnum[i] != 0)
		{
			j++;
		}
	}
	printf("%d\n", j);
	for (i = 0; i < 40; i++)
	{
		if (friendsnum[i] != 0)
		{
			printf("%d", i);
			k++;
			if (j != k)
				printf(" ");
		}
	}
	system("pause");
	return 0;
}
