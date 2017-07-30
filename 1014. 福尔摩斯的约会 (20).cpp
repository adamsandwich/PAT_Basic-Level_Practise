 #include<stdio.h>
#include<string.h>
int main()
{
	char s1[60],s2[60],s3[60],s4[60],out[10];
	int l1,l2,l3,l4,i=0,j=0;
	scanf("%s%s%s%s",&s1,&s2,&s3,&s4);
	l1=strlen(s1);l2=strlen(s2);l3=strlen(s3);l4=strlen(s4);
	while(i<l1 && i<l2)
	{
		if(j==0 && s1[i]<='Z' && s1[i]>='A')
		{
			if(s1[i]==s2[i])
			{
				out[j]=s1[i];
				j++;
			}
		}
		if(j==1 && ((s1[i]<='N' && s1[i]>='A') || (s1[i]>='0' && s1[i]<='9')) )
		{
			if(s1[i]==s2[i])
			{
				out[j]=s1[i];
				j++;
			}
		}
		i++;
	}
	i=0;
	while(i<l3 && i<l4)
	{
		if(s3[i]>='a' && s3[i]<='z' || s3[i]>='A' && s3[i]<='Z')
		{
			if(s3[i]==s4[i])
			{
				out[j]=s1[i];
				break;
			}
		}
		i++;
	} 
		printf("%s",out);
}
/*
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm

DEs(s在第4位出现)
*/
