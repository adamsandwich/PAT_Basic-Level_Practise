#include<stdio.h>
int main()
{
	int tbl[101]={0};
	int i,j,k,n;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		tbl[n]=1;
	}
	for(i=1;i<101;i++)if(tbl[i])
	{
		for(j=i;j>1;)
		{
			if(j%2)
				j=((j*3)+1)/2;
			else
				j/=2;
			if(tbl[j] && j<101)
			{
				k--;
				tbl[j]=0;
				if(j<i)break;
			}
		} 
	}
	for(i=100;i>0;i--)if(tbl[i])
		printf("%d%c",i,--k?' ':'\0');
}
