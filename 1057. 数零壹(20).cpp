#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count0 = 0, count1 = 0, count = 0;
	char c;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' )
		{
			count += c - 'a' + 1;
		}
		if (c >= 'A'&&c <= 'Z')
		{
			count += c - 'A' + 1;
		}
	}
	while (count != 0)
	{
		if (count % 2 == 1)
		{
			count1++;
		}
		else
		{
			count0++;
		}
		count /= 2;
	}
	printf("%d %d", count0, count1);
	system("pause");
	return 0;
}
