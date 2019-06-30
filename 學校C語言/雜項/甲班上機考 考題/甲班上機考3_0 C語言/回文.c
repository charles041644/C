#include <stdio.h>


void meth(char str[200])
{
	int i,n;
	int ans=0;
	for(i=0;i<200;i++)
	{
		if(str[i]=='\0')
		{
			break;
		}
		else
		{
			n++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(str[i]!=str[n-i-1])
		{
			ans=1;
			break;
		}
		else
		{
			ans=0;
		}
		
		
	}
	if(ans==1)
	{
		printf("不是回文");
	}
	else
	{
		printf("是回文");
	}
}
int main()
{
	char str[200];
	scanf("%s",&str);
	meth(str);
} 
