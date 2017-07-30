#include<stdio.h>
int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
//½µĞòÊı×é
int splitup(int num)
{
	int s[4], i, j, t, temp;
	for (i = 0; i < 4; i++)
	{
		s[i] = num % 10;
		num /= 10;
	}
	qsort(s, 4, sizeof(int), cmp);
	return s[0] + s[1] * 10 + s[2] * 100 + s[3] * 1000;
}
int reserve(int num)
{
	return num / 1000 + num % 1000 / 100 * 10 + num % 100 / 10 * 100 + num % 10 * 1000;
}
int main()
{
	int num, p,q;
	scanf("%d", &num);
	p = splitup(num);
	q = reserve(p);
	while (1)
	{
		if (p == q)
		{
			printf("%04d - %04d = 0000\n", p, p);
			break;
		}
		printf("%04d - %04d = %04d\n", p, q, p - q);
		if (p - q == 6174)break;
		p = splitup(p - q);
		q = reserve(p);
	}
	
	system("pause");
	return 0;
}
