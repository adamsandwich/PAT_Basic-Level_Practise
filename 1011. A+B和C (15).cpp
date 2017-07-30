#include<stdio.h>
int main()
{
	int nums,i;
	long long num[10][3];
	scanf("%d",&nums);
	for(i=0;i<nums;i++)
	{
		scanf("%ld %ld %ld",&num[i][0],&num[i][1],&num[i][2]);
	}
	for(i=0;i<nums;i++)
	{
		if(num[i][0]+num[i][1]>num[i][2])
			printf("Case #%d: true",i+1);
		else
			printf("Case #%d: false",i+1);
		if(i!=nums-1)
			printf("\n");
	}
}
