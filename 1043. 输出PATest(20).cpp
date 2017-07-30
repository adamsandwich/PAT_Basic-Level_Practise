#include<stdio.h>
int main()
{
	int patest[6] = {0},i;
	char c;
	while ((c = getchar()) != '\n')
	{
		if ( c == 'P')patest[0]++;
		if ( c == 'A')patest[1]++;
		if ( c == 'T') patest[2]++;
		if ( c == 'e')patest[3]++;
		if ( c == 's')patest[4]++;
		if ( c == 't')patest[5]++;
	}
	while (!(patest[0] == 0 && patest[1] == 0 && patest[2] == 0 && patest[3] == 0 && patest[4] == 0 && patest[5] == 0))
	{
		if (patest[0] != 0) { printf("P"); patest[0]--; }
		if (patest[1] != 0) { printf("A"); patest[1]--; }
		if (patest[2] != 0) { printf("T"); patest[2]--; }
		if (patest[3] != 0) { printf("e"); patest[3]--; }
		if (patest[4] != 0) { printf("s"); patest[4]--; }
		if (patest[5] != 0) { printf("t"); patest[5]--; }
	}
}

