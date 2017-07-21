#include<stdio.h>
#include<math.h>
//ÅĞ¶ÏÎªËØÊı 
bool isprime(int num)
{
	int i;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			return false;
	}
	return true;
}
int main()
{
	int N,i,temp=3,count=0;
	scanf("%d",&N);
	for(i=3;i<=N;i=i+2)
	{ 
		if(!isprime(i))
			continue;
		if(i-temp==2)
		{
			count++;
			temp=i;
		}
		temp=i;		
	} 
	printf("%d",count);
}
//3 5 7 11 13 17 19
