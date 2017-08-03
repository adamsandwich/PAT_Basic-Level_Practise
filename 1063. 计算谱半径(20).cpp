#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num, i, a, b;
	float radius = 0.0;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d %d", &a, &b);
		if (radius < sqrt(a*a + b*b))
		{
			radius = sqrt(a*a + b*b);
		}
	}
	printf("%.2f", radius);
	system("pause");
	return 0;
}
