#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int list[26] = { 0 }, max = 0, i;
	while ((c = getchar()) != '\n')
	{
		if ((c <= 'z'&&c >= 'a') || (c <= 'Z'&&c >= 'A'))
		{
			if (c < 'a')
			{
				list[c - 'A']++;
				if (max < list[c - 'A'])max = list[c - 'A'];
			}
			else
			{
				list[c - 'a']++;
				if (max < list[c - 'a'])max = list[c - 'a'];
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (list[i] == max)
		{
			printf("%c %d", 'a' + i, max);
			break;
		}
	}
	system("pause");
	return 0;
}
