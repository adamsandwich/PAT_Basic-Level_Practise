#include<stdio.h> 
int main()
{
	int N,m,i,num[100],t;
	scanf("%d %d",&N,&m);
	if(m>=N)
		m%=N;
	for(i=N-1;i>=0;i--)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<m/2;i++)
	{
		t=num[i];
		num[i]=num[m-1-i];
		num[m-1-i]=t;
	}
	for(i=m;i<m+(N-m)/2;i++)
	{
		t=num[i];
		num[i]=num[N+m-1-i];
		num[N+m-1-i]=t;
	}
	for(i=0;i<N;i++)
	{
		printf("%d",num[i]);
		if(i!=N-1)
			printf(" ");
	}
}
//1 2 3 4 5 6
//6 5 4 3 2 1
//4 5 6 
