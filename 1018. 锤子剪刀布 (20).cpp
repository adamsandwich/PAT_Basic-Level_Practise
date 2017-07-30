#include<stdio.h>
int main()
{
	int num, i;
	int J[4] = { 0 }, Y[4] = { 0 };
	char p, q;
	scanf("%d", &num);
	while (getchar() != '\n');
	for (i = 0; i < num; i++)
	{
		scanf("%c %c", &p, &q);
		while (getchar() != '\n');
		if (p == 'B'&& q == 'C') { J[1]++; J[0]++; }
		if (p == 'B'&& q == 'J') { Y[3]++; Y[0]++; }
		if (p == 'J'&& q == 'B') { J[3]++; J[0]++; }
		if (p == 'J'&& q == 'C') { Y[2]++; Y[0]++; }
		if (p == 'C'&& q == 'B') { Y[1]++; Y[0]++; }
		if (p == 'C'&& q == 'J') { J[2]++; J[0]++; }
	}
	printf("%d %d %d\n", J[0], num - J[0] - Y[0], Y[0]);
	printf("%d %d %d\n", Y[0], num - J[0] - Y[0], J[0]);
	J[1] >= J[2] ? (J[1] >= J[3] ? printf("B") : printf("J")) : (J[2] >= J[3] ? printf("C") : printf("J"));
	printf(" ");
	Y[1] >= Y[2] ? (Y[1] >= Y[3] ? printf("B") : printf("J")) : (Y[2] >= Y[3] ? printf("C") : printf("J"));
	system("pause");
	return 0;
}
