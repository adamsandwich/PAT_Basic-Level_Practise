// ConsoleApplication.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
int main()
{
	int a, da, b, db, o1 = 0, o2 = 0;
	int na = 0, nb = 0, i=0;
	scanf("%d%d%d%d", &a, &da, &b, &db);
	while (i++ < 10)
	{
		if (a == 0 && b == 0)
			break;
		if (a % 10 == da)
		{
			na++;
			a /= 10;
		}
		else
		{
			a /= 10;
		}
		if (b % 10 == db)
		{
			nb++;
			b /= 10;
		}
		else
		{
			b /= 10;
		}
	}
	if (na != 0)
	{
		for (i = 1, o1 = da; i < na; i++)
		{
			o1 = da + o1 * 10;
		}
	}
	if (nb != 0)
	{
		for (i = 1, o2 = db; i < nb; i++)
		{
			o2 = db + o2 * 10;
		}
	}
	printf("%d", o1 + o2);
}
//in:  3862767 6 13530293 3
//out: 399

