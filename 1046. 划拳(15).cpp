#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A = 0, B = 0, i, num, a, b, c, d;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (a + c == b&&a + c != d)
		{
			B++;
		}
		if (a + c != b&&a + c == d)
		{
			A++;
		}
	}
	printf("%d %d", A, B);
	system("pause");
	return 0;
}
