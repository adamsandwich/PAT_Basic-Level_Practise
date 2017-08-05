#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//ÅĞ¶ÏÎªËØÊı 
bool isprime(int num)
{
	int i;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}
//-1 Checked
//0  Are you kidding?
//1  Mystery Award
//2  Minion
//3  Chocolate
int main()
{
	int num, list[10000] = { 0 },i,t,query[10000],querynum;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &t);
		if (i == 0)
		{
			list[t] = 1;
		}
		else if (isprime(i + 1))
		{
			list[t] = 2;
		}
		else
		{
			list[t] = 3;
		}
	}
	scanf("%d", &querynum);
	for (i = 0; i < querynum; i++)
	{
		scanf("%d", &query[i]);
	}
	for (i = 0; i < querynum; i++)
	{
		switch (list[query[i]])
		{
		case 0:printf("%04d: Are you kidding?\n", query[i]); break;
		case -1:printf("%04d: Checked\n", query[i]); break;
		case 1:printf("%04d: Mystery Award\n", query[i]); list[query[i]] = -1; break;
		case 2:printf("%04d: Minion\n", query[i]); list[query[i]] = -1; break;
		case 3:printf("%04d: Chocolate\n", query[i]); list[query[i]] = -1; break;
		}
	}
	system("pause");
	return 0;
}
