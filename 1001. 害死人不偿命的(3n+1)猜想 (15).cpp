#include <stdio.h>
int main()
{
	int s,i=0;
	scanf("%d",&s);
	while(s!=1)
	{
		i++;
		if(s%2==0)
		{
			s/=2;
		}
		else
		{
			s=3*s+1;
			s/=2;
		}
	}
	printf("%d",i);
}
