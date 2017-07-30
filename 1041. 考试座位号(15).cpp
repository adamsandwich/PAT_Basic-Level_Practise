#include<stdio.h>
struct pat
{
	char admission[14];
	int test;
	int exam;
};
int main()
{
	int num,i,j,querynum,query[1000];
	scanf("%d", &num);
	struct pat pat[1000];
	for (i = 0; i < num; i++)
	{
		scanf("%s %d %d", &pat[i].admission, &pat[i].test, &pat[i].exam);
		getchar();
	}
	scanf("%d", &querynum);
	for (i = 0; i < querynum; i++)
		scanf("%d", &query[i]);
	for (i = 0; i < querynum; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (query[i] == pat[j].test)
				printf("%s %d\n", pat[j].admission, pat[j].exam);
		}
	}
	system("pause");
	return 0;
}
