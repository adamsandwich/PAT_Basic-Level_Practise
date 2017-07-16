#include<stdio.h>
int main()
{
	char s[1000],c[3]={0};
	int i=0,sum=0;
	scanf("%s",&s);
	while(s[i]-'0'>=0 && s[i]-'0'<=9)
		sum+=s[i++]-'0';
	i=0;
	while(sum!=0)
	{
		c[i++]=sum%10;
		sum/=10; 
	}
	for(i--;i>=0;i--)
	{
		switch(c[i])
		{
			case 0 : printf("ling");break;
			case 1 : printf("yi");break;
			case 2 : printf("er");break;
			case 3 : printf("san");break;
			case 4 : printf("si");break;
			case 5 : printf("wu");break;
			case 6 : printf("liu");break;
			case 7 : printf("qi");break;
			case 8 : printf("ba");break;
			case 9 : printf("jiu");break;
		}
		if(i!=0)
			printf(" ");
	}
	if(c[0]==0 && c[1]==0 && c[2]==0)
		printf("ling");
} 
//1234567890987654321123456789
